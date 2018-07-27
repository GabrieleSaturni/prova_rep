#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
	map<int,int> prova;
	map<int,int>::iterator it;
	map<int,int>::iterator it_pos;
	prova[2]=4;
	prova[3]=5;
	prova[4]=6;
	prova[5]=7;
	prova[6]=8;
	prova[7]=9;
	it_pos = prova.find(7);
	map<int, int> id_greater_user_id;
	map<int, int> id_lower_user_id;
	cout<<"LOWER: \n";
	for(it = prova.begin(); it != it_pos; ++it)
	{
		id_lower_user_id[it->first] = it->second;
		cout<<it->first<<it->second<<endl;
	}
	cout<<endl;
	cout<<"GREATER OR EQUAL: \n";
	for(it = it_pos; it != prova.end(); ++it)
	{
		id_greater_user_id[it->first] = it->second;
		cout<<it->first<<it->second<<endl;

	}


	return 0;
}