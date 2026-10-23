/* sub_60119004
 * address: 0x60119004   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60119004(int a1)
{
  int v2; // r0
  int *v3; // r6
  unsigned int v4; // r1
  int *v5; // r0
  bool v6; // cc
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r5
  int v10; // r0
  int *v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  _DWORD *v15; // r0
  int v16; // r0
  _DWORD v18[8]; // [sp+0h] [bp-20h] BYREF

  sub_6040EB10(a1 + 9420);
  v3 = (int *)(a1 + 6304);
  v2 = FIELD_U32(a1, 6304);
  v4 = FIELD_U32(v2, 8);
  v5 = *(int **)(v2 + 12);
  v6 = v4 > 1;
  v7 = FIELD_U32(a1, 6300);
  if ( v6 )
    ++v5;
  v8 = *v5;
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "jcm_shot";
  SkeletalAnim_play(v8, v7, (int)v18);
  v9 = 0;
  v10 = *(_DWORD *)(*v3 + 12);
  if ( *(_DWORD *)(*v3 + 8) > 1u )
    v10 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
  v11 = *(int **)(*v3 + 12);
  if ( *(_DWORD *)(*v3 + 8) > 1u )
    ++v11;
  v12 = *v11;
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = *(_DWORD *)(*v3 + 12);
  if ( *(_DWORD *)(*v3 + 8) > 1u )
    v13 += 4;
  *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
  FIELD_U8(a1, 9331) = 0;
  do
  {
    v16 = *v3;
    if ( v9 <= 9 && ((1 << v9) & 0x3EC) != 0 )
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
    sub_60448AF4(*v15, v9++);
  }
  while ( v9 != 10 );
  sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_GO", 0);
  FIELD_U32(a1, 9340) = 2;
  return 9340;
}
