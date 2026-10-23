/* SE_BOSS_JR_CLOWN_PUNCH_REVERSE_ref
 * address: 0x6003E668   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_BOSS_JR_CLOWN_PUNCH_REVERSE_ref(int a1)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r0
  float *v11; // r6
  float result; // s0
  float v13; // s1
  int v14; // r0
  int v15; // r1
  int (**v16)(); // [sp+0h] [bp-20h] BYREF
  const char *v17; // [sp+4h] [bp-1Ch]

  v3 = (int *)(a1 + 11512);
  v2 = FIELD_U32(a1, 11512);
  if ( v2 <= 1 )
  {
    ((void (__fastcall *)(int))loc_600476D0)(a1);
    if ( (FIELD_F32(a1, 11604) < FIELD_F32(a1, 11180) || FIELD_F32(a1, 11608) > FIELD_F32(a1, 11288))
      && FIELD_U8(a1, 11692) )
    {
      v2 = *v3;
    }
    else
    {
      FIELD_U8(a1, 11684) = 1;
      v2 = *v3 + 1;
      *v3 = v2;
    }
  }
  if ( FIELD_U32(a1, 11468) )
  {
    if ( v2 < 2 || FIELD_U8(a1, 11684) )
    {
      sub_60045DB4(a1, 23, 0, 1, 0.0, 1.0);
      if ( *v3 >= 2 )
      {
        v4 = FIELD_U32(a1, 6300);
        v5 = *(_DWORD **)(a1 + 6312);
        v16 = &sead__SafeStringBase__vtable;
        v17 = "jcb_attack_st_wait";
        ShuAnim_play(v5, v4, (int)&v16);
        AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
        v6 = FIELD_U32(a1, 6312);
        FIELD_U32(v6, 20) = 1112276992;
        FIELD_U32(v6, 28) |= 2u;
        *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
      }
      FIELD_U16(a1, 6278) = 5;
      v7 = a1 + 7008;
LABEL_18:
      sub_60813430(v7, "SE_BOSS_JR_CLOWN_PUNCH_REVERSE", 0);
      goto LABEL_19;
    }
    v13 = 1.0;
    v14 = a1;
    v15 = 24;
  }
  else
  {
    if ( v2 < 2 || FIELD_U8(a1, 11684) )
    {
      sub_60045DB4(a1, 17, 0, 1, 0.0, 1.0);
      if ( *v3 >= 2 )
      {
        v8 = FIELD_U32(a1, 6300);
        v9 = *(_DWORD **)(a1 + 6312);
        v16 = &sead__SafeStringBase__vtable;
        v17 = "jcb_attack_st_wait";
        ShuAnim_play(v9, v8, (int)&v16);
        AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
        v10 = FIELD_U32(a1, 6312);
        FIELD_U32(v10, 20) = 1112276992;
        FIELD_U32(v10, 28) |= 2u;
        *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 3);
      }
      FIELD_U16(a1, 6278) = 5;
      v7 = a1 + 7008;
      goto LABEL_18;
    }
    v13 = 1.0;
    v14 = a1;
    v15 = 18;
  }
  sub_60045DB4(v14, v15, 0, 1, 0.0, v13);
  FIELD_U16(a1, 6278) = 40;
LABEL_19:
  FIELD_U32(a1, 11492) = 1;
  FIELD_U32(a1, 11616) = 1065353216;
  FIELD_U32(a1, 11632) = 1065353216;
  v11 = (float *)(a1 + 11632);
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11456) + 716))(FIELD_U32(a1, 11456)) == 1 )
  {
    if ( *v3 >= 2 && !FIELD_U8(a1, 11684) )
    {
      FIELD_U32(a1, 11544) = 40;
      FIELD_U32(a1, 11548) = 50;
      FIELD_U32(a1, 11552) = 10;
      FIELD_U32(a1, 11556) = 50;
      FIELD_U32(a1, 11560) = 10;
      return result;
    }
    goto LABEL_25;
  }
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11456) + 720))(FIELD_U32(a1, 11456));
  if ( *v3 < 2 || FIELD_U8(a1, 11684) )
  {
LABEL_25:
    FIELD_U32(a1, 11544) = 0;
    FIELD_U32(a1, 11548) = 10;
    result = fabsf(*v11 - FIELD_F32(a1, 11628)) / 10.0;
    FIELD_F32(a1, 11640) = result;
    FIELD_U8(a1, 11678) = 0;
    FIELD_U8(a1, 11693) = 0;
    FIELD_U8(a1, 11694) = 0;
    return result;
  }
  FIELD_U32(a1, 11544) = 40;
  FIELD_U32(a1, 11548) = 50;
  FIELD_U32(a1, 11552) = 10;
  FIELD_U32(a1, 11556) = 50;
  FIELD_U32(a1, 11560) = 10;
  result = fabsf(*v11 - FIELD_F32(a1, 11628)) / 10.0;
  FIELD_F32(a1, 11640) = result;
  return result;
}
