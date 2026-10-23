/* jc_wait_ref_FD71C
 * address: 0x600FD71C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_FD71C(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r6
  int v5; // r0
  float v6; // s0
  int result; // r0
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (int (__fastcall ***)(_DWORD, int *))(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611650892 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v2 )
  {
    v4 = (**v2)(v2, &dword_60C81764);
    if ( v4 )
      v4 = (int)v2;
  }
  else
  {
    v4 = 0;
  }
  v5 = FIELD_U32(a1, 6304);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "jc_wait";
  sub_60421AE4(v5, v8, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  if ( v4 )
    sub_60421AD4(FIELD_U32(v4, 7100));
  FIELD_U32(a1, 124) = 1082130432;
  v6 = (float)(*(float *)((char *)sinLutTable + (((unsigned int)dword_60C86024 >> 20) & 0xFF0))
             + (float)((float)((float)(dword_60C86024 & 0xFFFFFF)
                             * *(float *)((char *)&sinLutTable[1] + (((unsigned int)dword_60C86024 >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 16.0;
  FIELD_F32(a1, 100) = (float)((float)(v6 + 4.0) * (float)((float)(v6 + -4.0) * 0.5))
                       / (float)(FIELD_F32(a1, 6812) - FIELD_F32(a1, 112));
  FIELD_F32(a1, 136) = v6;
  FIELD_U32(a1, 120) = 0;
  result = dword_60C8601C;
  FIELD_U32(a1, 9356) = dword_60C8601C;
  return result;
}
