/* SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB780
 * address: 0x602AB780   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB780(int a1)
{
  int v2; // r5
  float v3; // s2
  int v4; // s0
  int v5; // r0
  float v6; // r1
  int v7; // r6
  int v8; // r5
  int v9; // r5
  float v10; // s0
  int v11; // r0
  int result; // r0
  float v13; // s0
  _DWORD v14[2]; // [sp+4h] [bp-34h] BYREF
  char v15; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 144);
  v4 = dword_60C90BB0;
  if ( v3 <= *(float *)&dword_60C90BB0 )
  {
    v5 = **(_DWORD **)(*(_DWORD *)v2 + 20);
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v5, 28) |= 2u;
    FIELD_U32(a1, 144) = v4;
    FIELD_U32(a1, 148) = dword_60C90BB4;
    FIELD_U32(a1, 152) = dword_60C90BB8;
    FIELD_U32(a1, 7272) = 1065353216;
    FIELD_U32(a1, 7276) = 1065353216;
    FIELD_U32(a1, 7280) = 1065353216;
  }
  else
  {
    FIELD_F32(a1, 144) = v3 - FIELD_F32(a1, 7248);
    FIELD_F32(a1, 148) = FIELD_F32(a1, 148) - FIELD_F32(a1, 7252);
    FIELD_F32(a1, 7272) = FIELD_F32(a1, 7272) - FIELD_F32(a1, 7260);
    FIELD_F32(a1, 7276) = FIELD_F32(a1, 7276) - FIELD_F32(a1, 7264);
  }
  v14[0] = 15;
  v14[1] = unk_60C263BC;
  v15 = 1;
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_U32(a1, 8);
  v8 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v6;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_EMY_FIRE_SNAKE_BIGGER", v7, &out, v14);
  v9 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v10);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v11 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v9 + 4 * ((v11 + 18) >> 5) + 2224) & (1 << ((v11 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v9 + 4 * ((v11 + 22) >> 5) + 2224) & (1 << ((v11 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v9 + 4 * ((v11 + 28) >> 5) + 2224) & (1 << ((v11 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v9 + 8 * v11 + 5280) != 0x1F )
    {
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      FIELD_U32(a1, 80) = v11 ^ 1;
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x10400) == 0x400 )
  {
    v13 = FIELD_F32(a1, 124);
    if ( v13 > 0.0 )
      FIELD_F32(a1, 124) = v13 * -0.2;
  }
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90AB0);
  }
  return result;
}
