/* Pokey__collisionFireball
 * address: 0x603832F4   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6AB8
// 
// Overridden by: None
int __fastcall Pokey__collisionFireball(int a1, int a2, int a3)
{
  unsigned int v4; // r6
  int v5; // r8
  unsigned int v6; // r3
  unsigned int *v7; // r10
  int v8; // r0
  int *v9; // r9
  int v10; // r0
  unsigned int v11; // r0
  float v12; // r1
  int v13; // r7
  unsigned int v14; // r0
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r0
  int *v18; // r1
  int v19; // r2
  float v20; // s0
  float v21; // s2
  char v22; // r0
  Vec3 v24; // [sp+0h] [bp-48h] BYREF
  _BOOL4 v25; // [sp+Ch] [bp-3Ch]
  int v26; // [sp+10h] [bp-38h]
  char v27; // [sp+14h] [bp-34h]
  char v28; // [sp+15h] [bp-33h]
  char v29; // [sp+16h] [bp-32h]
  _BOOL4 v30; // [sp+18h] [bp-30h]
  char v31; // [sp+1Ch] [bp-2Ch]
  Vec2 out; // [sp+20h] [bp-28h] BYREF

  v4 = FIELD_U32(a2, 104);
  v5 = FIELD_U32(a3, 64);
  v7 = (unsigned int *)(a1 + 6300);
  v6 = FIELD_U32(a1, 6300);
  v9 = (int *)(a1 + 6304);
  v8 = FIELD_U32(a1, 6304);
  if ( v6 >= v4 )
    v6 = FIELD_U32(a2, 104);
  v10 = *(_DWORD *)(v8 + 4 * v6);
  v24.x = FIELD_F32(v10, 72);
  v24.y = FIELD_F32(v10, 76);
  v24.z = FIELD_F32(a1, 116);
  v25 = FIELD_F32(v5, 120) < 0.0;
  v26 = 1;
  v27 = 0;
  v29 = 0;
  v28 = 0;
  sub_60583000(dword_60CAF15C, &v24, 3);
  v11 = *v7;
  if ( *v7 >= v4 )
    v11 = v4;
  sub_60022760(
    8.0,
    *(float *)(*(_DWORD *)(*v9 + 4 * v11) + 76) - FIELD_F32(a1, 112),
    dword_60C7F52C,
    a1,
    1u,
    FIELD_S8(v5, 84));
  v12 = FIELD_F32(a1, 112);
  v13 = Global_BasicSoundActor1;
  v24.x = FIELD_F32(a1, 108);
  v24.y = v12;
  mapPositionToScreen(&out, &v24);
  BasicSoundActor1_playSound(v13, "SE_EMY_DOWN", (int)&out, 0);
  if ( v4 )
  {
    sub_60381BAC((unsigned int *)a1, v5, v4);
  }
  else
  {
    v14 = *v7;
    if ( *v7 )
    {
      v15 = *v9;
      v16 = 0;
      if ( (v14 & 1) != 0 )
      {
        *(_BYTE *)(*(_DWORD *)v15 + 242) |= 2u;
        v16 = 1;
      }
      if ( v14 != 1 )
      {
        v17 = v14 - v16;
        v18 = (int *)(v15 + 4 * v16 + 4);
        do
        {
          v17 -= 2;
          *(_BYTE *)(*(v18 - 1) + 242) |= 2u;
          v19 = *v18;
          v18 += 2;
          FIELD_U8(v19, 242) |= 2u;
        }
        while ( v17 );
      }
    }
    v20 = FIELD_F32(a1, 108);
    v21 = FIELD_F32(v5, 108);
    v22 = FIELD_U8(v5, 84);
    v25 = 0;
    memset(&v24, 0, sizeof(v24));
    v26 = (int)&unk_60C96A1C;
    v27 = -1;
    v30 = v21 >= v20;
    v31 = v22;
    sub_602A852C(a1 + 6104, &v24);
  }
  return 1;
}
