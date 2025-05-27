#include<iostream>
using namespace std;
 class Calculator{
    public:
    double num1,num2;

    void getInpout(){
        cout<<"Enter the number num1"<<endl;
        cin>>num1;
        cout<<"Enter the number num2"<<endl;
        cin>>num2;
        


    }
    double  add(){
            return  num1+num2;
        }
          double  sub(){
            return  num1-num2;
        }
  double  mul(){
            return  num1*num2;
        }
  double  div(){
    if(num2!=0){
        return  num1/num2;

    }
    else{
        cout<<"Division not possible"<<endl;
    }
    return 0;
            
        }


 };
 int main(){
    Calculator calc;
    int op;
    cout<<"(1:Add,2:Sub,3:MUll,4:div)";;
    cout<<"enter yourchoice"<<endl;
    cin>>op;
     calc.getInpout();
     switch (op){
        case 1:
        cout<<"result is"<<calc.add()<<endl;
        break;
        case 2:
        cout<<"result is"<<calc.sub()<<endl;
        break;
         case 3:
        cout<<"result is"<<calc.mul()<<endl;
        break;
         case 4:
        cout<<"result is"<<calc.div()<<endl;
        break;
        default:
        cout<<"enter correct choice"<<endl;

     }
     return 0;
    

 }