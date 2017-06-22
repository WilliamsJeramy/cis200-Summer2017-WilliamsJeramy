/*

	Jeramy Williams
	6-11-2017
	CIS 200 Prof. Elenbogen

*/

/*

	Program 2
	DNA Manipulation Library

*/

#include <iostream>
#include <string>
#include <ostream>
using namespace std;

struct Node
{
	
	char acid;
	Node *next;
	
};

class DNA
{
	
	public:
		DNA(int length = 0)
		
		DNA(string dna) //initializes the strand to the string
		
		DNA(const DNA & rhs) //copy constructor
	
		~DNA() //destructor
	
		
		bool operator==(const DNA & rhs)const//returns true if rhs has the same acids in the same order to self
		
		DNA operator=(const DNA & rhs) //assings rhs to self with no memory leak
		
		DNA operator+(const DNA & subStr)const //returns self + rhs
		
		int find(const DNA & subStr) const //returns the first position of subStr in self exists or -1
		
		DNA reverse() const // returns a DNA strand reversed
		
		friend ostream & operator<< (ostream & out, DNA rhs) //prints the strand from beginning to end
		
		DNA substr(int begin, int width)const //returns the subtrand from begin, returns the next width acids
		
		int subSeq(const DNA rhs)const // returns location of first acid if self has a subsequence matching rhs, -1 otherwise
		
		bool unitTestPlus()
		bool unitTestSubstr()
		bool unitTestFind()
		
	private:
			
		Node * strand;
		int length;
};

DNA::DNA(Node & rhs )
{
	
	Node * head = rhs;
	Node * walker =  nullptr;
	
	while(head != nullptr)
	{
		
		if(walker)
		
	}
	
}
