/* SE_EMY_FIRE_SNAKE_BIGGER_ref
 * address: 0x602AA820   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FIRE_SNAKE_BIGGER_ref(int a1)
{
  int v2; // r7
  float v3; // s0
  int v4; // r5
  int v5; // r0
  int v6; // r5
  float v7; // r1
  int v8; // r6
  int v9; // r5
  int v10; // r1
  unsigned int v11; // r0
  int result; // r0
  int *v13; // r1
  _DWORD v14[2]; // [sp+4h] [bp-34h] BYREF
  char v15; // [sp+Ch] [bp-2Ch]
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v2 = a1 + 6300;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  v5 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v4 + 4 * ((v5 + 18) >> 5) + 2224) & (1 << ((v5 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v4 + 4 * ((v5 + 22) >> 5) + 2224) & (1 << ((v5 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v4 + 4 * ((v5 + 28) >> 5) + 2224) & (1 << ((v5 + 28) & 0x1F))) == 0 )
  {
    if ( *(_WORD *)(v4 + 8 * v5 + 5280) != 0x1F )
    {
      FIELD_U32(a1, 120) = 0;
    }
    else
    {
      FIELD_U32(a1, 80) = v5 ^ 1;
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v6 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v6 == (*(int (**)(void))(dword_60C90AF0 + 8))() )
  {
    v14[0] = 15;
    v14[1] = unk_60C263BC;
    v15 = 1;
    v7 = FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 8);
    v9 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v9, "SE_EMY_FIRE_SNAKE_BIGGER", v8, &out, v14);
  }
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += 4 * v11;
  result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
  if ( (result & 0x10) != 0 )
  {
    if ( FIELD_S32(a1, 7288) < 1 )
    {
      FIELD_U32(a1, 7288) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31) + 3;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90AD0);
    }
    else
    {
      if ( FIELD_F32(a1, 144) <= *(float *)&dword_60C90BB0 )
        v13 = &dword_60C90A90;
      else
        v13 = &dword_60C90B10;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v13);
    }
  }
  return result;
}
