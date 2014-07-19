/* Copyright (C) 2014 by Jacob Alexander
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __macro_h
#define __macro_h

// ----- Includes -----

// Compiler Includes
#include <stdint.h>



// ----- Defines -----

// Key states (DO NOT USE for analog keyboards)
#define DEPRESSED 0
#define  RELEASED 1
#define   PRESSED 254
#define      HELD 255


// ----- Variables -----



// ----- Macros -----



// ----- Functions -----

void Macro_keyState( uint8_t scanCode, uint8_t state );
void Macro_analogState( uint8_t scanCode, uint8_t state );
void Macro_ledState( uint8_t ledCode, uint8_t state );
void Macro_bufferAdd( uint8_t byte );
void Macro_bufferRemove( uint8_t byte );
void Macro_finishWithUSBBuffer( uint8_t sentKeys );
void Macro_process();
void Macro_setup();

#endif
