#include <iostream>

#include <GL\glew.h>

#include <GLM/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCALL(x) GlClearError();\
	x;\
	ASSERT(GlLogCall(__FILE__, #x, __LINE__))

void GlClearError();
bool GlLogCall(const char* file, const char* func, int line);
