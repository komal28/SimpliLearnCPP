#include <iostream>

using namespace std;

int main(){

int num = 100;
    while (num>=90)
    {
     
        if(num==96){
              num--;
            continue;
        }
         cout << "Value of num is : " << num <<endl;
         num--;
    }


    return 0;
}