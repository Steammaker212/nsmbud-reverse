/* sub_600FF054
 * address: 0x600FF054   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FF054(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r6
  int v5; // r0
  int result; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (int (__fastcall ***)(_DWORD, int *))(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611657348 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
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
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "jc_wait";
  sub_60421AE4(v5, v7, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  if ( v4 )
    sub_60421AD4(FIELD_U32(v4, 7100));
  FIELD_U32(a1, 136) = 1082130432;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 100) = 1028443341;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 9356) = dword_60C8601C;
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
    return sub_60813430(a1 + 9476, "SE_BOSS_CMN_FAT_LAND_QUAKE", 0);
  return result;
}
