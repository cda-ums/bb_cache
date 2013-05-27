#include "cache.h"
int main()
{
	CachePolicyMap<int, int> mypolicy;
	ums::cache <int, int, mypolicy> mycache;
	return 0;
}
