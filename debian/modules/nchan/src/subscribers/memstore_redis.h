#define MEMSTORE_REDIS_SUBSCRIBER_TIMEOUT 10
subscriber_t *memstore_redis_subscriber_create(memstore_channel_head_t *chanhead);
ngx_int_t memstore_redis_subscriber_destroy(subscriber_t *sub);
