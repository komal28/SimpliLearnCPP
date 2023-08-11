#include <iostream>

using namespace std;
/*
call by value
*/

void salary_change(int s){

    s = 30000;

    cout << "Value in function " << s << endl;

}

int main(){

int sal = 27000;
salary_change(sal);
cout << "Value in main " <<sal << endl;
    return 0;
}

