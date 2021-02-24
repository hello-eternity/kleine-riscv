module writeback (
    input clk,
    // from memory
    input [31:0] pc_in,
    input [31:0] next_pc_in,
    // from memory (control WB)
    input [31:0] alu_data_in,
    input [31:0] csr_data_in,
    input [31:0] load_data_in,
    input [1:0] write_select_in,
    input [4:0] rd_address_in,
    input [11:0] csr_address_in,
    input mret_in,
    input wfi_in,
    // from memory
    input valid_in,
    input [3:0] ecause_in,
    input exception_in,
    
    // from csr
    input sip,
    input tip,
    input eip,

    // to regfile
    output [4:0] rd_address,
    output reg [31:0] rd_data,

    // to fetch and csr
    output traped,

    // to csr
    output retired,
    output reg ecause,
    output reg interupt,
    output [31:0] ecp,
);

`include "../params.vh"

wire to_execute = !exception_in && valid_in;

assign traped = (sip || tip || eip || exception_in);
assign ecp = wfi_in ? next_pc_in : pc_in;

assign retired = to_execute && !traped;

always @(*) begin
    if (eip) begin
        ecause = 11;
        interupt = 1;
    end else if (tip) begin
        ecause = 7;
        interupt = 1;
    end else if (sip) begin
        ecause = 3;
        interupt = 1;
    end else if (exception_in) begin
        ecause = ecause_in;
        interupt = 0;
    end else begin
        ecause = 0;
        interupt = 0;
    end
end

assign rd_address = (!to_execute || traped) ? 0 : rd_address_in;

always @(*) begin
    case (write_select_in)
        WRITE_SEL_ALU: rd_data = alu_data_in;
        WRITE_SEL_CSR: rd_data = csr_data_in;
        WRITE_SEL_LOAD: rd_data = load_data_in;
        WRITE_SEL_NEXT_PC: rd_data = next_pc_in;
    endcase
end

endmodule