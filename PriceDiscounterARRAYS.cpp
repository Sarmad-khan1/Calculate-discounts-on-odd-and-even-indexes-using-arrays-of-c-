#include <iostream> 
using namespace std;
int main()
{
	string movies[5]={"movie1", "movie2", "movie3", "movie4", "movie5"};
	float ticketPrice=500.0;
	float discount;
	string mtitle;
	cout<<"	Enter movie title to get discount: ";
	cin>>mtitle;
	bool moviefound=false;
		for(int i=0; i<5; i++)
		{
			if(movies[i]==mtitle)
			{
				moviefound=true;
				if(i%2==0)
				{
					discount=ticketPrice*0.1;
				}
				else
				{
					discount = ticketPrice * 0.05;
				}
				cout<<"The discounted price for the movie is "<<mtitle<<" is: "<<ticketPrice-discount<<endl;
				break;
			}
		}	
	
	if(!moviefound)
	{
		cout<<"	Movie not found in Cinema's list"<<endl;
	}
	return 0;
}