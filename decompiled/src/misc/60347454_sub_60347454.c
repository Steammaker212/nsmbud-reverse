/* sub_60347454
 * address: 0x60347454   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60347454(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r5

  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.5;
  v3 = FIELD_U32(a1, 6368);
  v2 = (_DWORD *)(a1 + 6368);
  if ( v3 )
  {
    *v2 = 0;
    v4 = **(_DWORD **)(FIELD_U32(a1, 6356) + 12);
    SkeletalAnim_play(v4, FIELD_U32(a1, 6352), (int)&dword_60C94A5C);
    AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), dword_60C94A6C);
    v5 = *(_DWORD **)(FIELD_U32(a1, 6356) + 20);
    v6 = *v5;
    TexAnim_play(*v5, FIELD_U32(a1, 6352), &dword_60C94A64);
    AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), dword_60C94A6C);
  }
  FIELD_U32(a1, 6360) = 40;
  return 6360;
}
