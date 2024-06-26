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

#include "Header.h"

#include <ucdr/microcdr.h>
#include <string.h>


bool std_msgs_msg_Header_serialize_topic(ucdrBuffer* writer, const std_msgs_msg_Header* topic)
{
    bool success = true;

        success &= builtin_interfaces_msg_Time_serialize_topic(writer, &topic->stamp);

        success &= ucdr_serialize_string(writer, topic->frame_id);


    return success && !writer->error;
}

bool std_msgs_msg_Header_deserialize_topic(ucdrBuffer* reader, std_msgs_msg_Header* topic)
{
    bool success = true;

        success &= builtin_interfaces_msg_Time_deserialize_topic(reader, &topic->stamp);

        success &= ucdr_deserialize_string(reader, topic->frame_id, 255);


    return success && !reader->error;
}

uint32_t std_msgs_msg_Header_size_of_topic(const std_msgs_msg_Header* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += builtin_interfaces_msg_Time_size_of_topic(&topic->stamp, size);

        size += ucdr_alignment(size, 4) + 4 + (uint32_t)strlen(topic->frame_id) + 1;


    return size - previousSize;
}
