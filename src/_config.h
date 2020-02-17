#include <Arduino.h> 

/* BOARD INFO */
String DEVICE_NAME      = "MY-FIRST-DEVICE-001"; 

int D0 = 16;
int D1 = 5; //SCL
int D2 = 4; //SDA
int D3 = 0;
int D4 = 2;
int D5 = 14;
int D6 = 12;
int D7 = 13;
int D8 = 15;
int D9 = 3; //rx
int D10 = 1; //tx
int D11 = 9;
int D12 = 10;

/* WIFI INFO */ 
String WIFI_SSID        = "iot-71";
String WIFI_PASSWORD    = "Rjdxtu2000";

/* MQTT INFO */ 
String MQTT_HOST        = "smarthome.local";
String MQTT_USERNAME    = "test";
String MQTT_PASSWORD    = "test";
String MQTT_CLIENT_ID   = "";
String MQTT_PREFIX      = "HOME/";

int MQTT_PORT           = 1883;
int PUBLISH_EVERY       = 10L * 1000;
int MQTT_CONNECT_TIMEOUT= 10; 

