/* SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB4E8
 * address: 0x602AB4E8   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FIRE_SNAKE_BIGGER_ref_2AB4E8(int a1)
{
  float v2; // r1
  int v3; // r6
  int v4; // r5
  int v5; // r5
  float v6; // s0
  int v7; // r0
  int result; // r0
  _DWORD v9[2]; // [sp+4h] [bp-34h] BYREF
  char v10; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v9[0] = 15;
  v9[1] = unk_60C263BC;
  v10 = 1;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v4, "SE_EMY_FIRE_SNAKE_BIGGER", v3, &out, v9);
  v5 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v7 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v5 + 4 * ((v7 + 18) >> 5) + 2224) & (1 << ((v7 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v5 + 4 * ((v7 + 22) >> 5) + 2224) & (1 << ((v7 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v5 + 4 * ((v7 + 28) >> 5) + 2224) & (1 << ((v7 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v5 + 8 * v7 + 5280) != 0x1F )
    {
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      FIELD_U32(a1, 80) = v7 ^ 1;
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90A70);
  return result;
}
