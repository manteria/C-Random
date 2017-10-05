
/*
Copyright © 2017 Kevin Tyrrell

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 * File Name:       Random.h
 * File Author:     Kevin Tyrrell
 * Date Created:    04/04/2017
 */

#pragma once

#include <stdbool.h>

/* Seeds this pseudo-random number generator with a provided value. */
void rand_seed(const unsigned int seed);
/* Generates a pseudo-random unsigned integer value from the current sequence. */
unsigned int rand_next();
/* Returns a pseudo-random unsigned integer in the domain of [0,limit). */
unsigned int rand_limit(const unsigned int limit);
/* Returns a pseudo-random float in the domain of [0, 1]. */
float rand_float();
/* Returns a pseudo-random boolean value based on the current sequence. */
bool rand_bool();