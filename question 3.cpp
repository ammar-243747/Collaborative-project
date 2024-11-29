#include<iostream>
#include<string>
using namespace std;
int main()
{
	//Taking input
	int age;
	string health, location, gender;
	cout<<"Enter your health(poor/excellent): ";
	cin>>health;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your location(city/village): ";
	cin>>location;
	cout<<"Enter your gender(male/female): ";
	cin>>gender;
	//Applying the main basic condition for health that could be poor or excellent
	if (health=="excellent"){
		//Applying second condition to check if the person is male or a female
		if (gender=="male"){
			//Applying condition to check age weather the age is between 25 and 35
			if (age>=25 && age<=35){
				//Applying third condition to check weather the location is a city or a village
				if (location=="city"){
					cout<<"Premium rate is Rs.4 per thousand.\n";	
					cout<<"Maximaum Policy amount cannot exceed Rs.2 lakhs.";			
				}
				else cout<<"You are not insured and not eligible for insurance.";
		}
			else cout<<"You are not insured and not eligible for insurance.";
		}
		else if (gender=="female"){
			if (age>=25 && age<=35){
			
				if (location=="city"){
					cout<<"Premium rate is Rs.3 per thousand.\n";	
					cout<<"Maximaum Policy amount cannot exceed Rs.1 lakh.";
				}
				else cout<<"You are not insured and not eligible for insurance.";
			}
			else cout<<"You are not insured and not eligible for insurance.";
		}
		else cout<<"You are not insured and not eligible for insurance.";
	}
	else if (health=="poor"){
		if (gender=="male" && age>=25 && age<=35){
			if (location=="village"){
				cout<<"Premium rate is Rs.6 per thousand.\n";	
				cout<<"Maximaum Policy amount cannot exceed Rs.10,000.";
				
			}
			else cout<<"You are not insured and not eligible for insurance.";
		}
		else cout<<"You are not insured and not eligible for insurance.";
		
	}
	else cout<<"You mistyped health. ";
	return 0;
	
}
