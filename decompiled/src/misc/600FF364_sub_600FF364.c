/* sub_600FF364
 * address: 0x600FF364   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FF364(_DWORD *a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611658132 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81764) == 1 )
    sub_60421AD4(FIELD_U32(v2, 7100));
  v4 = a1[1576];
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "jc_delight";
  sub_60421AE4(v4, v6, 0);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 4);
  return sub_60813430(a1 + 2369, "SE_VOC_JR_PROV2", 0);
}
