#include <windows.h>
#include <iostream>
#include <string>
#include <vector>

int __stdcall foo(const LOGFONTA* plf, 
  				  const TEXTMETRICA* ptm, 
				  DWORD FontType, 
				  LPARAM lParam)
{
	std::cout << plf->lfFaceName << std::endl;

	return 1;
}

int main()
{
	EnumFontFamiliesA(GetDC(0), 0, foo, 0);
}
