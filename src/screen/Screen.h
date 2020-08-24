#ifndef OS_SCREEN_H
#define OS_SCREEN_H

class Screen {
public:
    static const unsigned int screenWidth = 80;
    static const unsigned int screenHeight = 20;

    static void printf(char* string);

private:
    static unsigned int x;
    static unsigned int y;

    static unsigned short* VideoMemory;
};

#endif //OS_SCREEN_H
