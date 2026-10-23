/* sub_60911CD0
 * address: 0x60911CD0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911CD0(_DWORD *a1)
{
  int result; // r0
  unsigned __int32 v3; // s16
  void *v4; // r0
  float32x2_t v5; // d0
  int v6; // r5
  float v7; // s2
  float v8; // s3
  float32x2_t v9; // d2
  int (__fastcall ***v10)(_DWORD, int *); // r6
  char v11; // r12

  result = a1[3];
  if ( !result )
  {
    v3 = a1[4];
    v4 = sub_608065A0();
    v5.n64_u32[0] = v3;
    v6 = 0;
    sub_608B6A64((int)v4, 0, v5, v7, v8, v9);
    sub_609130A4(a1);
    v10 = *(int (__fastcall ****)(_DWORD, int *))(a1[1] + 28);
    if ( ((unsigned int)&dword_60CC64A4 & ~(1620122912 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
    {
      dword_60CC64A0 = (int)off_60C28008;
      _cxa_guard_release(&dword_60CC64A4);
    }
    if ( v10 )
    {
      v6 = (**v10)(v10, &dword_60CC64A0);
      if ( v6 )
        v6 = (int)v10;
    }
    result = sub_608DB5F8(v6, 0);
    a1[2] = 0;
  }
  return result;
}
