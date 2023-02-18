#include <ESP8266WiFi.h>
//#include <WiFiClient.h>
#include <TridentTD_LineNotify.h>
#include "sentmessage.h"

void Line::startup(String ssid,String pass,String linetoken){
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);

  //等待無線網路連接
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print(".");
  }

  LINE.setToken(linetoken); //設定Line Token權杖
}

void Line::sentmessage(String message){
    LINE.notify(message);
}
