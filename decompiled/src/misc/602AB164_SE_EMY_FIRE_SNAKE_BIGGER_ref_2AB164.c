/* SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB164
 * address: 0x602AB164   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB164(int a1)
{
  float v2; // s0
  float v3; // r1
  int v4; // r6
  int v5; // r5
  int v6; // r5
  float v7; // s0
  int v8; // r0
  int v9; // r0
  int result; // r0
  _DWORD v11[2]; // [sp+4h] [bp-34h] BYREF
  char v12; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 144);
  if ( v2 >= 3.0 )
  {
    FIELD_U32(a1, 144) = 1077936128;
    FIELD_U32(a1, 148) = 1077936128;
    FIELD_U32(a1, 7272) = 1069547520;
    FIELD_U32(a1, 7276) = 1069547520;
  }
  else
  {
    FIELD_F32(a1, 144) = v2 + FIELD_F32(a1, 7248);
    FIELD_F32(a1, 148) = FIELD_F32(a1, 7252) + FIELD_F32(a1, 148);
    FIELD_F32(a1, 7272) = FIELD_F32(a1, 7260) + FIELD_F32(a1, 7272);
    FIELD_F32(a1, 7276) = FIELD_F32(a1, 7264) + FIELD_F32(a1, 7276);
  }
  v11[0] = 15;
  v11[1] = unk_60C263BC;
  v12 = 1;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 8);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v5, "SE_EMY_FIRE_SNAKE_BIGGER", v4, &out, v11);
  v6 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v7);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v8 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v6 + 4 * ((v8 + 18) >> 5) + 2224) & (1 << ((v8 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v6 + 4 * ((v8 + 22) >> 5) + 2224) & (1 << ((v8 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v6 + 4 * ((v8 + 28) >> 5) + 2224) & (1 << ((v8 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v6 + 8 * v8 + 5280) != 0x1F )
    {
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      FIELD_U32(a1, 80) = v8 ^ 1;
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  v9 = FIELD_U32(a1, 2872);
  if ( (v9 & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90AF0);
  }
  else
  {
    result = v9 & 0x10400;
    if ( result == 1024 )
    {
      result = 0;
      FIELD_U32(a1, 124) = 0;
    }
  }
  return result;
}
