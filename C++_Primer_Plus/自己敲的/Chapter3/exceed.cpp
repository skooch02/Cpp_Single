#include<iostream>
#define ZERO 0
#include<climits>
int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    sam++;
    sue++;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited. \nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    sam--;
    sue--;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue! " << endl;
    return 0;
}