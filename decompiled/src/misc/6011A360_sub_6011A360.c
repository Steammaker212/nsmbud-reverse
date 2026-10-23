/* sub_6011A360
 * address: 0x6011A360   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011A360(int a1)
{
  int *v2; // r6
  int v3; // r1
  int v4; // r0
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r1
  int *v8; // r0
  int v9; // r0
  int v10; // r0
  int *v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  _DWORD *v15; // r0
  int v16; // r0
  int result; // r0
  int v18; // r0
  int v19; // r1
  int (**v20)(); // [sp+0h] [bp-28h] BYREF
  const char *v21; // [sp+4h] [bp-24h]

  sub_6040EB10(a1 + 9420);
  v2 = (int *)(a1 + 6304);
  v3 = FIELD_U32(a1, 6300);
  v4 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "jcm_special";
  SkeletalAnim_play(v4, v3, (int)&v20);
  v5 = 0;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
  v6 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 0;
  v7 = FIELD_U32(a1, 6300);
  v8 = *(int **)(FIELD_U32(a1, 6304) + 12);
  if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > 1u )
    ++v8;
  v9 = *v8;
  v20 = &sead__SafeStringBase__vtable;
  v21 = "jcm_special";
  SkeletalAnim_play(v9, v7, (int)&v20);
  v10 = *(_DWORD *)(*v2 + 12);
  if ( *(_DWORD *)(*v2 + 8) > 1u )
    v10 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
  v11 = *(int **)(*v2 + 12);
  if ( *(_DWORD *)(*v2 + 8) > 1u )
    ++v11;
  v12 = *v11;
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = *(_DWORD *)(*v2 + 12);
  if ( *(_DWORD *)(*v2 + 8) > 1u )
    v13 += 4;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 0;
  FIELD_U8(a1, 9331) = 0;
  do
  {
    v16 = *v2;
    if ( v5 <= 9 && ((1 << v5) & 0x3EC) != 0 )
    {
      v15 = *(_DWORD **)(v16 + 12);
    }
    else
    {
      v14 = FIELD_U32(v16, 8);
      v15 = *(_DWORD **)(v16 + 12);
      if ( v14 > 1 )
        ++v15;
    }
    sub_60448AF4(*v15, v5++);
  }
  while ( v5 != 10 );
  sub_60813430(a1 + 7008, "SE_BOSS_JR_CROWN_TURN", 0);
  FIELD_U8(a1, 9242) = 0;
  FIELD_U32(a1, 9196) = 2;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  if ( result )
  {
    v18 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 724))(v18);
    v19 = 360;
    if ( result )
      v19 = 210;
    FIELD_U32(a1, 9352) = v19;
  }
  return result;
}
