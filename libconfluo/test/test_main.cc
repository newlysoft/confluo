#define GTEST_HAS_TR1_TUPLE 0

#include "error_handling.h"
#include "gtest/gtest.h"
#include "aggregate/aggregate_test.h"
#include "aggregated_reflog_test.h"
#include "container/bitmap/bitmap_test.h"
#include "container/bitmap/bitmap_array_test.h"
#include "container/cursor/batched_cursor_test.h"
#include "types/byte_string_test.h"
#include "schema/column_test.h"
#include "types/data_types_test.h"
#include "container/bitmap/delta_encoded_array_test.h"
#include "confluo_store_test.h"
#include "atomic_multilog_test.h"
#include "parser/expression_compiler_test.h"
#include "parser/expression_parser_test.h"
#include "filter_test.h"
#include "container/flatten_test.h"
#include "types/immutable_value_test.h"
#include "schema/index_state_test.h"
#include "storage/storage_allocator_test.h"
#include "storage/memory_stat_test.h"
#include "container/monolog/monolog_test.h"
#include "types/mutable_value_test.h"
#include "threads/periodic_task_test.h"
#include "storage/ptr_test.h"
#include "container/radix_tree_test.h"
#include "schema/record_batch_test.h"
#include "parser/schema_parser_test.h"
#include "schema/schema_test.h"
#include "container/stream_test.h"
#include "container/string_map_test.h"
#include "atomic_multilog_metadata_test.h"
#include "threads/task_test.h"
#include "threads/thread_manager_test.h"
#include "parser/aggregate_parser_test.h"
#include "parser/trigger_parser_test.h"
#include "types/type_manager_test.h"

#include <signal.h>

int main(int argc, char** argv) {
  utils::error_handling::install_signal_handler(argv[0], SIGSEGV, SIGKILL,
                                                SIGSTOP);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
