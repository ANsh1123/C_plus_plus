#include<iostream>
using namespace std;

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class Subtraction {
public:
    int sub(int a, int b) {
        return a - b;
    }
};

class Multiplication {
public:
    int mul(int a, int b) {
        return a * b;
    }
};

class Division : public Addition, public Subtraction, public Multiplication
{
public:
    float div(int a, int b,int x) {
        if(b != 0)
            return (float)a / b;
        else {
            x++;
            return x;
        }
    }
};
int division(int x)
{
   
}
int main() {
    int a, b, choice,x=0;
    float c;
    char answer;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Choose operation: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division ";
    cin >> choice;
    Division d;
    cout<<"You have entered for the choice "<<choice<<endl;
    cout<<"Would you like to confirm your choice, press y or n!"<<endl;
    cin>>answer;
    if(answer=='y')
    {
    switch(choice) {
        case 1:
            cout << "The sum of "<<a<<" and "<<b<<" is " << d.add(a, b);
            break;
        case 2:
            cout << "The difference of "<<a<<" and "<<b<<" is "  << d.sub(a, b);
            break;
        case 3:
            cout << "The product of "<<a<<" and "<<b<<" is " << d.mul(a, b);
            break;
        case 4:
            c=d.div(a,b,x);
            if(c==1)
                {cout<<"Please make sure divident is non zero!";
                break;
                }
            else
                {cout << "The division of "<<a<<" and "<<b<<" results " << c;
                break;
                }
        default:
            cout << "Invalid choice chose between 1 to 4!";
    }
    }
    else{
        cout<<"You have entered for denial the program is now terminated!!!";
    }
    return 0;
}