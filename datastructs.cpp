/*
map
#include<iostream>

int main() {
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
	//freopen ("my_input.txt", "r", stdin);
    //freopen ("my_output1.txt", "w", stdout);
	int n;
	cin>>n;
	std::vector<int > v;
	map<int ,int >m;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
		m[temp]++;
		0;
	}
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second <<endl;
	}
	cout<<"size = "<<m.size()<<endl;
	if(m.find(0)==m.end()){
		cout<<"index 0 is not present in map m\n";
	} else {
		cout<<0<<" is present in map\n";
	}
	if(m.find(1)==m.end()){
		cout<<"index 1 is not present in map m\n";
	} else {
		cout<<1<<" is present in map\n";
	}if(m.find(4)==m.end()){
		cout<<"index 4 is not present in map m\n";
	} else {
		cout<<4<<" is present in map\n";
		auto it = m.find(4);
		cout<<it->first<<" "<<it->second<<endl;
	}
	if(!m.empty()){
		cout<<"not empty\n";
	} else cout<<"empty\n";
	cout<<"m[4] = "<<m[4]<<endl;
	m[4]=100;
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second <<endl;
	}
	vector<pair<int ,int> >v1(n);
	for(int i=0;i<n;i++){
		cin>>v1[i].first>>v1[i].second;
	}
	vector<pair<int ,int > >v2;

	for(int i=0;i<n;i++){
		if(i<n/2){
			int a,b;
			cin>>a>>b;
			v2.push_back(make_pair(a,b));
		} else {
			pair<int ,int >p;
			cin>>p.first>>p.second;
			v2.push_back(p);
		}
	}
	//cout<<v[100];
}
/*
0 1 2 3 4
0 0 0 0 0

0 2 588 200 -100
0 9 -1 0     0
-100 0 2 200 588

*/