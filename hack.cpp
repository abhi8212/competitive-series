#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(age<=0)
        {
            age=0;
            cout<<"Age is not valid, setting age to 0."<<endl;
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
       
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age =age+1;

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}