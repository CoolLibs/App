#pragma once

#include "SDLGLWindow.h"

namespace Cool {

class IApp;

/// <summary>
/// Handles the initialization of SDL and OpenGL and the creation of windows.
/// </summary>
class SDLOpenGLWrapper {
public:
	SDLOpenGLWrapper();
	~SDLOpenGLWrapper();

	/// <summary>
	/// Creates an SDL + OpenGL window
	/// You have the responsiblity to free the memory (call sdlglWindow.destroy())
	/// </summary>
	/// <param name="name"></param>
	/// <param name="defaultWidth"></param>
	/// <param name="defaultHeight"></param>
	/// <returns></returns>
	SDLGLWindow createWindow(const char* name, int defaultWidth, int defaultHeight);

private:
	void initializeSDLandOpenGL();
	void initializeImGui();
	void setupGLDebugging();
	void setupImGui(SDLGLWindow& sdlglWindow);

private:
#ifndef NDEBUG
	static bool s_bInitialized;
#endif
};

} // namespace Cool