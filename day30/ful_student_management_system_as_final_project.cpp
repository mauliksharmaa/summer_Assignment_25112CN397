#include<iostream>
#include<string>
using namespace std;

// final project

class Student{
public:
int roll;
string name;
float marks;
};

Student st[100];
int n=0;

void addStudent(){
cout<<"Enter roll no ";
cin>>st[n].roll;

cout<<"Enter name ";
cin>>st[n].name;

cout<<"Enter marks ";
cin>>st[n].marks;

n++;
cout<<"added\n";
}

void display(){
if(n==0){
cout<<"no data\n";
}
else{
for(int i=0;i<n;i++){
cout<<st[i].roll<<" "<<st[i].name<<" "<<st[i].marks<<endl;
}
}
}

void searchStudent(){
int r;
cout<<"enter roll ";
cin>>r;

int f=0;

for(int i=0;i<n;i++){
if(st[i].roll==r){
cout<<"found "<<st[i].roll<<" "<<st[i].name<<" "<<st[i].marks<<endl;
f=1;
break;
}
}

if(f==0) cout<<"not found\n";
}

void deleteStudent(){
int r;
cout<<"enter roll ";
cin>>r;

int f=0;

for(int i=0;i<n;i++){
if(st[i].roll==r){
for(int j=i;j<n-1;j++){
st[j]=st[j+1];
}
n--;
cout<<"deleted\n";
f=1;
break;
}
}

if(f==0) cout<<"not found\n";
}

int main(){

int ch;

do{
cout<<"\n1 add 2 display 3 search 4 delete 5 exit\n";
cout<<"choice ";
cin>>ch;

if(ch==1) addStudent();
else if(ch==2) display();
else if(ch==3) searchStudent();
else if(ch==4) deleteStudent();
else if(ch==5) cout<<"bye\n";
else cout<<"wrong\n";

}while(ch!=5);

return 0;
}