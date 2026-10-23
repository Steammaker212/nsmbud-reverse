/* Pokey__collisionThrowableObject
 * address: 0x60382B8C   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A68EC
// 
// Overridden by: None
int __fastcall Pokey__collisionThrowableObject(int a1, int a2, int a3)
{
  float v5; // r1
  StageActor *v6; // r5
  unsigned int v7; // r2
  float v8; // r1
  int v9; // r7
  int v10; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r0
  int *v14; // r1
  int v15; // r2
  unsigned int v16; // r2
  float v17; // s0
  float x; // s2
  char playerId; // r0
  float v21[3]; // [sp+4h] [bp-4Ch] BYREF
  Vec3 position; // [sp+10h] [bp-40h] BYREF
  int v23; // [sp+1Ch] [bp-34h]
  void *v24; // [sp+20h] [bp-30h]
  char v25; // [sp+24h] [bp-2Ch]
  _BOOL4 v26; // [sp+28h] [bp-28h]
  char v27; // [sp+2Ch] [bp-24h]
  Vec2 out; // [sp+30h] [bp-20h] BYREF

  v5 = FIELD_F32(a3, 88);
  v6 = *(StageActor **)(a3 + 64);
  v21[0] = FIELD_F32(a3, 84);
  v21[1] = v5;
  v21[2] = 4500.0;
  sub_602A38A4(a1, v21);
  if ( (unsigned __int8)FIELD_U8(v6, 0x54) >= 4u )
  {
    v8 = FIELD_F32(a1, 112);
    v9 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v8;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v9, "SE_EMY_DOWN", (int)&out, 0);
  }
  else
  {
    SE_EMY_KAME_HIT_ref((int)v6, FIELD_U32(v6, 0x234), FIELD_U32(a1, 6292) == 2);
    sub_60000A18(v6);
    v7 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(v6, 0x234));
    if ( v7 != -1 )
      sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v7, FIELD_U8(v6, 0x54));
  }
  v10 = FIELD_U32(a1, 6300);
  if ( v10 )
  {
    v11 = 0;
    v12 = FIELD_U32(a1, 6304);
    if ( (v10 & 1) != 0 )
    {
      *(_BYTE *)(*(_DWORD *)v12 + 242) |= 2u;
      v11 = 1;
    }
    if ( v10 != 1 )
    {
      v13 = v10 - v11;
      v14 = (int *)(v12 + 4 * v11 + 4);
      do
      {
        v13 -= 2;
        *(_BYTE *)(*(v14 - 1) + 242) |= 2u;
        v15 = *v14;
        v14 += 2;
        FIELD_U8(v15, 242) |= 2u;
      }
      while ( v13 );
    }
  }
  v16 = FIELD_U32(a2, 104);
  if ( v16 )
  {
    sub_60381BAC((unsigned int *)a1, (int)v6, v16);
  }
  else
  {
    v17 = FIELD_F32(a1, 108);
    x = FIELD_U32(v6, 0x6C).x;
    playerId = FIELD_U8(v6, 0x54);
    v23 = 0;
    memset(&position, 0, sizeof(position));
    v24 = &unk_60C96A1C;
    v25 = -1;
    v26 = x >= v17;
    v27 = playerId;
    sub_602A852C(a1 + 6104, &position);
  }
  return 1;
}
