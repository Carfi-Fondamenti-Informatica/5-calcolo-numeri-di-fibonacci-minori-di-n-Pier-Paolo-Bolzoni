#include <iostream>
using namespace std;

int main() {

    int n=0, a=0, b=1, c=0,i ;

    cin >> n ;

        for ( i = 0 ; i < n ; i++ ){
                c = a + b;
                b = a;
                a = c;
            if(n >= c ) {
                cout << c << endl;
            }else{
                cout << n <<endl;
                break;
            }
       }

    return 0;
}
