/* demo_battleA_wait_ref
 * address: 0x600EDA5C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall demo_battleA_wait_ref(int a1)
{
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  KoopalingBase__vf678(a1);
  v2 = **(_DWORD **)(FIELD_U32(a1, 7096) + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_battleA_wait";
  return TexAnim_play(v2, ResArchiveById, v5);
}
