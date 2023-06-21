#include "testlib.h"
int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int n = 9;
    println(rnd.perm(n, 1));
    
}