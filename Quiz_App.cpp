#include<iostream>
#include<string.h>
using namespace std;

struct question{
	string text;
	string option[4];
	int correctoption;
};

int main()
{
	cout<<"\t\t********** GENERAL KNOWLEGDE QUIZ **********"<<endl;
	
	question questions[5];
	
	questions[0] = {"Which is the biggest continent in the world ?",{" 1.North America "," 2.Asia "," 3.Africa "," 4.Australia"},2};
	
	questions[1] = {"Which is the longest river in the world ?",{" 1.Great Ganga "," 2.Amazon "," 3.Nile "," 4.Niger"},3};
	
	questions[2] = {"Which is the largest ocean in the world ?",{" 1.Indian Ocean "," 2.Pacific Ocean "," 3.Arctic Ocean "," 4.Atlantic Ocean"},2};
	
	questions[3] = {"Which is the largest animal in the world ?",{" 1.Shark "," 2.Giraffe "," 3.Elephant "," 4.blue Whale"},4};
	
	questions[4] = {"Which is the largest island in the world ?",{" 1.Grennland "," 2.New Guinea "," 3.Hawaii "," 4.Andaman Nicobar"},1};
	
	int score,useranswer;
	
	for(int i=0;i<5;i++)
	{
		cout<<"\nQuestion "<<(i+1)<<" : "<<questions[i].text<<endl;
		for(int j = 0;j<4;j++)
		{
			cout<<questions[i].option[j]<<endl;
		}
		
		cout<<"\nChoose the correct option : "	;
		cin>>useranswer;
		
		if(useranswer==questions[i].correctoption)
		{
			cout<<"Your answer is correct...!\n";
			score++;
		}
		else
		{
			cout<<"Your answer is wrong...!\n";
		}
		
	}
	
	cout<<"\nYour Score : "<<score<<" out of 5";
	
	return 0;
	
	
}
