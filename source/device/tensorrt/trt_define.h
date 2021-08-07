/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2021, OPEN AI LAB
 * Author: lswang@openailab.com
 */

#pragma once

#define TRT_DEVICE_NAME "TensorRT"
#define TRT_ENGINE_FILE "TensorRT.engine"

#define EXPORT_BEGIN  extern "C" {
#define EXPORT_FINISH }

typedef struct trt_option
{
    char* dev_name;
    char* engine_file;  //!< cache trt engine path
    int gpu_index;      //!< select which GPU to run graph
    int dla_index;      //!< select to use NVIDIA DLA
    int precision;      //!< precision of calculation
} trt_opt_t;
