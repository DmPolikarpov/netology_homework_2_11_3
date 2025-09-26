#ifndef LEAVERLIBRARY_H
#define LEAVERLIBRARY_H

#ifdef LEAVERLIBRARY_EXPORTS
#define DINAMIC_API __declspec(dllexport)
#else
#define DINAMIC_API __declspec(dllimport)
#endif


namespace LeaverLibrary
{
	class DINAMIC_API Leaver
	{
	public:
		static std::string leave(std::string name);
	};
}

#endif
