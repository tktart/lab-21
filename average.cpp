#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    float average;
    int count = 0;
    float sum = 0;
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }else{
        for(int i=1; i < argc; i++){
            sum += atoi(argv[i]);
            count++;
        }
        average = sum/count;
        cout << "---------------------------------\n";
        cout << "Average of " << count << " numbers = " << average << "\n";
        cout << "---------------------------------\n";
    }
}