#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_fsm.h"
#include "../vbuddy.cpp"
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env){
	int simcyc;
	int tick;

	Verilated::commandArgs(argc, argv);

	Vf1_fsm* top = new Vf1_fsm;

	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	top->trace(tfp,99);
	tfp->open ("f1_fsm.vcd");

	if(vbdOpen()!=1) return -1;
	vbdHeader("VROOOM VROOM");
	vbdSetMode(1);

	top->clk = 1;
	top->rst = 0;
	top-> en = 0;

	for(simcyc = 0;simcyc<MAX_SIM_CYC;simcyc++){
		for (tick=0; tick<2; tick++) {
			tfp->dump (2*simcyc+tick);
			top->clk = !top->clk;
			top->eval ();
		}

		top->rst = (simcyc<2);
		top->en = vbdFlag();

		vbdHex(1, top->data_out & 0xF);
		vbdBar(top->data_out & 0xFF);

		    // either simulation finished, or 'q' is pressed
    	if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      		exit(0);
	}
vbdClose();     // ++++
tfp->close(); 
exit(0);
}