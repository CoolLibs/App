#pragma once

namespace Cool {

#ifndef NDEBUG

    #define GLCall(x) glDebug::clearFromPreviousErrors(); x; assert(!glDebug::checkForErrors(#x, __FILE__, __LINE__))

namespace glDebug {
    void clearFromPreviousErrors();
    bool checkForErrors(const char* functionName, const char* filename, int line);
    char const* glErrorString(GLenum const err);
}

#else
#define GLCall(x) x
#endif

} // namespace Cool