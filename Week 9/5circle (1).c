#include <windows.h>
#include <stdio.h>
int main (void) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	int i, x, y;
	i = 6;
	x = 250;
	y = 250;
	while (i!=0) {
		Ellipse (hdc, x-i*25, y-i*25, x+i*25, y+i*25);
		i--;
	}
	return 0;
}
