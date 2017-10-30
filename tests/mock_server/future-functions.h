#ifndef FUTURE_FUNCTIONS_H
#define FUTURE_FUNCTIONS_H

#include "future-value.h"
#include "future.h"
#include "mongoc-bulk-operation.h"

/**************************************************
 *
 * Generated by build/generate-future-functions.py.
 *
 * DO NOT EDIT THIS FILE.
 *
 *************************************************/
/* clang-format off */


future_t *
future_bulk_operation_execute (

   mongoc_bulk_operation_ptr bulk,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_command_simple (

   mongoc_client_ptr client,
   const_char_ptr db_name,
   const_bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_command_with_opts (

   mongoc_client_ptr client,
   const_char_ptr db_name,
   const_bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   const_bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_read_command_with_opts (

   mongoc_client_ptr client,
   const_char_ptr db_name,
   const_bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   const_bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_write_command_with_opts (

   mongoc_client_ptr client,
   const_char_ptr db_name,
   const_bson_ptr command,
   const_bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_read_write_command_with_opts (

   mongoc_client_ptr client,
   const_char_ptr db_name,
   const_bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   const_bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_client_kill_cursor (

   mongoc_client_ptr client,
   int64_t cursor_id
);


future_t *
future_collection_aggregate (

   mongoc_collection_ptr collection,
   mongoc_query_flags_t flags,
   const_bson_ptr pipeline,
   const_bson_ptr options,
   const_mongoc_read_prefs_ptr read_prefs
);


future_t *
future_collection_count (

   mongoc_collection_ptr collection,
   mongoc_query_flags_t flags,
   const_bson_ptr query,
   int64_t skip,
   int64_t limit,
   const_mongoc_read_prefs_ptr read_prefs,
   bson_error_ptr error
);


future_t *
future_collection_count_with_opts (

   mongoc_collection_ptr collection,
   mongoc_query_flags_t flags,
   const_bson_ptr query,
   int64_t skip,
   int64_t limit,
   const_bson_ptr opts,
   const_mongoc_read_prefs_ptr read_prefs,
   bson_error_ptr error
);


future_t *
future_collection_create_index_with_opts (

   mongoc_collection_ptr collection,
   const_bson_ptr keys,
   const_mongoc_index_opt_t opt,
   bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_collection_find_and_modify_with_opts (

   mongoc_collection_ptr collection,
   const_bson_ptr query,
   const_mongoc_find_and_modify_opts_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_collection_find_and_modify (

   mongoc_collection_ptr collection,
   const_bson_ptr query,
   const_bson_ptr sort,
   const_bson_ptr update,
   const_bson_ptr fields,
   bool _remove,
   bool upsert,
   bool _new,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_collection_find_indexes_with_opts (

   mongoc_collection_ptr collection,
   const_bson_ptr opts
);


future_t *
future_collection_stats (

   mongoc_collection_ptr collection,
   const_bson_ptr options,
   bson_ptr stats,
   bson_error_ptr error
);


future_t *
future_collection_insert_one_with_opts (

   mongoc_collection_ptr collection,
   const_bson_ptr document,
   const_bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_collection_read_write_command_with_opts (

   mongoc_collection_ptr collection,
   const_bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   const_bson_ptr opts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_collection_insert_bulk (

   mongoc_collection_ptr collection,
   mongoc_insert_flags_t flags,
   const_bson_ptr_ptr documents,
   uint32_t n_documents,
   const_mongoc_write_concern_ptr write_concern,
   bson_error_ptr error
);


future_t *
future_cluster_run_command_parts (

   mongoc_cluster_ptr cluster,
   mongoc_server_stream_ptr server_stream,
   mongoc_cmd_parts_ptr parts,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_cursor_destroy (

   mongoc_cursor_ptr cursor
);


future_t *
future_cursor_next (

   mongoc_cursor_ptr cursor,
   const_bson_ptr_ptr doc
);


future_t *
future_client_get_database_names_with_opts (

   mongoc_client_ptr client,
   const_bson_ptr opts,
   bson_error_ptr error
);


future_t *
future_client_select_server (

   mongoc_client_ptr client,
   bool for_writes,
   const_mongoc_read_prefs_ptr prefs,
   bson_error_ptr error
);


future_t *
future_client_destroy (

   mongoc_client_ptr client
);


future_t *
future_client_pool_destroy (

   mongoc_client_pool_ptr pool
);


future_t *
future_database_command_simple (

   mongoc_database_ptr database,
   bson_ptr command,
   const_mongoc_read_prefs_ptr read_prefs,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_database_get_collection_names_with_opts (

   mongoc_database_ptr database,
   const_bson_ptr opts,
   bson_error_ptr error
);


future_t *
future_gridfs_file_readv (

   mongoc_gridfs_file_ptr file,
   mongoc_iovec_ptr iov,
   size_t iovcnt,
   size_t min_bytes,
   uint32_t timeout_msec
);


future_t *
future_gridfs_find_one (

   mongoc_gridfs_ptr gridfs,
   const_bson_ptr query,
   bson_error_ptr error
);


future_t *
future_gridfs_file_remove (

   mongoc_gridfs_file_ptr file,
   bson_error_ptr error
);


future_t *
future_gridfs_file_seek (

   mongoc_gridfs_file_ptr file,
   int64_t delta,
   int whence
);


future_t *
future_gridfs_file_writev (

   mongoc_gridfs_file_ptr file,
   const_mongoc_iovec_ptr iov,
   size_t iovcnt,
   uint32_t timeout_msec
);


future_t *
future_gridfs_find_one_with_opts (

   mongoc_gridfs_ptr gridfs,
   const_bson_ptr filter,
   const_bson_ptr opts,
   bson_error_ptr error
);


future_t *
future_topology_select (

   mongoc_topology_ptr topology,
   mongoc_ss_optype_t optype,
   const_mongoc_read_prefs_ptr read_prefs,
   bson_error_ptr error
);


future_t *
future_client_get_gridfs (

   mongoc_client_ptr client,
   const_char_ptr db,
   const_char_ptr prefix,
   bson_error_ptr error
);


future_t *
future_collection_watch (

   mongoc_collection_ptr coll,
   const_bson_ptr pipeline,
   const_bson_ptr opts
);


future_t *
future_change_stream_next (

   mongoc_change_stream_ptr stream,
   const_bson_ptr_ptr bson
);


future_t *
future_change_stream_destroy (

   mongoc_change_stream_ptr stream
);



#endif /* FUTURE_FUNCTIONS_H */