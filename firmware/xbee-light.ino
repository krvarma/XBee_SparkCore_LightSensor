// This #include statement was automatically added by the Spark IDE.
#include "XBee.h"

XBee xbee = XBee();
ZBRxIoSampleResponse io = ZBRxIoSampleResponse();
char szXBeeData[32];
int lightlevel = 0;

void setup() {
    Serial1.begin(9600);
    Serial.begin(9600);
    
    xbee.begin(Serial1);
    
    Spark.variable("lightlevel", &lightlevel, INT);
}

void loop() {
    xbee.readPacket();
    
     if (xbee.getResponse().isAvailable()) {
        if (xbee.getResponse().getApiId() == ZB_IO_SAMPLE_RESPONSE) {
            xbee.getResponse().getZBRxIoSampleResponse(io);
            
            sprintf(szXBeeData, "%08X-%08X", 
                io.getRemoteAddress64().getMsb(), 
                io.getRemoteAddress64().getLsb());

            Serial.print(szXBeeData);
            
            lightlevel = io.getAnalog(1);
            
            Serial.print(" AD01=");
            Serial.print(lightlevel);
            Serial.print(" ");
            
            Serial.println();
        }
     }
}