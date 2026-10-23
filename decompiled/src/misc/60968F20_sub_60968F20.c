/* sub_60968F20
 * address: 0x60968F20   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60968F20(_DWORD *a1)
{
  sead_IDisposer *v2; // r4
  _DWORD *v3; // r0
  char *v4; // r5
  char *v5; // r8
  signed int v6; // r7
  bool v7; // cc
  signed int v8; // r0

  v2 = (sead_IDisposer *)dword_60CD0B58;
  if ( !dword_60CD0B58 )
  {
    v2 = (sead_IDisposer *)operator_new_8DE2C8(0x144u, (int)a1, 4);
    v3 = sead__IDisposer__ctor(&FIELD_U32(v2, 0x4), a1, 3u);
    FIELD_U32(v2, 0x4) = (int)off_60C5EBEC;
    dword_60CD0B54 = (int)v3;
    FIELD_U32(v2, 0x0) = (int)off_60C5EBFC;
    v2[1].field_8 = (int)&v2[2];
    v2[1].containingHeap = (int)&BufferedSafeStringBase_char_vtable_probably;
    v2[1].field_C = 256;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v2[1].containingHeap);
    v2[1].containingHeap = (int)&off_60BD94D4;
    v4 = (char *)v2[1].field_8;
    off_60C5CB30[3]();
    v5 = off_60C5CB34;
    if ( v4 != off_60C5CB34 )
    {
      off_60C5CB30[3]();
      v6 = 0;
      while ( off_60C5CB34[v6] )
      {
        if ( !off_60C5CB34[v6 + 1] )
        {
          ++v6;
          break;
        }
        if ( !off_60C5CB34[v6 + 2] )
        {
          v6 += 2;
          break;
        }
        v7 = v6 + 2 < 0x80000;
        v6 += 3;
        if ( !v7 )
        {
          v6 = 0;
          break;
        }
      }
      v8 = v2[1].field_C;
      if ( v6 >= v8 )
        v6 = v8 - 1;
      qmemcpy(v4, v5, v6);
      v4[v6] = 0;
    }
    v2[1].containingHeap = (int)&off_60BD94BC;
    sead__CriticalSection__ctor(v2 + 18);
    dword_60CD0B58 = (int)v2;
  }
  return v2;
}
