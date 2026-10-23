/* demo_battleA_ref_ED9EC
 * address: 0x600ED9EC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall demo_battleA_ref_ED9EC(int a1)
{
  int v2; // r5
  int ResArchiveById; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  KoopalingBase__vf66C(a1);
  v2 = **(_DWORD **)(FIELD_U32(a1, 7096) + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_battleA";
  return TexAnim_play(v2, ResArchiveById, v5);
}
