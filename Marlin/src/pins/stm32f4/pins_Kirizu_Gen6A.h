/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once


#define ALLOW_STM32DUINO
#include "env_validate.h"


#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "KIRIZU_GEN6A"
#endif

#define DEFAULT_MACHINE_NAME "KIRIZU"
#define SRAM_EEPROM_EMULATION
#define MARLIN_EEPROM_SIZE                0x2000  // 8K

#if HAS_TMC_UART
  /**
   * TMC2208/TMC2209 stepper drivers
   *
   * Hardware serial communication ports.
   * If undefined software serial is used according to the pins below
   */

  #define X_HARDWARE_SERIAL MSerial3
  #define Y_HARDWARE_SERIAL MSerial3
  #define Z_HARDWARE_SERIAL MSerial3
  #define I_HARDWARE_SERIAL MSerial3
  #define J_HARDWARE_SERIAL MSerial4
  #define K_HARDWARE_SERIAL MSerial4

  #ifndef X_SLAVE_ADDRESS
    #define X_SLAVE_ADDRESS                 0b00
  #endif

  #ifndef Y_SLAVE_ADDRESS
    #define Y_SLAVE_ADDRESS                 0b10
  #endif

  #ifndef Z_SLAVE_ADDRESS
    #define Z_SLAVE_ADDRESS                 0b01
  #endif

  #ifndef I_SLAVE_ADDRESS
    #define I_SLAVE_ADDRESS                 0b11
  #endif

  #ifndef J_SLAVE_ADDRESS
    #define J_SLAVE_ADDRESS                 0b00
  #endif

  #ifndef K_SLAVE_ADDRESS
    #define K_SLAVE_ADDRESS                 0b10
  #endif  

#endif // HAS_TMC_UART


//
// Servos
//
#define SERVO0_PIN                          PC6
#define SERVO1_PIN                          PC7



//
// Limit Switches
//
#define X_MIN_PIN                           PE3
#define X_MAX_PIN                           PE5
#define Y_MIN_PIN                           PC13
#define Y_MAX_PIN                           PE2
#define Z_MIN_PIN                           PE6
#define Z_MAX_PIN                           PE4

//
// Steppers
//
#define X_STEP_PIN                          PD7
#define X_DIR_PIN                           PB3
#define X_ENABLE_PIN                        PB5
#define X_DIAG_PIN                          PB4

#define Y_STEP_PIN                          PD4
#define Y_DIR_PIN                           PD3
#define Y_ENABLE_PIN                        PD6
#define Y_DIAG_PIN                          PD5

#define Z_STEP_PIN                          PC12
#define Z_DIR_PIN                           PD0
#define Z_ENABLE_PIN                        PD2
#define Z_DIAG_PIN                          PD1

#define I_STEP_PIN                         PC8
#define I_DIR_PIN                          PC7
#define I_ENABLE_PIN                       PA8
#define I_DIAG_PIN                         PC9

#define J_STEP_PIN                         PD14
#define J_DIR_PIN                          PD13
#define J_ENABLE_PIN                       PC6
#define J_DIAG_PIN                         PD15

#define K_STEP_PIN                         PD8
#define K_DIR_PIN                          PB15
#define K_ENABLE_PIN                       PD10
#define K_DIAG_PIN                         PD9

//
// Temperature Sensors
//
#define TEMP_0_PIN                          PC0   // T0
#define TEMP_1_PIN                          PC1   // T1
#define TEMP_2_PIN                          PC2   // TB
#define TEMP_3_PIN                          PC3   // TC

//
// Heaters / Fans
//
#define HEATER_0_PIN                        PB12   // Heater0
#define HEATER_1_PIN                        PB13   // Heater1
#define HEATER_2_PIN                        PB14   // Heater1

#define FAN0_PIN                            PE7   // Fan0
#define FAN1_PIN                            PE8  // Fan1
#define FAN2_PIN                            PE10  // Fan2
#define FAN3_PIN                            PE12  // Fan3

#define PWM1_PIN                            PE9  // Fan2
#define PWM2_PIN                            PE11  // Fan3
