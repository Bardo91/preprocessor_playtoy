/////////////////////////////////////////////////////////////////////////////////////
//
//              Very cool custom preprocessor application
//
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cout;
using std::endl;

int main(int _argc, char** _argv){

    for(unsigned i = 0 ;i < _argc;i++){
        cout << "[" << i<< "]\t" << _argv[i] << endl;
    }
    

}