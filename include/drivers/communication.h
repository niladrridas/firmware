#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <stdint.h> // Include necessary libraries for data types

// Function prototypes
void init_communication();
int send_data(uint8_t *data, size_t len);
int receive_data(uint8_t *buffer, size_t max_len);

#endif
