/* sub_60122278
 * address: 0x60122278   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60122278(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s2
  __int64 v5; // r0
  int *v6; // r6
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r5
  int v10; // r0
  int v11; // r1
  int *v12; // r0
  int v13; // r0
  int v14; // r0
  int *v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r1
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r5
  char v22; // r12
  int (**v24)(); // [sp+0h] [bp-28h] BYREF
  const char *v25; // [sp+4h] [bp-24h]

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 == (*(int (**)(void))(dword_60C86CE8 + 8))() )
  {
    v3 = FIELD_F32(a1, 108);
    v4 = FIELD_F32(a1, 8940);
    if ( v3 <= v4 && FIELD_F32(a1, 112) <= FIELD_F32(a1, 8944) )
      FIELD_U32(a1, 9336) = 2;
    if ( v3 >= v4 && FIELD_F32(a1, 112) <= FIELD_F32(a1, 8944) )
      FIELD_U32(a1, 9336) = 0;
    if ( v3 <= v4 && FIELD_F32(a1, 112) >= FIELD_F32(a1, 8944) )
      FIELD_U32(a1, 9336) = 3;
    if ( v3 >= v4 && FIELD_F32(a1, 112) >= FIELD_F32(a1, 8944) )
      FIELD_U32(a1, 9336) = 1;
    FIELD_U32(a1, 9196) = 2;
    FIELD_U8(a1, 9318) = 1;
    FIELD_U8(a1, 9242) = 0;
    v5 = 0x12C00002480LL;
    if ( FIELD_U8(a1, 9268) )
      HIDWORD(v5) = 360;
    FIELD_U32(a1, 9344) = HIDWORD(v5);
  }
  else
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
    sub_6040EB10(a1 + 9420);
    v6 = (int *)(a1 + 6304);
    v7 = FIELD_U32(a1, 6300);
    v8 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
    v24 = &sead__SafeStringBase__vtable;
    v25 = "jcm_damage_up";
    SkeletalAnim_play(v8, v7, (int)&v24);
    v9 = 0;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
    v10 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
    FIELD_U32(v10, 20) = 0;
    FIELD_U32(v10, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 1065353216;
    v11 = FIELD_U32(a1, 6300);
    v12 = *(int **)(FIELD_U32(a1, 6304) + 12);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > 1u )
      ++v12;
    v13 = *v12;
    v24 = &sead__SafeStringBase__vtable;
    v25 = "jcm_damage_up";
    SkeletalAnim_play(v13, v11, (int)&v24);
    v14 = *(_DWORD *)(*v6 + 12);
    if ( *(_DWORD *)(*v6 + 8) > 1u )
      v14 += 4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 0);
    v15 = *(int **)(*v6 + 12);
    if ( *(_DWORD *)(*v6 + 8) > 1u )
      ++v15;
    v16 = *v15;
    FIELD_U32(v16, 20) = 0;
    FIELD_U32(v16, 28) |= 2u;
    v17 = *(_DWORD *)(*v6 + 12);
    if ( *(_DWORD *)(*v6 + 8) > 1u )
      v17 += 4;
    *(_DWORD *)(*(_DWORD *)v17 + 24) = 1065353216;
    FIELD_U8(a1, 9331) = 0;
    do
    {
      v20 = *v6;
      if ( v9 <= 9 && ((1 << v9) & 0x3EC) != 0 )
      {
        v19 = *(_DWORD **)(v20 + 12);
      }
      else
      {
        v18 = FIELD_U32(v20, 8);
        v19 = *(_DWORD **)(v20 + 12);
        if ( v18 > 1 )
          ++v19;
      }
      sub_60448AF4(*v19, v9++);
    }
    while ( v9 != 10 );
    sub_60813430(a1 + 7008, "SE_BOSS_JR_CROWN_FUKKATSU", 0);
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 164) = 0;
    v21 = FIELD_U32(a1, 6772);
    if ( ((unsigned int)&dword_60C80048 & ~(1611802024 << v22) & 1) == 0 && _cxa_guard_acquire(&dword_60C80048) )
    {
      dword_60C80044 = (int)&off_60BC1FA8;
      _cxa_guard_release(&dword_60C80048);
    }
    if ( v21 && (**(int (__fastcall ***)(int, int *))v21)(v21, &dword_60C80044) == 1 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v21 + 192))(v21, &unk_60C841B4);
    FIELD_U16(a1, 6278) = 60;
    FIELD_U32(a1, 9196) = 1;
    FIELD_U8(a1, 9242) = 0;
    LODWORD(v5) = 9242;
  }
  return v5;
}
