/* sub_606DFDEC
 * address: 0x606DFDEC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DFDEC(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int Resource; // r0
  int result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v6[8]; // [sp+8h] [bp-20h] BYREF

  v1 = a1 + 6104;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 24) = 1065353216;
  v2 = **(_DWORD ***)(FIELD_U32(a1, 6104) + 28);
  FIELD_U32(a1, 6108) = v2;
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "switch_koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v6);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "boss_koopa_ax_swing";
  ShuAnim_play(v2, Resource, v5);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(v1, 4) + 4), 0);
  result = FIELD_U32(v1, 4);
  FIELD_U32(result, 24) = 1065353216;
  return result;
}
