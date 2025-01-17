//(SEE-RE-EXAM-2080)Write a SWITCH CASE program to display the sum,difference,product,remainder
#include<iostream>
using namespace std;
int main(){
int n1 , n2 , sum , diff , prod , re, ch;
      cout<<"1.Sum"<<endl;
      cout<<"2. Difference "<<endl;
       cout<<"3. Product "<<endl;
        cout<<"4. Remainder"<<endl;
        cout<<"Enter you choice(1-4)"<<endl;
        cin>>ch;
        cout<<"Enter two number"<<endl;
        cin>>n1>>n2;
        switch(n1)
        {
        	case 1:{
        		sum=n1+n2;
        		cout<<"Sum is:"<<sum;
				break;
			}
			case 2:{
				diff=n1-n2;
				cout<<"Difference is:"<<diff;
				break;
			}
			case 3:{
				prod=n1*n2;
				cout<<"Product is:"<<prod;
				break;
			}
			case 4:{
				re=n1%n2;
				cout<<"Reminder is:"<<re;
				break;
				default:
					cout<<"Wrong Choice"; 
					break;
			}
		}
				return 0;
	}
