#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;
struct student{
 char name[24],roll[15];
 int marks,random;	
};
student st;
void cpp(){
     st.marks=0;
     char choice;
     int i=0,arr[10];
     while(i<10)
     {
      back:
      st.random=rand()%10;
      for(int j=0; j<=9;j++)
      {
       if(st.random==arr[j])
       {
        goto back;
       }

      }
      arr[i]=st.random;
      switch(st.random){
      case 0:
     
     cout<<i+1<< " ) Which concept allows you to reuse the written code? "<<endl;
     cout<<"A.Encapsulation "<<endl;
     cout<<"B.Polymorphism "<<endl;
     cout<<"C.Inheritance  "<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is incorrect"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     case 1:
     cout<<i+1<< ") Which of the following  is not a type of constructor?"<<endl;
     cout<<"A.Friend Constructor  "<<endl;
     cout<<"B.Copy Constructor"<<endl;
     cout<<"C.Default constructor   "<<endl;
     choice=getch();
     if(choice=='a'|| choice=='A'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is a"<<endl;
     }
     break;
     
     
     case 2:
     cout<<i+1<<") What is the other name used for the functions inside class? "<<endl;
     cout<<"A.Class Variables  "<<endl;
     cout<<"B. Member Functions "<<endl;
     cout<<"C. Class Function "<<endl;
     choice=getch();
     if(choice=='B'|| choice=='b'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
     
     case 3:
     
     cout<<i+1<<") How many types of polymorphism are there in C++? A.0ne   B.Two    C.Three  "<<endl;
     cout<<" A.0ne  "<<endl;
     cout<<" B.Two  "<<endl;
     cout<<" C.Three "<<endl;
     choice=getch();
     if(choice=='B'|| choice=='b'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
      
    
     case 4:
     cout<<i+1<< " ) Which of the following approach is used by C++? "<<endl;
     cout<<" A. Top-down"<<endl;
     cout<<"B.Right-left "<<endl;
     cout<<" C.Botttom-up "<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     case 5:
     	
    
     cout<<i+1<<" ) Which of the following is the default returnvalue of functions in C++?  "<<endl;
     cout<<"A.int"<<endl;
     cout<<"B.Char "<<endl;
     cout<<"C.void "<<endl;
     choice=getch();
     if(choice=='a'|| choice=='A'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is a"<<endl;
     }
     break;
     case 6:
      
    
     cout<<i+1<<" )From which function the execution of C++ program starts? A. Start  B.main  C. end  "<<endl;
     cout<<"A. Start"<<endl;
     cout<<"B.main "<<endl;
     cout<<"C. end  "<<endl;
     choice=getch();
     if(choice=='b'|| choice=='B'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
     case 7:
     
     
     cout<<i+1<< ")What is the index number of the last element of an array with 7elements?"<<endl;
     cout<<" A.7"<<endl;
     cout<<"B.Programmer Defined "<<endl;
     cout<<" C.6 "<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is c"<<endl;
     }
     break;
     case 8:
     
     
     cout<<i+1<< " ) What will be used to terminate a structure?"<<endl;
     cout<<"A. }  "<<endl;
     cout<<" B.; "<<endl;
     cout<<"  C. : "<<endl;
     choice=getch();
     if(choice=='b'|| choice=='B'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is b"<<endl;
     }
     break;
     case 9:
     
      
    cout<<i+1<<" ) Which of the following access a variable in a structure *b?"<<endl;
     cout<<"A. b->var "<<endl;
     cout<<"B.b.var "<<endl;
     cout<<"  C.b>var"<<endl;
     choice=getch();
     if(choice=='b'|| choice=='B'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is b"<<endl;
     }
     break;
    }
    i++;
   }  
}
     
      
    
    
      
    	

    	
void html(){
     st.marks=0;
     char choice;
     int i=0,arr[10];
     while(i<10)
     {
      back:
      st.random=rand()%10;
      for(int j=0; j<=9;j++)
      {
       if(st.random==arr[j])
       {
        goto back;
       }
      }
      arr[i]=st.random;
      switch(st.random){
      case 0:
     
     cout<<i+1<< " ) 1) HTML stands for "<<endl;
     cout<<"a) HighText Machine Language "<<endl;
     cout<<"b) HyperText and links Markup Language "<<endl;
     cout<<"c) HyperText Markup Language"<<endl;
      cout<<"d) None of these "<<endl;
     
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is incorrect"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     case 1:
     cout<<i+1<< ")  The correct sequence of HTML tags for starting a webpage is "<<endl;
     cout<<"a) Head, Title, HTML, body "<<endl;
     cout<<"b) HTML, Body, Title, Head"<<endl;
     cout<<"c) HTML, Head, Title, Body "<<endl;
      cout<<"d) none of above "<<endl;
     
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is C"<<endl;
     }
     break;
     
     
     case 2:
     cout<<i+1<<") Which of the following element is responsible for making the text bold in HTML?"<<endl;
     cout<<"a) <pre> "<<endl;
     cout<<"b) <a> "<<endl;
     cout<<"c) <b>"<<endl;
      cout<<"d) <br>"<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     
     case 3:
     
     cout<<i+1<<") Which of the following tag is used for inserting the largest heading in HTML? "<<endl;
     cout<<" a) <h3>"<<endl;
     cout<<"b) <h1>"<<endl;
     cout<<"c) <h5>"<<endl;
     cout<<"d) <h6>"<<endl;
     choice=getch();
     if(choice=='B'|| choice=='b'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
      
    
     case 4:
     cout<<i+1<< " )  Which of the following tag is used to insert a line-break in HTML?"<<endl;
     cout<<" a) <br>"<<endl;
     cout<<"b) <a>"<<endl;
     cout<<"c) <pre>"<<endl;
     cout<<"d) <b>"<<endl;
     choice=getch();
     if(choice=='a'|| choice=='A'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is a"<<endl;
     }
     break;
     case 5:
     	
    
     cout<<i+1<<" )  How to create an unordered list (a list with the list items in bullets) in HTML?"<<endl;
     cout<<"a) <ul>"<<endl;
     cout<<"b) <ol> "<<endl;
     cout<<"c) <li>"<<endl;
     cout<<"c) <i>"<<endl;
     choice=getch();
     if(choice=='a'|| choice=='A'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is a"<<endl;
     }
     break;
     case 6:
      
    
     cout<<i+1<<" )  Which character is used to represent the closing of a tag in HTML?"<<endl;
     cout<<"a) '; "<<endl;
     cout<<"b) ! "<<endl;
     cout<<"c) /"<<endl;
       cout<<"d) . "<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     case 7:
     
     
     cout<<i+1<< ")  Which of the following element is responsible for making the text italic in HTML?"<<endl;
     cout<<" a) <i>"<<endl;
     cout<<"b) <italic>"<<endl;
     cout<<" c) <it>"<<endl;
      cout<<" d) <pre>"<<endl;
     choice=getch();
     if(choice=='a'|| choice=='A'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is A"<<endl;
     }
     break;
     case 9:
     
      
     cout<<i+1<<" ) <input> is "<<endl;
     cout<<"a) a format tag."<<endl;
     cout<<"b) All of the above"<<endl;
     cout<<"c) an empty tag"<<endl;
     cout<<"d) None of the above"<<endl;
     choice=getch();
     if(choice=='a'|| choice=='A'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is a"<<endl;
     }
     break;
    }
    i++;
   }
}
     
	




void java(){
     st.marks=0;
     char choice;
     int i=0,arr[10];
     while(i<10)
     {
      back:
      st.random=rand()%10;
      for(int j=0; j<=9;j++)
      {
       if(st.random==arr[j])
       {
        goto back;
       }
      }
      arr[i]=st.random;
      switch(st.random){
      case 0:
     
     cout<<i+1<< " ) Who invented Java Programming? "<<endl;
     cout<<"a) Guido van Rossum "<<endl;
     cout<<"b) James Gosling "<<endl;
     cout<<"c) Dennis Ritchie "<<endl;
      cout<<"d) Bjarne Stroustrup "<<endl;
     
     choice=getch();
     if(choice=='b'|| choice=='B'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is incorrect"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
     case 1:
     cout<<i+1<< ") Which statement is true about Java?"<<endl;
     cout<<"a) Java is a sequence-dependent programming language  "<<endl;
     cout<<"b) Java is a code dependent programming language"<<endl;
     cout<<"c) Java is a platform-dependent programming language "<<endl;
      cout<<"d) Java is a platform-independent programming language "<<endl;
     
     choice=getch();
     if(choice=='d'|| choice=='D'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is d"<<endl;
     }
     break;
     
     
     case 2:
     cout<<i+1<<")  Which component is used to compile, debug and execute the java programs?"<<endl;
     cout<<"a) JRE "<<endl;
     cout<<"b) JIT "<<endl;
     cout<<"c) JDK "<<endl;
      cout<<"d) jvm "<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     
     case 3:
     
     cout<<i+1<<")  Which one of the following is not a Java feature? "<<endl;
     cout<<" a) Object-oriented"<<endl;
     cout<<"b) Use of pointers "<<endl;
     cout<<"c) Portable"<<endl;
     cout<<"d) Dynamic and Extensible "<<endl;
     choice=getch();
     if(choice=='B'|| choice=='b'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
      
    
     case 4:
     cout<<i+1<< " ) Which of these cannot be used for a variable name in Java?"<<endl;
     cout<<" a) identifier & keyword"<<endl;
     cout<<"b) identifier"<<endl;
     cout<<"c) keyword "<<endl;
      cout<<"d) none of the mentioned"<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is c"<<endl;
     }
     break;
     case 5:
     	
    
     cout<<i+1<<" ) What is the extension of java code files?"<<endl;
     cout<<"a) .js"<<endl;
     cout<<"b) .txt "<<endl;
     cout<<"c) .class"<<endl;
     cout<<"c) d) .java"<<endl;
     choice=getch();
     if(choice=='d'|| choice=='D'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is d"<<endl;
     }
     break;
     case 6:
      
    
     cout<<i+1<<" ) What is Truncation in Java?"<<endl;
     cout<<"a) Floating-point value assigned to a Floating type"<<endl;
     cout<<"b) Floating-point value assigned to an integer type"<<endl;
     cout<<"c) Integer value assigned to floating type"<<endl;
       cout<<"d) Integer value assigned to floating type "<<endl;
     choice=getch();
     if(choice=='b'|| choice=='B'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
       cout<<"correct answer is b"<<endl;
     }
     break;
     case 7:
     
     
     cout<<i+1<< ") Which environment variable is used to set the java path?"<<endl;
     cout<<" a) MAVEN_Path"<<endl;
     cout<<"b) JavaPATH"<<endl;
     cout<<" c) JAVA "<<endl;
      cout<<" d) JAVA_HOME"<<endl;
     choice=getch();
     if(choice=='d'|| choice=='D'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is d"<<endl;
     }
     break;
     case 8:
     
     
     cout<<i+1<< " ) Which of the following is not an OOPS concept in Java?"<<endl;
     cout<<"a) Polymorphism "<<endl;
     cout<<" b)Inheritance "<<endl;
     cout<<"c) Compilation "<<endl;
     cout<<"d) Encapsulation "<<endl;
     choice=getch();
     if(choice=='c'|| choice=='C'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is C"<<endl;
     }
     break;
     case 9:
     
      
     cout<<i+1<<" ) Which of the following is a type of polymorphism in Java Programming?"<<endl;
     cout<<"a) Multiple polymorphism"<<endl;
     cout<<"b) Compile time polymorphism"<<endl;
     cout<<"c) Multilevel polymorphism"<<endl;
     cout<<"d) Execution time polymorphism"<<endl;
     choice=getch();
     if(choice=='b'|| choice=='B'){
       cout<<"your answer is correct"<<endl;
       st.marks++;               
     }
     else
     {
       cout<<"your answer is worng"<<endl;
        cout<<"correct answer is b"<<endl;
     }
     break;
    }
     i++;
   }

}
     
void result()
{
   float per=0;
   cout<<"student name:  "<<st.name<<endl;
   cout<<"roll no:  "<<st.roll<<endl;
   cout<<"marks:  "<<st.marks<<"out of 10"<<endl;
   per=100*(st.marks/10.0);
   cout<<"percentage: "<<per<<" % "<<endl;
   if(per>=50){
     cout<<"statas: PASS"<<endl;
   }
   else
   {
     cout<<"status: fail"<<endl;
   }
}
main(){

    char press,select;
    do{
        system("cls");
        cout<<"\n\n\t\t*************** "<<endl;
        cout<<"\t\t QUEZ SYSTEM"<<endl;
        cout<<"\t\t************* "<<endl;
        cout<<"\t\t****** make by: shaukin choudhary******* "<<endl;
        
        cout<<"\t\t enter name: ";
        gets(st.name);
        cout<<"\t\t roll no: ";
        gets(st.roll);
        system("cls");
        cout<<"\t\t marks less than 50% will be fail"<<endl;
        cout<<"1)c++"<<endl;
        cout<<"2)html"<<endl;
        cout<<"3)java"<<endl;
        select=getch();
        system("cls");
        switch(select){
              case '1':
                   cout<<"\t\t c++ quiz"<< endl; 	
                   cpp();
                   system("cls");
                   result();
                   cout<<"\t\t c++ Quiz result"<<endl;
                   break;
              case '2':
                  cout<<"\t\t html quiz"<< endl;
                  html();
                  system("cls");
                  result();
                  cout<<"\t\t HTML Quiz result"<<endl;
                  break;
              case '3':
                  cout<<"\t\t java quiz"<< endl;
                  java();
                  system("cls");
                  result();
                  cout<<"\t\t JAVA Quiz result"<<endl;
                  break;
              default:
              cout<<"invalid input"<<endl;
              break;	
        }
        
        
        	
        cout<<"press y to continue or any key to terminate"<<endl;
        press=getch();  
    }
    while (press=='y'||press=='Y');
    

}