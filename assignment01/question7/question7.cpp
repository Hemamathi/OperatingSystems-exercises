#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdio>
#include <stdio.h>
#include <map> 
using namespace std;
int abc(istream &is,std::vector<std::string> &vec)
{
	std::string s;
	std::string ss;
	int count = 0;
	int n = 0;
	map<std::string, std::vector<int>> mp;
	std::vector<int> ivec;

	while(getline(is, s)) {
		istringstream iis(s);
		count = 0;
		while(iis >> ss){
		count++;
		}
		cout << "count:" << count << endl;
		cout << endl;
		if (count >= 10){
			vec.push_back(s);
			cout << endl;
		}
	}
	map<std::string, vector<int>>::iterator iterator00;
	std::vector<std::string>::const_iterator iterator1 = vec.begin();
	ivec.push_back(0);
	while (n < 5 && iterator1 != vec.end())
	{
		n++;
		ivec[0] = n;
		mp.insert(make_pair(*iterator1, ivec));
		iterator1++;

	}
	
	for  (iterator00 = mp.begin(); iterator00 != mp.end(); ++iterator00) {
		cout << "(" << iterator00->first << " , " << iterator00->second[0] << ")" << endl;

	}

return 0;
}
int main()
{

	std::ifstream ifs("/home/tulip/Desktop/assignment01/question7/sample.txt");

	std::vector<std::string>vec= std::vector<std::string>();
	
	abc(ifs, vec);

return 0;
}



