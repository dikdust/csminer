#include <stdbool.h>
#include <stdint.h>

bool init_rxlib(const char* seed_hash, uint32_t len, int threads, int init_threads);

int64_t rx_hash_until(const char* blob, uint32_t len, uint64_t diff, int thread, char* hash_output, char* nonce_output, uint32_t* stopper); 