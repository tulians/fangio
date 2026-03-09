#include "sapi.h"
#include "nn.h"
#include "benchmark.h"

/* Modular System Hooks (Implemented in src/) */
extern void perception_update(void);
extern void decision_make(void);
extern void control_apply(void);

int main(void) {
    // 1. Hardware Initialization
    boardConfig();
    benchmark_init();
    
    // 2. Main Control Loop
    while (1) {
        benchmark_start();
        
        // --- Step 1: Perception (Clean sensor data) ---
        perception_update();
        
        // --- Step 2: Decision (Neural Network Inference) ---
        decision_make();
        
        // --- Step 3: Control (Apply PID/Motors) ---
        control_apply();
        
        uint32_t loop_cycles = benchmark_stop();
        
        // Ensure real-time constraints (e.g., 50ms loop)
        delay(20); 
    }

    return 0;
}
