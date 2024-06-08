#ifndef FIRMWARE_UPDATE_H
#define FIRMWARE_UPDATE_H

// Define firmware update status enum
typedef enum {
    FW_UPDATE_SUCCESS,
    FW_UPDATE_FAILED,
    FW_UPDATE_IN_PROGRESS
} FirmwareUpdateStatus;

// Function prototypes for firmware update management
FirmwareUpdateStatus check_for_update();
FirmwareUpdateStatus download_update();
FirmwareUpdateStatus apply_update();

#endif /* FIRMWARE_UPDATE_H */
