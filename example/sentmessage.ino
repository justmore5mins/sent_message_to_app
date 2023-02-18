#include "sentmessage.h"

#define ssid "thing"
#define PASSWORD "thing"
#define token "ekPKnnKiEq0lqd7J7Lp1yN2fgpnWgJSrdzw7YfCfkGG"

#define message "Hello"

Line line;

void setup()
{
    Serial.begin(115200);
    line.startup(ssid,PASSWORD,token);

    line.sentmessage(message);
}

void loop(){}
