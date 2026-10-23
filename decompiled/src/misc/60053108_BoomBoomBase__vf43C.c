/* BoomBoomBase__vf43C
 * address: 0x60053108   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf43C(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  v5[2] = &sead__SafeStringBase__vtable;
  v5[3] = "return";
  v1 = (_DWORD *)(a1 + 7204);
  sub_60421AD4(FIELD_U32(a1, 7204));
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "return";
  v2 = **(_DWORD **)(*v1 + 36);
  ResArchiveById = Profile__getResArchiveById((Profile *)*(v1 - 1798), 0);
  sub_6045195C(v2, ResArchiveById, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 36) + 4), 0);
  v1[9] = 0;
  *(v1 - 1771) = 0;
  *(v1 - 1770) = 0;
  *(v1 - 1769) = 0;
  return -7076;
}
