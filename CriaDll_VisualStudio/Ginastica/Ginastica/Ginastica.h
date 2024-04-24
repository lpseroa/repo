#ifdef GINASTICA_EXPORTS
#define DLL __declspec(dllexport)
#else
#define DLL __declspec(dllimport)
#endif

void DLL flexao(int);
void DLL abdominal(int);

