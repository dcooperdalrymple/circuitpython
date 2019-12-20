// Fake source file used only to capture #define values for use in ld template files.
#include "mpconfigport.h"

// For each value needed in the LD file, create a C-like line:
// /*NAME_OF_VALUE=*/ NAME_OF_VALUE;
// The C preprocessor will replace NAME_OF_VALUE with the actual value.
// This will be post-processed by tools/gen_ld_files.py to extract the name and value.

// The next line is a marker to start looking for definitions. Lines above the next line are ignored.
// START_LD_DEFINES

/*MBR_START_ADDR=*/                                 MBR_START_ADDR;
/*MBR_SIZE=*/                                       MBR_SIZE;

/*SD_FLASH_START_ADDR=*/                            SD_FLASH_START_ADDR;
/*SD_FLASH_SIZE=*/                                  SD_FLASH_SIZE;

/*ISR_START_ADDR=*/                                 ISR_START_ADDR;
/*ISR_SIZE=*/                                       ISR_SIZE;

/*CIRCUITPY_DEFAULT_STACK_SIZE=*/                   CIRCUITPY_DEFAULT_STACK_SIZE;

/*CIRCUITPY_FIRMWARE_START_ADDR=*/                  CIRCUITPY_FIRMWARE_START_ADDR;
/*CIRCUITPY_FIRMWARE_SIZE=*/                        CIRCUITPY_FIRMWARE_SIZE;

/*CIRCUITPY_BLE_CONFIG_START_ADDR=*/                CIRCUITPY_BLE_CONFIG_START_ADDR;
/*CIRCUITPY_BLE_CONFIG_SIZE=*/                      CIRCUITPY_BLE_CONFIG_SIZE;

/*CIRCUITPY_INTERNAL_NVM_START_ADDR=*/              CIRCUITPY_INTERNAL_NVM_START_ADDR;
/*CIRCUITPY_INTERNAL_NVM_SIZE=*/                    CIRCUITPY_INTERNAL_NVM_SIZE;

/*CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_START_ADDR=*/ CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_START_ADDR;
/*CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_SIZE=*/       CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_SIZE;

/*BOOTLOADER_START_ADDR=*/                          BOOTLOADER_START_ADDR;
/*BOOTLOADER_SIZE=*/                                BOOTLOADER_SIZE;

/*BOOTLOADER_SETTINGS_START_ADDR=*/                 BOOTLOADER_SETTINGS_START_ADDR;
/*BOOTLOADER_SETTINGS_SIZE=*/                       BOOTLOADER_SETTINGS_SIZE;