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
 * @file TwistStamped.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool microxrceddsgen.
 */

#include "TwistStamped.h"

#include <ucdr/microcdr.h>
#include <string.h>


bool geometry_msgs_msg_TwistStamped_serialize_topic(ucdrBuffer* writer, const geometry_msgs_msg_TwistStamped* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_serialize_topic(writer, &topic->header);

        success &= geometry_msgs_msg_Twist_serialize_topic(writer, &topic->twist);


    return success && !writer->error;
}

bool geometry_msgs_msg_TwistStamped_deserialize_topic(ucdrBuffer* reader, geometry_msgs_msg_TwistStamped* topic)
{
    bool success = true;

        success &= std_msgs_msg_Header_deserialize_topic(reader, &topic->header);

        success &= geometry_msgs_msg_Twist_deserialize_topic(reader, &topic->twist);


    return success && !reader->error;
}

uint32_t geometry_msgs_msg_TwistStamped_size_of_topic(const geometry_msgs_msg_TwistStamped* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += std_msgs_msg_Header_size_of_topic(&topic->header, size);

        size += geometry_msgs_msg_Twist_size_of_topic(&topic->twist, size);


    return size - previousSize;
}
