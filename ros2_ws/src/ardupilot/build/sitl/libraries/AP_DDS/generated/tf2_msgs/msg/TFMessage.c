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
 * @file TFMessage.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool microxrceddsgen.
 */

#include "TFMessage.h"

#include <ucdr/microcdr.h>
#include <string.h>


bool tf2_msgs_msg_TFMessage_serialize_topic(ucdrBuffer* writer, const tf2_msgs_msg_TFMessage* topic)
{
    bool success = true;

        success &= ucdr_serialize_uint32_t(writer, topic->transforms_size);
        for(size_t i = 0; i < topic->transforms_size; ++i)
        {
            success &= geometry_msgs_msg_TransformStamped_serialize_topic(writer, &topic->transforms[i]);

        }



    return success && !writer->error;
}

bool tf2_msgs_msg_TFMessage_deserialize_topic(ucdrBuffer* reader, tf2_msgs_msg_TFMessage* topic)
{
    bool success = true;

        success &= ucdr_deserialize_uint32_t(reader, &topic->transforms_size);
        if(topic->transforms_size > 8)
        {
            reader->error = true;
        }
        else
        {
            for(size_t i = 0; i < topic->transforms_size; ++i)
            {
                success &= geometry_msgs_msg_TransformStamped_deserialize_topic(reader, &topic->transforms[i]);

            }
        }



    return success && !reader->error;
}

uint32_t tf2_msgs_msg_TFMessage_size_of_topic(const tf2_msgs_msg_TFMessage* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += ucdr_alignment(size, 4) + 4;
        for(size_t i = 0; i < topic->transforms_size; ++i)
        {
            size += geometry_msgs_msg_TransformStamped_size_of_topic(&topic->transforms[i], size);

        }



    return size - previousSize;
}
