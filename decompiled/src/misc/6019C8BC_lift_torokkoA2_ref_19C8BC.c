/* lift_torokkoA2_ref_19C8BC
 * address: 0x6019C8BC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall lift_torokkoA2_ref_19C8BC(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  int v3; // t1
  int v4; // r1
  _DWORD *v5; // r0
  _DWORD *result; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  v1 = a1;
  FIELD_U32(a1, 12868) = 1086324736;
  v2 = (_DWORD *)(a1 + 12880);
  sub_601E4F60(dword_60C8B13C);
  FIELD_U16(v1, 12888) = 0;
  *v2 = -1;
  v3 = FIELD_U32(v1, 12628);
  v1 += 12628;
  v4 = *(_DWORD *)(v1 - 4);
  v5 = **(_DWORD ***)(v3 + 28);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "lift_torokkoA2";
  ShuAnim_play(v5, v4, (int)v7);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 28) + 24) = -1082130432;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 28) + 4));
  result = **(_DWORD ***)(*(_DWORD *)v1 + 28);
  result[5] = result[2];
  result[7] |= 2u;
  return result;
}
