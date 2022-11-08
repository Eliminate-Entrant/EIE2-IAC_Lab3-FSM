module lfsr (
    input logic rst,
    input logic en,
    input logic clk,
    output logic [7:1] data_out
);

logic [7:1] sreg;
always_ff @ (posedge clk, posedge rst)
    if (rst)
        sreg <= 7'b1;
    else if (en)
        sreg <= {sreg[7:1], sreg[7] ^ sreg[6]};
assign data_out = sreg;
endmodule
