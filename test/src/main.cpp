#include "test.h"

using namespace std;
using namespace lmr;


int main(int argc, char** argv)
{
    DEBUG_D("test main start.\n");

    test_clock();
    test_pool();
    
    DEBUG_D("test main end.\n");
}

