/**
 * @file snabb.h
 * @author Mislav Novakovic <mislav.novakovic@sartur.hr>
 * @brief header file for transofrm.c.
 *
 * @copyright
 * Copyright (C) 2017 Deutsche Telekom AG.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TRANSFORM_H
#define TRANSFORM_H

#include <sysrepo.h>

#include "snabb.h"

int load_startup_datastore(global_ctx_t *);
int sync_datastores(global_ctx_t *);

void clear_context(global_ctx_t *ctx);

int snabb_socket_reconnect(global_ctx_t *);

int snabb_state_data_to_sysrepo(global_ctx_t *, char *, sr_val_t **, size_t *);
bool is_new_snabb_command(iter_change_t *, iter_change_t *);

int xpaths_to_snabb_socket(iter_change_t **, pthread_rwlock_t *, size_t, size_t);

#endif /* TRANSFORM_H */
