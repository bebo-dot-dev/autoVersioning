#include "Arduino.h"
#include "build_defs.h"

void setup()
{
	Serial.begin(115200);
	Serial.println(TimestampedVersion);
}

void loop()
{

}
