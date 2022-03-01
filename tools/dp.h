struct dp_tx_desc_pool_s {
	uint16_t elem_size;
	uint32_t num_allocated;
	uint16_t pool_size;
	uint8_t flow_pool_id;
	uint8_t num_invalid_bin;
	uint16_t avail_desc;
};

struct dp_soc {
	struct dp_tx_desc_pool_s tx_desc[1];
};


