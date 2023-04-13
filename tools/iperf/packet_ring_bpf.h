struct PacketRing {
    // producer and consumer
    // must be an atomic type, e.g. int
    // otherwise reads/write can be torn
    int producer;
    int consumer;
    int maxcount;
    int consumerdone;
    int awaitcounter;
    int mutex_enable;
    int bytes;

    // Use a condition variables
    // o) awake_producer - producer waits for the consumer thread to
    //    make space or end (signaled by the consumer)
    // o) awake_consumer - signal the consumer thread to to run
    //    (signaled by the producer)
    //struct Condition *awake_producer;
    //struct Condition *awake_consumer;
    //struct ReportStruct *data;
};

