#include <iostream>

/**
 * Rectangle Docs
 */
class Rectangle {
private:
    int width, height;
  public:
    Rectangle (int,int);
    
    /** area function Docs */
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

namespace CommandType {
	enum CommandType {
		ON_OFF = 1,    
		ANALOG = 2

	};
}

struct Command {
	uint8_t type; // values of CommandType
	uint8_t id;
	uint8_t deviceID;
	uint16_t value;
	char *data; // raw data received (if not default command's)
	size_t length;
};
