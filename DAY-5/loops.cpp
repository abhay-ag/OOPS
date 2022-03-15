#include <iostream>

using namespace std;
int main(){
    // WAP to find biggest among three

    // int a, b, c;
    // cout << "Enter three number: ";
    // cin >> a>>b>>c;

    // if ( a > b && a > c){
    //     cout << "A is Greater" << endl;
    // }else if ( b > a && b > c)
    // {
    //     cout << "B is Greater" << endl;
    // }
    // else{
    //     cout << "C is Greater" << endl;
    // }
    
    int m1, m2, m3;
    int sum;
    
    cout << "Enter the marks in three different subjects: ";
    cin >> m1 >> m2 >> m3;

    sum = (m1 + m2 + m3)/3;

    if( sum >= 80 && sum < 100){
        cout << "A" << endl;
    }
    else{
        if ( sum >= 70 && sum < 79){
            cout << "B"<<endl;
        }
        else{
            if ( sum >= 60 && sum < 69){
                cout << "C"<<endl;
            }
            else{
                if ( sum >= 50 && sum <59){
                    cout << "D"<<endl;      
                }
                else{
                    cout << "E" << endl;
                }
            }
        }
    }

    int n1, n2;
    char oper;
    int res;

    cout << "Enter two number: ";
    cin >> n1 >> n2;

    cout << "Enter the operator [+, -, *, /, %]: ";
    cin >> oper;

    switch (oper)
    {
    case '+':
        res = n1 + n2;
        cout << "The sum of two nos is: " << res << endl;
        break;
    case '-':
        res = n1 - n2;
        cout << "The difference of two nos is: " << res << endl;
        break;
    case '*':
        res = n1 * n2;
        cout << "The product of two nos is: " << res << endl;
        break;
    case '/':
        res = n1 / n2;
        cout << "The fraction of two nos is: " << res << endl;
        break;
    case '%':
        res = n1 % n2;
        cout << "The modulus of two nos is: " << res << endl;
        break;
    
    default:
        cout << "Sorry Wrong Choice?";
        break;
    }

    int bs, ts, hra, da;

    cout << "Enter the basic salary of the employee: ";
    cin >> bs;
    
    if ( bs >= 5000 && bs <= 10000){
        hra = 0.05 * bs;
        da = 0.05 * bs;
        ts = bs + hra + da;
    }
    else{
        hra = 0.1 * bs;
        da = 0.1 * bs;
        ts = bs + hra + da;
    }
    cout << "Total Salary is: " << ts << endl;
    return 0;
}

/*
    Relational Operators/Comparison operators ==> Return type [true of false] / non zero value
    >
    >=
    <
    <=
    ==
    !=
*/