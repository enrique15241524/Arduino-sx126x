/*!
 * \file      board.h
 *
 * \brief     Target board general functions implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2017 Semtech
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 */
#ifndef __BOARD_H__
#define __BOARD_H__

#include <stdint.h>

//#define LoRa_UCA
//#define LoRa_Test_Board

/*!
 * Defines the time required for the TCXO to wakeup [ms].
 */
#define BOARD_TCXO_WAKEUP_TIME                      0

/*!
 * Board MCU pins definitions
 */
#ifdef LoRa_Test_Board
  #define RADIO_RESET                                 6       
  
  #define RADIO_MOSI                                  11
  #define RADIO_MISO                                  12
  #define RADIO_SCLK                                  13
  #define RADIO_NSS                                   10
  #define RADIO_BUSY                                  5
                                  
  #define RADIO_DIO_1                                 2
  #define RADIO_DIO_2                                 4
  #define RADIO_DIO_3                                 7                          
                                  
  
  #define RADIO_DEVICE_SEL                            A2
  #define LED                                         A1
  
#elif defined(LoRa_UCA)
  #define RADIO_RESET                                 9       
  
  #define RADIO_MOSI                                  11
  #define RADIO_MISO                                  12
  #define RADIO_SCLK                                  13
  #define RADIO_NSS                                   10
  #define RADIO_BUSY                                  8
                                  
  #define RADIO_DIO_1                                 2
  #define RADIO_DIO_2                                 5
  #define RADIO_DIO_3                                 6                          
                                  
  
  #define RADIO_DEVICE_SEL                            A2
  #define LED                                         A1
  
#else 
  #define RADIO_RESET                                 6//A1//8//A1           
  //#define RADIO_RESET                                 8        
  
  #define RADIO_MOSI                                  11
  #define RADIO_MISO                                  12
  #define RADIO_SCLK                                  13
  #define RADIO_NSS                                   10
  #define RADIO_BUSY                                  A1//9
                                  
  #define RADIO_DIO_1                                 3//2
  #define RADIO_DIO_2                                 
  #define RADIO_DIO_3                                                             
                                  
  
  #define RADIO_DEVICE_SEL                            A1
  #define LED                                         9
#endif 


/*!
 * \brief Disable interrupts
 *
 * \remark IRQ nesting is managed
 */
void BoardDisableIrq( void );

/*!
 * \brief Enable interrupts
 *
 * \remark IRQ nesting is managed
 */
void BoardEnableIrq( void );

#endif // __BOARD_H__
