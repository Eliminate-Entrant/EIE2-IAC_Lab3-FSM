module top (
    input logic rst,
    input logic rst1,
    input logic N,
    input logic clk,
    output logic [7:0] data_out
);

logic tick;

clktick mytick(
    .clk (clk),
    .rst (rst),
    .en (1),
    .N (N),
    .tick (tick)
);

f1_fsm myf1(
    .rst (rst1),
    .en (tick),
    .clk (clk),
    .data_out (data_out)
);

endmodule
