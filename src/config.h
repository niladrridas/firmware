#ifndef CONFIG_H
#define CONFIG_H

// Define configuration parameters
#define SENSOR_PIN          A0
#define ACTUATOR_PIN        5
#define MAX_SENSOR_READINGS 100
#define WIFI_SSID           "MyWiFiNetwork"
#define WIFI_PASSWORD       "MyWiFiPassword"
#define MQTT_BROKER         "mqtt.example.com"
#define MQTT_PORT           1883
#define OTA_SERVER          "http://ota.example.com"
#define OTA_UPDATE_PATH     "/firmware-update"
#define OTA_VERSION_PATH    "/firmware-version"
#define OTA_TIMEOUT         30000 // 30 seconds
#define MAX_CONFIG_RETRIES  3

#endif
