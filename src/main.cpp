#define USE_SDL2

#if defined(USE_SDL2)
//#include <SDL2/SDL.h>
#elif defined(USE_SDL1)
//#include <SDL/SDL.h>
#endif

#include <string>
#include <vector>
#include <iostream>

int main(int argc, char** argv)
{
	std::vector<std::string> args;
	for (int i = 0; i < argc; i++)
	{
		std::string arg;
		arg.append(argv[i]);
		args.push_back(arg);
	}
	std::cout << args[args.size() - 1] << std::endl;
	return 0;
}
