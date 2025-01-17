 #include<iostream>
 using namespace std;
 int main(){
 	int i;
 	for(i=1;i<=10;i++){
 	if(i==2){
	 	continue;
	 }
		 if(i==4){
 		 break;
	 }
	 cout<<i;

 }
 return 0;
}