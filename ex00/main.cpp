#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <iostream>

int main()
{
	std::vector<int> vector;
	std::deque<int> deque;
	std::list<int> list;
	std::forward_list<int> forward_list;
	std::set<int> set;
	std::multiset<int> multiset;

	for (int i = 0; i < 5; i++)
	{
		vector.push_back(i);
		deque.push_back(i);
		list.push_back(i);
		forward_list.push_front(4-i);
		set.insert(i);
		multiset.insert(i);
	}

	try
	{
		std::vector<int>::iterator itr = easyfind(vector, 2);
		std::cout << *itr << " is in vector." << std::endl;
		itr = easyfind(vector, 5);
		std::cout << *itr << " is in vector." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::deque<int>::iterator itr = easyfind(deque, 2);
		std::cout << *itr << " is in deque." << std::endl;
		itr = easyfind(deque, 5);
		std::cout << *itr << " is in deque." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::list<int>::iterator itr = easyfind(list, 2);
		std::cout << *itr << " is in list." << std::endl;
		itr = easyfind(list, 5);
		std::cout << *itr << " is in list." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::forward_list<int>::iterator itr = easyfind(forward_list, 2);
		std::cout << *itr << " is in forward_list." << std::endl;
		itr = easyfind(forward_list, 5);
		std::cout << *itr << " is in forward_list." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::set<int>::iterator itr = easyfind(set, 2);
		std::cout << *itr << " is in set." << std::endl;
		itr = easyfind(set, 5);
		std::cout << *itr << " is in set." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::multiset<int>::iterator itr = easyfind(multiset, 2);
		std::cout << *itr << " is in multiset." << std::endl;
		itr = easyfind(multiset, 5);
		std::cout << *itr << " is in multiset." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}