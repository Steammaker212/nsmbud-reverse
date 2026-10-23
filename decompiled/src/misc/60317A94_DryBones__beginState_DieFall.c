/* DryBones__beginState_DieFall
 * address: 0x60317A94   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall DryBones__beginState_DieFall(int a1)
{
  int v2; // r2
  int v3; // r5
  int v4; // r0
  int v5; // r6
  float v6; // r1
  float *v7; // r6
  float v8; // s2
  int v9; // r12
  _DWORD *v10; // r1
  int v11; // r7
  float v12; // r1
  int v13; // r5
  const char *v14; // r1
  int result; // r0
  float v16; // r1
  float *v17; // [sp+0h] [bp-40h]
  Vec2 out; // [sp+Ch] [bp-34h] BYREF
  Vec3 position; // [sp+14h] [bp-2Ch] BYREF

  Enemy__beginState_DieFall((Enemy *)a1);
  v2 = 0;
  v3 = 0;
  v4 = a1 + 6556;
  v17 = (float *)(a1 + 6368);
  do
  {
    if ( v3 )
    {
      v5 = v4 + v3;
      *(_DWORD *)(v5 - 144) = FIELD_U32(a1, 108);
      v6 = FIELD_F32(a1, 112);
      *(float *)(v5 - 140) = v6;
      *(_DWORD *)(v5 - 136) = FIELD_U32(a1, 116);
      v7 = (float *)(v4 + v3 - 140);
    }
    else
    {
      FIELD_U32(a1, 6412) = FIELD_U32(a1, 6364);
      v6 = *v17;
      FIELD_F32(a1, 6416) = *v17;
      FIELD_U32(a1, 6420) = FIELD_U32(a1, 116);
      v7 = (float *)(a1 + 6416);
    }
    v8 = v6;
    v9 = *(_DWORD *)((char *)&unk_60AFF4C4 + v2);
    v10 = (_DWORD *)(v4 + v3);
    v11 = *(_DWORD *)((char *)&unk_60AFF4DC + v2);
    v3 += 12;
    *v7 = v8 + 8.0;
    *(v10 - 18) = v9;
    if ( FIELD_U32(a1, 80) )
    {
      v9 ^= 0x80000000;
      *(v10 - 18) = v9;
    }
    *(_DWORD *)(v4 + v2) = v9;
    v2 += 4;
    *(v10 - 17) = v11;
    *(v10 - 16) = 0;
    v10[6] = 0;
    v10[7] = 0x40000000;
    v10[8] = 0;
  }
  while ( v3 != 72 );
  FIELD_U32(a1, 7608) = 1022739087;
  FIELD_U32(a1, 7612) = -1103101952;
  FIELD_U32(a1, 96) = -1065353216;
  if ( FIELD_U8(a1, 7670) )
    FIELD_U32(a1, 6488) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U64(a1, 120) = 0x4080000000000000LL;
  if ( FIELD_U16(a1, 7642) == 1 )
  {
    v12 = FIELD_F32(a1, 112);
    v13 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v12;
    mapPositionToScreen(&out, &position);
    v14 = "SE_EMY_BIG_KALON";
  }
  else
  {
    result = FIELD_U8(a1, 7659);
    if ( FIELD_U8(a1, 7659) )
      return result;
    v16 = FIELD_F32(a1, 112);
    v13 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v16;
    mapPositionToScreen(&out, &position);
    v14 = "SE_EMY_KALON";
  }
  return BasicSoundActor1_playSound(v13, v14, (int)&out, 0);
}
