#include <iostream>
using namespace std;
int main()
{
    int p[5];
    cout<<"enter elements: "<<endl;

    for( int i = 0; i < 5; ++i)
        cin>>p[i];

    cout<<"you entered: ";
    for( int i = 0; i < 5; ++i)
        cout<<endl<<*(p + i);
    return 0;
}
