/* damage_s_ref_128094
 * address: 0x60128094   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall damage_s_ref_128094(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int ResArchiveById; // r0
  int result; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v1 = a1 + 7096;
  v2 = **(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "damage_s";
  ShuAnim_play(v2, ResArchiveById, (int)v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 28) + 4), 1);
  result = **(_DWORD **)(*(_DWORD *)v1 + 28);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
