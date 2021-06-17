#include <iostream>

#include "defines.h"

void GlClearError()
{
	while (glGetError() != GL_NO_ERROR);
}

bool GlLogCall(const char* file, const char* func, int line)
{
	while (GLenum error = glGetError())
	{
		std::cout << "[OpenGL Error]" << "\n" << "{ " << error << " }" << " at " << line << " in " << func << " in " << file << std::endl;
		return false;
	}
	return true;
}
