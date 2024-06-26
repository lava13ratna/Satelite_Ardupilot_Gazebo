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
 * @file Header.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool microxrceddsgen.
 */

#ifndef _Header_H_
#define _Header_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "builtin_interfaces/msg/Time.h"

typedef struct std_msgs_msg_Header
{
    builtin_interfaces_msg_Time stamp;

    char frame_id[255];

} std_msgs_msg_Header;

struct ucdrBuffer;
bool std_msgs_msg_Header_serialize_topic(struct ucdrBuffer* writer, const std_msgs_msg_Header* topic);
bool std_msgs_msg_Header_deserialize_topic(struct ucdrBuffer* reader, std_msgs_msg_Header* topic);
uint32_t std_msgs_msg_Header_size_of_topic(const std_msgs_msg_Header* topic, uint32_t size);

#ifdef __cplusplus
}
#endif

#endif // _Header_H_
