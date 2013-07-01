#include "cache.h"
int main()
{
	CachePolicyMap<int, int, std::less<int> > mypolicy;
	ums::cache <int, int, mypolicy> mycache;
	return 0;
}
//This line is added in the first commit of exp branch
