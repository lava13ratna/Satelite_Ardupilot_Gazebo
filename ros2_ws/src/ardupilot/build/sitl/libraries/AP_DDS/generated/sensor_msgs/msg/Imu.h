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
 * @file Imu.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool microxrceddsgen.
 */

#ifndef _Imu_H_
#define _Imu_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "geometry_msgs/msg/Vector3.h"
#include "geometry_msgs/msg/Quaternion.h"
#include "std_msgs/msg/Header.h"

typedef struct sensor_msgs_msg_Imu
{
    std_msgs_msg_Header header;

    geometry_msgs_msg_Quaternion orientation;

    double orientation_covariance[9];

    geometry_msgs_msg_Vector3 angular_velocity;

    double angular_velocity_covariance[9];

    geometry_msgs_msg_Vector3 linear_acceleration;

    double linear_acceleration_covariance[9];

} sensor_msgs_msg_Imu;

struct ucdrBuffer;
bool sensor_msgs_msg_Imu_serialize_topic(struct ucdrBuffer* writer, const sensor_msgs_msg_Imu* topic);
bool sensor_msgs_msg_Imu_deserialize_topic(struct ucdrBuffer* reader, sensor_msgs_msg_Imu* topic);
uint32_t sensor_msgs_msg_Imu_size_of_topic(const sensor_msgs_msg_Imu* topic, uint32_t size);

#ifdef __cplusplus
}
#endif

#endif // _Imu_H_
