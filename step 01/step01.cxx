#include <iostream>
#include "config.h"
#include "test.h"

using namespace std;

int main(int argc, char const *argv[])
{
    hello();
    cout << "this is step01";
    cout << "\t--Version: " << VERSION_MAJOR << "." << VERSION_MINOR << endl;
    return 0;
}
