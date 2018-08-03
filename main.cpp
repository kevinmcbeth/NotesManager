#include <iostream>
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
 #endif
#include <fstream>

using namespace std;


int main()
{
	cout << "Hello World!" << endl;
	cout << GetCurrentDir << endl;
	return 0;
}

int checkIfFileExists(string fileName, bool outputFlag){
	ifstream fileToTest;
	
	if(outputFlag == true){
	}
	else {
		
	}
	
	return 0;
}