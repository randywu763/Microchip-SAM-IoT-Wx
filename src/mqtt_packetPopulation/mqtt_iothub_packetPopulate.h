// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

#ifndef MQTT_IOTHUB_PACKET_POPULATE_H
#define MQTT_IOTHUB_PACKET_POPULATE_H

#include <stdbool.h>
#include <stdint.h>
#include "iot_config/cloud_config.h"

void MQTT_CLIENT_iothub_publish(uint8_t *data, uint16_t len);
void MQTT_CLIENT_iothub_receive(uint8_t *data, uint16_t len);
void MQTT_CLIENT_iothub_connect(char* deviceID);
bool MQTT_CLIENT_iothub_subscribe();
void MQTT_CLIENT_iothub_connected();

char digit_to_hex(char number);

#endif /* MQTT_IOTHUB_PACKET_POPULATE_H */