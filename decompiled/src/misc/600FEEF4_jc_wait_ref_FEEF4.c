/* jc_wait_ref_FEEF4
 * address: 0x600FEEF4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_FEEF4(_DWORD *a1)
{
  int result; // r0
  unsigned int v3; // r3
  int v4; // r1
  int v5; // r5
  char v6; // r12
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  result = a1[1576];
  v3 = FIELD_U32(result, 68);
  v4 = FIELD_U32(result, 12);
  if ( FIELD_U32(result, 8) > v3 )
    v4 += 4 * v3;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 1) == 0 )
  {
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "jc_wait";
    sub_60421AE4(result, v7, 1);
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 780))(a1, 0);
    v5 = (*(int (__fastcall **)(_DWORD *))(*a1 + 624))(a1);
    if ( ((unsigned int)dword_60C81768 & ~(1611657108 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
    {
      dword_60C81764 = (int)&off_60BC2CB4;
      _cxa_guard_release(dword_60C81768);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81764) == 1 )
        sub_60421AD4(FIELD_U32(v5, 7100));
    }
    a1[2359] = -1;
    return 9436;
  }
  return result;
}
