#include<iostream>
using namespace std;
class ascending{
    private:
     int n[10],i,j,temp;
  public:
    int getdata(){
        cout<<"Enter 10 integers:";
        for(i=0;i<10;i++){
            cin>>n[i];
        }
        return 0;
    }
    int sort(){
        for(i=0;i<10;i++){
            for(j=0;j<10-1;j++){
                if(n[j]>n[j+1]){
                    temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=temp;
                }
            }
        }
        return 0;
    }
int display(){
       cout<<"Data in ascending order:";
       for(i=0;i<10;i++){
        cout<<n[i]<<"  "<<endl;
           }
           return 0;
}
};

int main(){
    ascending obj;
    obj.getdata();
    obj.sort();
    obj.display();
    return 0;
}
