/* sub_603CCEC0
 * address: 0x603CCEC0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CCEC0(_DWORD *a1)
{
  int result; // r0
  int v3; // t1
  int v4; // r3
  int v5; // r5

  v3 = a1[1575];
  result = (int)(a1 + 1575);
  if ( !v3 )
  {
    v4 = **(_DWORD **)(a1[1577] + 12);
    FIELD_U32(v4, 20) = 0;
    FIELD_U32(v4, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(a1[1577] + 12) + 24) = 0;
    a1[2971] = 3;
    a1[2967] = -1;
    a1[2968] = -1;
    a1[2969] = 0;
    if ( *(_DWORD *)result == 1 )
    {
      a1[2966] = -1;
    }
    else
    {
      v5 = **(_DWORD **)(a1[1577] + 20);
      a1[2966] = 0;
      TexAnim_play(v5, a1[1576], &dword_60C98AF0);
      AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), dword_60C98AF8);
      if ( (float)(FIELD_F32(v5, 24) * 0.0) < 0.0 )
        sub_6041838C((ModelAnimation *)(v5 + 4));
      FIELD_U32(v5, 24) = 0;
      FIELD_U32(v5, 20) = 0;
      FIELD_U32(v5, 28) |= 2u;
    }
    a1[36] = 1065353216;
    a1[37] = 1065353216;
    a1[38] = 1065353216;
    return 1065353216;
  }
  return result;
}
