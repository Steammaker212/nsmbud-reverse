/* sub_609195BC
 * address: 0x609195BC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609195BC(_DWORD *a1)
{
  signed int v2; // r5
  _DWORD *v3; // r6
  char *v4; // r9
  char *v5; // r8
  bool v6; // cc
  signed int v7; // r0

  v2 = 0;
  *a1 = 0;
  a1[1] = 0x800000;
  a1[2] = 0;
  a1[3] = 50331648;
  a1[4] = 256;
  a1[5] = 0x2000000;
  a1[6] = 0x2000000;
  a1[7] = 0x100000;
  a1[12] = a1 + 14;
  a1[8] = 4096;
  a1[9] = 16;
  a1[10] = 128;
  a1[11] = &BufferedSafeStringBase_char_vtable_probably;
  v3 = a1 + 11;
  a1[13] = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 11));
  *v3 = &off_60BD94D4;
  v4 = (char *)a1[12];
  off_60C5CB30[3]();
  v5 = off_60C5CB34;
  if ( v4 != off_60C5CB34 )
  {
    off_60C5CB30[3]();
    while ( off_60C5CB34[v2] )
    {
      if ( !off_60C5CB34[v2 + 1] )
      {
        ++v2;
        break;
      }
      if ( !off_60C5CB34[v2 + 2] )
      {
        v2 += 2;
        break;
      }
      v6 = v2 + 2 < 0x80000;
      v2 += 3;
      if ( !v6 )
      {
        v2 = 0;
        break;
      }
    }
    v7 = a1[13];
    if ( v2 >= v7 )
      v2 = v7 - 1;
    qmemcpy(v4, v5, v2);
    v4[v2] = 0;
  }
  a1[11] = &off_60BD94BC;
  *((_WORD *)a1 + 156) = 1;
  *((_BYTE *)a1 + 314) = 0;
  return a1;
}
