using namespace std;

int main() {

    int n=0, a=1, b=0, c=0,i ;

    cin >> n ;

        while(n >= c){
            c= a + b;
            a = b;
            b = c;
            if(n > c ) {
                cout << c << endl;
            }
       }

    return 0;
}
