/* jc_quake_st_ref_2
 * address: 0x600FCE24   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_quake_st_ref_2(int a1)
{
  int v2; // r0
  int v3; // r5
  char v4; // r12
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "jc_quake_st";
  sub_60421AE4(v2, v6, 0);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611648652 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81764) == 1 )
    sub_60421AD4(FIELD_U32(v3, 7100));
  FIELD_U16(a1, 6276) = 10;
  return 6276;
}
