/* sub_60940650
 * address: 0x60940650   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60940650(_DWORD *a1)
{
  signed int v2; // r5
  char *v3; // r9
  char *v4; // r8
  bool v5; // cc
  signed int v6; // r0

  default_ref_9419C8(a1);
  *a1 = &off_60C5D898;
  a1[4] = a1 + 6;
  a1[3] = &BufferedSafeStringBase_char_vtable_probably;
  a1[5] = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 3));
  *(_BYTE *)a1[4] = 0;
  a1[3] = &off_60BD4C20;
  v2 = 0;
  *a1 = &off_60C5E378;
  a1[14] = -1;
  a1[15] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  v3 = (char *)a1[4];
  off_60C5CB30[3]();
  v4 = off_60C5CB34;
  if ( v3 != off_60C5CB34 )
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
      v5 = v2 + 2 < 0x80000;
      v2 += 3;
      if ( !v5 )
      {
        v2 = 0;
        break;
      }
    }
    v6 = a1[5];
    if ( v2 >= v6 )
      v2 = v6 - 1;
    qmemcpy(v3, v4, v2);
    v3[v2] = 0;
  }
  return a1;
}
