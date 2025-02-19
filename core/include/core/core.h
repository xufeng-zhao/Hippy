/*
 *
 * Tencent is pleased to support the open source community by making
 * Hippy available.
 *
 * Copyright (C) 2019 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include "core/base/base_time.h"
#include "core/base/common.h"
#include "core/base/file.h"
#include "core/base/macros.h"
#include "core/base/task.h"
#include "core/base/task_runner.h"
#include "core/base/thread.h"
#include "core/base/thread_id.h"
#include "core/base/uri_loader.h"
#include "core/base/string_view_utils.h"
#include "core/engine.h"
#include "core/modules/console_module.h"
#include "core/modules/contextify_module.h"
#include "core/modules/module_base.h"
#include "core/modules/module_register.h"
#include "core/modules/timer_module.h"
#include "core/napi/callback_info.h"
#include "core/napi/js_native_api.h"
#include "core/napi/js_native_api_types.h"
#include "core/napi/native_source_code.h"
#include "core/scope.h"

#ifdef JS_V8
#include "core/napi/v8/js_native_api_v8.h"
#include "core/napi/v8/js_native_turbo_v8.h"
#include "core/inspector/bridge.h"
#ifndef V8_WITHOUT_INSPECTOR
#include "core/inspector/v8_inspector_client_impl.h"
#endif
#else
#include "core/napi/jsc/js_native_api_jsc.h"
#include "core/napi/jsc/js_native_jsc_helper.h"
#include "core/napi/jsc/js_native_turbo_jsc.h"
#endif

#include "core/task/common_task.h"
#include "core/task/javascript_task.h"
#include "core/task/javascript_task_runner.h"
#include "core/task/worker_task_runner.h"
