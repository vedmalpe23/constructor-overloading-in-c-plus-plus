#include<iostream>
using namespace std;
class Addition{
    int a;
    int b;
    int c ;
    public:
    Addition(){
        a=0;
        b=0;
        c=0;
    }
    Addition(int x, int y){
        a=x;
        b=y;
        c=0;
    }
    Addition(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        
    }void display(){
        cout<<"Sum:"<<a+b+c<<endl;
    }
        
    
    
};
int main(){
    Addition a1;
    Addition a3(12,7);
    Addition a4(22,8,19);
    a1.display();
    a3.display();
    a4.display();
    return 0;

}
/*output:
Sum:0
Sum:19
Sum:49
*/
