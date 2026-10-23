/* jce_damage_s_ref
 * address: 0x600D1D60   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jce_damage_s_ref(int a1)
{
  _DWORD *v1; // r0
  int *v2; // r4
  int v3; // r1
  int v4; // r0
  int result; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (int *)(a1 + 6324);
  v1 = *(_DWORD **)(a1 + 6324);
  v3 = *(v2 - 2);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "jce_damage_s";
  ShuAnim_play(v1, v3, (int)v6);
  AnimationCtrl_setRepeat((ModelAnimation *)(*v2 + 4), 1);
  v4 = *v2;
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  result = *v2;
  *(_DWORD *)(*v2 + 24) = 1065353216;
  return result;
}
