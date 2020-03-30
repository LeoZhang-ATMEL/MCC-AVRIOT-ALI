#ifndef CLOUD_CONFIG_H
#define CLOUD_CONFIG_H

// <h> Cloud Configuration

// <s> project id
// <i> Google Cloud Platform project id
// <id> project_id
#define CFG_PRODUCT_KEY "a12SBAhLjnt"


// <s> project region
// <i> Google Cloud Platform project region
// <id> project_region
#define CFG_DEVICE_NAME "D804"

#define CFG_DEVICE_SECRET "Zv4yGHpUN3fGWljc2OAndunvtRUyGg7g"

#define CFG_WRITE_DEVICE_SECRET 1

#define MAX_PRODUCT_KEY_LENGTH 11
#define MAX_DEVICE_NAME_LENGTH 30
#define DEVICE_SECRET_LENGTH 32

// <s> registry id
// <i> Google Cloud Platform registry id
// <id> registry_id
#define CFG_MQTT_HOST_SUFFIX ".iot-as-mqtt.cn-shanghai.aliyuncs.com"

#define CFG_MQTT_HOST CFG_PRODUCT_KEY CFG_MQTT_HOST_SUFFIX


#define MQTT_COMM_PORT_TLS 1883

// </h>

#endif // CLOUD_CONFIG_H
