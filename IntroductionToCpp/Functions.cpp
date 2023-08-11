#include <iostream>

using namespace std;


void salary_change(int s){

    /*
    call by value
    */
    s = 30000;

    cout << "Salary in function " << s << endl;

}

void salary_Increment(int &s){

    /*
    call by referance
    */
   
    s = s + 5000;

    cout << "Salary Increment in function " << s << endl;


}

int sum(int a, int b){
    int c;
    c = a + b;
    return c;

}

void findMaxNumber(int a, int b)
{

if(a>b){
        cout << "The greater number is : " << a << endl;

}else{
        cout << "The greater number is : " << b << endl;

}
}


int main(){

    //call by value
    int sal = 27000;
    salary_change(sal);
    cout << "Salary in main " <<sal << endl;

    // call by referance
    salary_Increment(sal);
    cout << "Salary after Increment in main " <<sal << endl;

    // sum

    int s;
    s = sum(5,3);
    cout << "The sum is : " << s << endl;

    //user input output
    int n1;
    int n2;
    int n3;
    cout<< "Enter the first number : " <<endl;
    cin >> n1;
    cout<< "Enter the second number : " <<endl;
    cin >> n2;

    n3 = sum(n1,n2);
    cout << "The sum is : " << n3 << endl;

     //find greater number
     findMaxNumber(n1,n2);

    return 0;
}

