/* SE_OBJ_FIREBALL_DISAPP_ref_3C6450
 * address: 0x603C6450   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_3C6450(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  float v7; // r1
  float v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  _BYTE *v11; // r5
  int v12; // r1
  int *v13; // r7
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r5
  int *v19; // r7
  int v20; // r1
  unsigned int v21; // r0
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r0
  unsigned int v25; // r1
  int v26; // r2
  unsigned int v27; // r7
  unsigned int v28; // r7
  Vec2 v30; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v5 = Global_BasicSoundActor2;
  v6 = FIELD_U32(a3, 64);
  v7 = FIELD_F32(v6, 108);
  v8 = FIELD_F32(v6, 112);
  position.x = v7;
  position.y = v8;
  mapPositionToScreen(&v30, &position);
  BasicSoundActor2_play(v5, "SE_OBJ_FIREBALL_DISAPP", &v30.x, 0);
  v9 = FIELD_U32(a1, 26988);
  if ( !v9 )
    return 1;
  if ( FIELD_U32(a2, 64) + 188 == a2 )
  {
    if ( v9 != 2 )
    {
      if ( v9 == 3 )
      {
        FIELD_U8(a1, 27021) = 50;
        sub_603C605C(a1);
        v18 = a1 + 14956;
        v19 = &dword_60C98644;
        if ( !FIELD_U32(a1, 26980) )
          v19 = &dword_60C98664;
        sub_60421938(*(_DWORD **)(a1 + 14956), FIELD_U32(a1, 14960), (int)(v19 + 2));
        v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
        v21 = *(_DWORD *)(*(_DWORD *)v18 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > v21 )
          v20 += 4 * v21;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v20 + 4), 1);
        v22 = *(_DWORD *)(*(_DWORD *)v18 + 12);
        v23 = *(_DWORD *)(*(_DWORD *)v18 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v18 + 8) > v23 )
          v22 += 4 * v23;
        *(_DWORD *)(*(_DWORD *)v22 + 24) = 1065353216;
        FIELD_U8(a1, 27029) = 1;
        goto LABEL_21;
      }
      if ( !FIELD_U8(a1, 27021) )
      {
        FIELD_U8(a1, 27020) = 12;
        sub_603C605C(a1);
        v11 = (_BYTE *)(a1 + 14956);
        v10 = *(_DWORD **)(a1 + 14956);
        v12 = FIELD_U32(a1, 14960);
        v13 = &dword_60C98644;
        if ( !FIELD_U32(a1, 26980) )
          v13 = &dword_60C98664;
        goto LABEL_6;
      }
    }
  }
  else if ( !FIELD_U8(a1, 27021) )
  {
    FIELD_U8(a1, 27020) = 12;
    sub_603C605C(a1);
    v11 = (_BYTE *)(a1 + 14956);
    v10 = *(_DWORD **)(a1 + 14956);
    v12 = FIELD_U32(a1, 14960);
    v13 = &dword_60C98644;
    if ( !FIELD_U32(a1, 26980) )
      v13 = &dword_60C98664;
LABEL_6:
    sub_60421938(v10, v12, (int)(v13 + 4));
    v14 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v15 )
      v14 += 4 * v15;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 1);
    v16 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v11 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v17 )
      v16 += 4 * v17;
    *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
    v11[12073] = 2;
  }
LABEL_21:
  if ( FIELD_U32(a1, 26996) )
    FIELD_U32(a1, 26996) = 0;
  v24 = FIELD_U8(a1, 27030);
  if ( FIELD_U8(a1, 27030) )
  {
    v25 = 0;
    if ( (v24 & 1) != 0 )
    {
      FIELD_U16(a1, 14988) = 0;
      v25 = 1;
    }
    if ( v24 != 1 )
    {
      v26 = a1 + 14964;
      do
      {
        v27 = 0;
        if ( v25 < 0x20 )
          v27 = v25;
        *(_WORD *)(v26 + 28 * v27 + 24) = 0;
        v28 = v25 + 1;
        v25 += 2;
        if ( v28 >= 0x20 )
          v28 = 0;
        *(_WORD *)(v26 + 28 * v28 + 24) = 0;
      }
      while ( v25 != v24 );
    }
  }
  FIELD_U16(a1, 15884) = 0;
  return 1;
}
