/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6 */

#ifndef PB_PROTOBLOG_TODOLIST_PB_H_INCLUDED
#define PB_PROTOBLOG_TODOLIST_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Style guide prefers prefixing enum values instead of surrounding
 with an enclosing message */
typedef enum _protoblog_TaskState { 
    protoblog_TaskState_TASK_OPEN = 0, 
    protoblog_TaskState_TASK_IN_PROGRESS = 1, 
    protoblog_TaskState_TASK_POST_PONED = 2, 
    protoblog_TaskState_TASK_CLOSED = 3, 
    protoblog_TaskState_TASK_DONE = 4 
} protoblog_TaskState;

/* Struct definitions */
typedef struct _protoblog_TodoList { 
    int32_t owner_id;
    pb_callback_t owner_name;
    pb_callback_t todos;
} protoblog_TodoList;

typedef struct _protoblog_TodoList_ListItems { 
    protoblog_TaskState state;
    pb_callback_t task;
    pb_callback_t due_date;
} protoblog_TodoList_ListItems;


/* Helper constants for enums */
#define _protoblog_TaskState_MIN protoblog_TaskState_TASK_OPEN
#define _protoblog_TaskState_MAX protoblog_TaskState_TASK_DONE
#define _protoblog_TaskState_ARRAYSIZE ((protoblog_TaskState)(protoblog_TaskState_TASK_DONE+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define protoblog_TodoList_init_default          {0, {{NULL}, NULL}, {{NULL}, NULL}}
#define protoblog_TodoList_ListItems_init_default {_protoblog_TaskState_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define protoblog_TodoList_init_zero             {0, {{NULL}, NULL}, {{NULL}, NULL}}
#define protoblog_TodoList_ListItems_init_zero   {_protoblog_TaskState_MIN, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define protoblog_TodoList_owner_id_tag          1
#define protoblog_TodoList_owner_name_tag        2
#define protoblog_TodoList_todos_tag             3
#define protoblog_TodoList_ListItems_state_tag   1
#define protoblog_TodoList_ListItems_task_tag    2
#define protoblog_TodoList_ListItems_due_date_tag 3

/* Struct field encoding specification for nanopb */
#define protoblog_TodoList_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    owner_id,          1) \
X(a, CALLBACK, SINGULAR, STRING,   owner_name,        2) \
X(a, CALLBACK, REPEATED, MESSAGE,  todos,             3)
#define protoblog_TodoList_CALLBACK pb_default_field_callback
#define protoblog_TodoList_DEFAULT NULL
#define protoblog_TodoList_todos_MSGTYPE protoblog_TodoList_ListItems

#define protoblog_TodoList_ListItems_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1) \
X(a, CALLBACK, SINGULAR, STRING,   task,              2) \
X(a, CALLBACK, SINGULAR, STRING,   due_date,          3)
#define protoblog_TodoList_ListItems_CALLBACK pb_default_field_callback
#define protoblog_TodoList_ListItems_DEFAULT NULL

extern const pb_msgdesc_t protoblog_TodoList_msg;
extern const pb_msgdesc_t protoblog_TodoList_ListItems_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define protoblog_TodoList_fields &protoblog_TodoList_msg
#define protoblog_TodoList_ListItems_fields &protoblog_TodoList_ListItems_msg

/* Maximum encoded size of messages (where known) */
/* protoblog_TodoList_size depends on runtime parameters */
/* protoblog_TodoList_ListItems_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif