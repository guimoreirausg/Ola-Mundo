#include <cstdio>


int main() {
int x;

for (x = 1; x <20; x++) {
if (x % 3 > 0)
x ++;
else x--;
printf("\n%d ",x);
}
return 0;
}
