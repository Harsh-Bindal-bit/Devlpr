//Q1 wap to take user's name user's age and then print hello [name] you are[age] years old

#include<iostream>
using namespace std;
int main(){
    string userName;
    int userAge;
    cout<<"please enter user's name:";
    cin>>userName; 
    cout<<"please enter  user's age:";
    cin>>userAge;
    cout<<"hello\t"<<userName<<endl<<"you are\t"<<userAge<<"years old."<<endl;
    return 0;
}

//Q2 wap to input 2 integers and display their sum

#include<iostream>
using namespace std;
int main(){
 int a,b;
 cout<<"please enter a and b:";
 cin>>a>>b;
 cout<<"sum of a and b is "<< a+b;
 return 0;
}

//Q3 ask the user to input 2 no.'s and a mathematical operator (+,-,,/),
display the result of operation using switch case  op-operators*/

#include <iostream>
int main() {
    int n1,n2;
    std::cin >> n1 >> n2;
    std::cout << "first number is " << n1 << std::endl << "second number is " << n2 << std::endl;
    std::cout << "sum is " << n1+n2 << std::endl;
    std::cout << "subract is " << n1-n2 << std::endl;
    std::cout << "division is " << n1/n2 << std::endl;
    std::cout << "product is " << n1*n2;
    return 0;
}

//Q4 take 2 floating point numbers as input and display their division result upto 2 decimal places

#include <iostream>
using namespace std;
int main() {
    float n1,n2;
    cin >> n1 >> n2;
    if (n1>=n2){
        cout << n1/n2;
    }
    else{
        cout << n2/n1;
    }
    return 0;
}

//Q5