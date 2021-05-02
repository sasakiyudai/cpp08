#include <algorithm>
#include <exception>

class NotFoundException: public std::exception
{
	const char* what() const throw()
	{
		return ("not found.");
	};
};

template<class T>
typename T::iterator easyfind(T &container, int val)
{
	typename T::iterator ret;

	ret = std::find(container.begin(), container.end(), val);
	if (ret == container.end())
		throw ::NotFoundException();
	else
		return (ret);
}