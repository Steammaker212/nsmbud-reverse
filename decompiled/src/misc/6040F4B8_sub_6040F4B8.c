/* sub_6040F4B8
 * address: 0x6040F4B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F4B8(int a1, int a2, int a3, float a4, float a5)
{
  int v9; // r5
  int result; // r0

  SkeletalAnim_play(**(_DWORD **)(a1 + 12), FIELD_U32(a1, 4), a2);
  v9 = **(_DWORD **)(a1 + 12);
  AnimationCtrl_setRepeat((ModelAnimation *)(v9 + 4), a3);
  FIELD_F32(v9, 24) = a4;
  FIELD_F32(v9, 20) = a5;
  result = FIELD_U32(v9, 28) | 2;
  FIELD_U32(v9, 28) = result;
  return result;
}
