// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file GlobalPosition.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool microxrceddsgen.
 */

#ifndef _GlobalPosition_H_
#define _GlobalPosition_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "geometry_msgs/msg/Twist.h"
#include "std_msgs/msg/Header.h"

#define FRAME_GLOBAL_INT 5
#define FRAME_GLOBAL_REL_ALT 6
#define FRAME_GLOBAL_TERRAIN_ALT 11
#define IGNORE_LATITUDE 1
#define IGNORE_LONGITUDE 2
#define IGNORE_ALTITUDE 4
#define IGNORE_VX 8
#define IGNORE_VY 16
#define IGNORE_VZ 32
#define IGNORE_AFX 64
#define IGNORE_AFY 128
#define IGNORE_AFZ 256
#define FORCE 512
#define IGNORE_YAW 1024
#define IGNORE_YAW_RATE 2048
typedef struct ardupilot_msgs_msg_GlobalPosition
{
    std_msgs_msg_Header header;

    uint8_t coordinate_frame;

    uint16_t type_mask;

    double latitude;

    double longitude;

    float altitude;

    geometry_msgs_msg_Twist velocity;

    geometry_msgs_msg_Twist acceleration_or_force;

    float yaw;

} ardupilot_msgs_msg_GlobalPosition;

struct ucdrBuffer;
bool ardupilot_msgs_msg_GlobalPosition_serialize_topic(struct ucdrBuffer* writer, const ardupilot_msgs_msg_GlobalPosition* topic);
bool ardupilot_msgs_msg_GlobalPosition_deserialize_topic(struct ucdrBuffer* reader, ardupilot_msgs_msg_GlobalPosition* topic);
uint32_t ardupilot_msgs_msg_GlobalPosition_size_of_topic(const ardupilot_msgs_msg_GlobalPosition* topic, uint32_t size);

#ifdef __cplusplus
}
#endif

#endif // _GlobalPosition_H_