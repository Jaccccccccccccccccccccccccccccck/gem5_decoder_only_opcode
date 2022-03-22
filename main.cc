#include <iostream>

#include "arch/arm/decoder.hh"

using namespace std;

int main(int argc,char *argv[]) {
    if (argc != 2) {
        cout << "need a hex inst arg! eg. d50342df" << endl;
        exit(1);
    }
    int64_t inst = strtoul(argv[1], nullptr, 16);
    inst |= 1L << 34; // set bit 34 of inst = 1, bit 34 of inst is a extra flag for aarch64 of ExtMachInst; 
    gem5::StaticInst *a = gem5::ArmISA::Decoder::decodeInst(inst).get();
    
    cout << "op class: " << a->getName() << endl;
    bool isMicroop = a->isMicroop();
    bool isMacroop = a->isMacroop();
    cout << "is micro op: " << isMicroop << endl;
    cout << "is macro op: " << isMacroop << endl;

    int num_src_regs = a->numSrcRegs();
    int num_dest_regs = a->numDestRegs();
    cout << "numSrcRegs: " << num_src_regs << endl;
    cout << "numDestRegs: " << num_dest_regs << endl;
    for (int i = 0; i < num_src_regs; i++) {
        cout << "Src register: " << a->srcRegIdx(i) << endl;
    }
    for (int i = 0; i < num_dest_regs; i++) {
        cout << "Dest register: " << a->destRegIdx(i) << endl;
    }
}