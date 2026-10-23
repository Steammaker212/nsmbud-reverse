/* demo_battleA_st_wait_ref
 * address: 0x6004FEB0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall demo_battleA_st_wait_ref(int a1)
{
  int v1; // r4
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[2] = &sead__SafeStringBase__vtable;
  v5[3] = "demo_battleA_st_wait";
  v1 = a1 + 7204;
  sub_60421AD4(FIELD_U32(a1, 7204));
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_battleA_st_wait";
  v2 = **(_DWORD **)(*(_DWORD *)v1 + 36);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v1 - 7192), 0);
  sub_6045195C(v2, ResArchiveById, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 36) + 4), 0);
  *(_WORD *)(v1 - 928) = 20;
  return -928;
}
