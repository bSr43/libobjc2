#ifdef __MINGW32__
#include <windows.h>

unsigned sleep(unsigned seconds)
{
	Sleep(seconds*1000);
	return 0;
}
#endif
