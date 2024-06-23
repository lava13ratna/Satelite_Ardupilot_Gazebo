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
 * @file Vector3.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool microxrceddsgen.
 */

#include "Vector3.h"

#include <ucdr/microcdr.h>
#include <string.h>


bool geometry_msgs_msg_Vector3_serialize_topic(ucdrBuffer* writer, const geometry_msgs_msg_Vector3* topic)
{
    bool success = true;

        success &= ucdr_serialize_double(writer, topic->x);

        success &= ucdr_serialize_double(writer, topic->y);

        success &= ucdr_serialize_double(writer, topic->z);


    return success && !writer->error;
}

bool geometry_msgs_msg_Vector3_deserialize_topic(ucdrBuffer* reader, geometry_msgs_msg_Vector3* topic)
{
    bool success = true;

        success &= ucdr_deserialize_double(reader, &topic->x);

        success &= ucdr_deserialize_double(reader, &topic->y);

        success &= ucdr_deserialize_double(reader, &topic->z);


    return success && !reader->error;
}

uint32_t geometry_msgs_msg_Vector3_size_of_topic(const geometry_msgs_msg_Vector3* topic, uint32_t size)
{
    uint32_t previousSize = size;
        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;

        size += ucdr_alignment(size, 8) + 8;


    return size - previousSize;
}
