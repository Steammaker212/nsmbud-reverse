/* damage_s_ref_E8FA4
 * address: 0x600E8FA4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall damage_s_ref_E8FA4(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int ResArchiveById; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v1 = a1 + 7096;
  v2 = **(_DWORD ***)(FIELD_U32(a1, 7096) + 28);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "damage_s";
  ShuAnim_play(v2, ResArchiveById, (int)v4);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 28) + 4), 1);
}
