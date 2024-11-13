#include<iostream>
using namespace std;

void setColor(int color){
 cout << "\033[" << color << "m";
}

int main(){
  setColor(31);
    cout<<"\n------WELCOME TO TEMPERATURE CONVERTER------\n"<<endl;
    setColor(32);
    cout<<"1. Covert Celsius into Fahrenheit and Kelvin"<<endl;
    setColor(33);
    cout<<"2. Covert Fahrenheit into Celsius and Kelvin"<<endl;
    setColor(34);
    cout<<"3. Covert Kelvin into Fahrenheit and Celsius\n"<<endl;
    setColor(35);
    int no;
    cout<<"Enter no. 1, 2 or 3 according to your conversion: ";
    cin>>no;
     //Convert Celsius to other.
   
    if(no==1){
      float celsius , fahrenheit=0.0 , kelvin=0.0;
       setColor(33);
      cout<<"Enter Temperature in Degree Celsius: ";
      cin>>celsius;
      fahrenheit = (celsius*1.8)+32;
      kelvin=celsius+273.15;
      setColor(31);
      cout<<"Temperature in Fahrenheit is -: "<<fahrenheit<<endl;
      cout<<"Temperature in Kelvin is -: "<<kelvin<<endl;
    }
    //Convert Fahrenheit to other.
    
    else if(no==2){
      float celsius=0.0 , fahrenheit=0.0 , kelvin=0.0;
      setColor(32);
      cout<<"Enter Temperature in Degree Fahrenheit: ";
      cin>>fahrenheit;
      celsius=(fahrenheit-32)*5/9 ;
      kelvin=celsius+273.15;
      setColor(34);
      cout<<"Temperature in Celsius is -: "<<celsius<<endl;
      cout<<"Temperature in Kelvin is -: "<<kelvin<<endl;
    }
     //Convert Kelvin to other.
    
    else if(no==3){
      float celsius , fahrenheit=0.0 , kelvin=0.0;
      setColor(35);
      cout<<"Enter Temperature in Kelvin: ";
      cin>>kelvin;
      fahrenheit = ((kelvin-273.15)*1.8)+32;
      celsius=kelvin-273.15;
      setColor(36);
      cout<<"Temperature in Fahrenheit is -: "<<fahrenheit<<endl;
      cout<<"Temperature in Celsius is -: "<<celsius<<endl;
    } 

    else{
      setColor(37);
      cout<<"Invalid Input. Please enter 1, 2, or 3"<<endl;
    }


  return 0;
}
   
