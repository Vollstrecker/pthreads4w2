/* 
 * mutex1n.c
 *
 *
 * Pthreads-win32 - POSIX Threads Library for Win32
 * Copyright (C) 1998 Ben Elliston and Ross Johnson
 * Copyright (C) 1999,2000,2001 Ross Johnson
 *
 * Contact Email: rpj@ise.canberra.edu.au
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * --------------------------------------------------------------------------
 *
 * As for mutex1.c but with type set to PTHREAD_MUTEX_NORMAL.
 *
 * Create a simple mutex object, lock it, unlock it, then destroy it.
 * This is the simplest test of the pthread mutex family that we can do.
 *
 * Depends on API functions:
 *	pthread_mutexattr_settype()
 * 	pthread_mutex_init()
 *	pthread_mutex_destroy()
 */

#include "test.h"

pthread_mutex_t mutex = NULL;
pthread_mutexattr_t mxAttr;

int
main()
{
  assert(pthread_mutexattr_init(&mxAttr) == 0);

  assert(pthread_mutexattr_settype(&mxAttr, PTHREAD_MUTEX_NORMAL) == 0);

  assert(mutex == NULL);

  assert(pthread_mutex_init(&mutex, &mxAttr) == 0);

  assert(mutex != NULL);

  assert(pthread_mutex_lock(&mutex) == 0);

  assert(pthread_mutex_unlock(&mutex) == 0);

  assert(pthread_mutex_destroy(&mutex) == 0);

  assert(mutex == NULL);

  return 0;
}