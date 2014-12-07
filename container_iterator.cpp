	using namespace std;

	#include <iostream>

	#include <vector>
	#include <list>
	#include <forward_list>
	#include <set>
	#include <deque>
	#include <array>
	#include <map>
	#include <unordered_map>

	template <typename K,typename V>
	ostream&
	operator<<
	  (ostream& p_os,const pair<const K,V>& p_v)
	{
	  std::operator<<(p_os,'(');
	  p_os << p_v.first;
	  std::operator<<(p_os,',');
	  p_os << p_v.second;
	  std::operator<<(p_os,')');
	  return p_os;
	}

	template <typename C>
	ostream&
	operator<<
	  (ostream& p_os,const C& p_c)
	{
	  for(typename C::const_iterator cit=p_c.begin();cit!=p_c.end();++cit)
	  {
		typename C::value_type v = *cit;
		p_os << v;
		std::operator<<(p_os,",");
	  }
	  return p_os;
	}

	int
	main
	  ()
	{
	  vector<int> v;
	  for(int i=0;i<4;++i)
	  {
		v.push_back(i);
	  }
	  cout << v << endl;
	  list<int> l;
	  for(int i=0;i<4;++i)
	  {
		l.push_back(i);
	  }
	  cout << l << endl;
	  forward_list<int> fl = {0,1,2,3};
	  cout << fl << endl;
	  set<int> s;
	  for(int i=0;i<4;++i)
	  {
		s.insert(i);
	  }
	  cout << s << endl;
	  deque<int> d;
	  for(int i=0;i<4;++i)
	  {
		d.push_back(i);
	  }
	  cout << d << endl;
	  array<int,4> a = {0,1,2,3};
	  cout << a << endl;
	  unordered_map<int,int> um;
	  for(int i=0;i<4;++i)
	  {
		um[i] = i;
	  }
	  cout << um << endl;
	  map<int,int> m;
	  for(int i=0;i<4;++i)
	  {
		m[i] = i;
	  }
	  cout << m << endl;
	  return 0;
	}
