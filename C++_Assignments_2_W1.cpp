#include <iostream>
using namespace std;
int main(){
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;
}                                        //OutPut for this given code is 0

//                  2 Solution

#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
}                                       //OutPut for this code is :- 1 1

//                 3 Solution

#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;
}                                        // OutPut for this solution is :- 2

//                   4 Solution

#include <iostream>
using namespace std;
int main(){
    int r , h;
    cout<<"radius: ";
    cin>>r;
    cout<<"height: ";
    cin>>h;
    cout<<"Volume of cylinder is :- "<<3.14*r*r*h;
}

//                   5 Solution

#include <iostream>
using namespace std;
int main() {
    char char1, char2;
    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;
    int difference = char1 - char2;
    if (difference < 0) {
        difference = -difference;
    }
    cout << "The difference between the ASCII values of '" << char1 << "' and '" << char2 << "' is: " << difference << endl;
    return 0;
}

//                   6 Solution

#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}                                      // OutPut for this code is:- 49
