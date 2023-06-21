#include "testlib.h"

int main(int argc, char *argv[]) {
    setName("compare two signed int%d's", 8 * int(sizeof(int)));
    registerTestlibCmd(argc, argv);

    int ja = ans.readInt();
    int pa = ouf.readInt();

    if (ja != pa)
        quitf(_wa, "Wrong");

    quitf(_ok,"Right");
}
