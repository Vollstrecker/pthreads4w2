/* This is the POSIX thread API (POSIX 1003).

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

/* FIXME: do not include function prototypes for functions which are
   not yet implemented.  This will allows us to keep a better handle on
   where we're at. */

#ifndef _PTHREADS_H
#define _PTHREADS_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int pthread_create(pthread_t *thread,
		   const pthread_attr_t *attr,
		   void * (*start_routine) (void *),
		   void * arg);

void pthread_exit(void *value);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _PTHREADS_H */





