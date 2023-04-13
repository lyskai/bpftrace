

enum hif_event_type {
	HIF_EVENT_IRQ_TRIGGER,
	HIF_EVENT_TIMER_ENTRY,
	HIF_EVENT_TIMER_EXIT,
	HIF_EVENT_BH_SCHED,
	HIF_EVENT_SRNG_ACCESS_START,
	HIF_EVENT_SRNG_ACCESS_END,
	HIF_EVENT_BH_COMPLETE,
	HIF_EVENT_BH_FORCE_BREAK,
};

struct hif_event_record {
	unsigned char hal_ring_id;
	unsigned int hp;
	unsigned int tp;
	int cpu_id;
	unsigned long long timestamp;
	enum hif_event_type type;
};
