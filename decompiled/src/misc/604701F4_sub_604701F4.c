/* sub_604701F4
 * address: 0x604701F4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604701F4(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  int v5; // t1
  int v6; // r1
  int v7; // r0
  int v8; // r0
  const char *v9[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 6176);
  result = FIELD_U32(a1, 6176);
  if ( result != 4 )
  {
    v5 = FIELD_U32(a1, 6160);
    v4 = (_DWORD *)(a1 + 6160);
    v6 = v4[167];
    v7 = **(_DWORD **)(v5 + 12);
    v9[0] = (const char *)&sead__SafeStringBase__vtable;
    v9[1] = "wait";
    SkeletalAnim_play(v7, v6, v9);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v4 + 12) + 4), 1);
    v8 = **(_DWORD **)(*v4 + 12);
    FIELD_U32(v8, 20) = 0;
    FIELD_U32(v8, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(*v4 + 12) + 24) = 1065353216;
    *v3 = 4;
    return 4;
  }
  return result;
}
