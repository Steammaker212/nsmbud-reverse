/* sub_604700A4
 * address: 0x604700A4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604700A4(int a1)
{
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r0
  int v4; // r0
  const char *v6[6]; // [sp+0h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 6160);
  v2 = FIELD_U32(a1, 6828);
  v3 = **(_DWORD **)(FIELD_U32(a1, 6160) + 12);
  v6[0] = (const char *)&sead__SafeStringBase__vtable;
  v6[1] = "out";
  SkeletalAnim_play(v3, v2, v6);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v1 + 12) + 4), 0);
  v4 = **(_DWORD **)(*v1 + 12);
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*v1 + 12) + 24) = 1065353216;
  v1[4] = 1;
  return 1;
}
