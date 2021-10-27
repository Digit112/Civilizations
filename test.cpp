#include <stdio.h>

#include "utility/util.hpp"

using namespace util;

int main() {
	veci2 a(1, 2);
	veci2 b(4, 4);
	
	veci2 c = a + b;
	
	printf("%d, %d\n", c.x, c.y);
	
	return 0;
}
