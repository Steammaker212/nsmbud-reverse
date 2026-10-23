/* CoinBase__vf17C
 * address: 0x6057B3DC   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CoinBase__vf17C(int a1)
{
  int result; // r0
  float v3; // s0
  int v4; // r1
  int *v5; // r7
  int v6; // r0
  float v7; // r1
  int v8; // r5
  signed int v9; // r0
  int v10; // r0
  float v11; // s2
  __int16 v12; // r0
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  if ( sub_605D01D4() == 1 )
    return MovementBlockCoinBase__vf150(a1);
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( sub_60003460(a1) == 1 )
  {
    FIELD_U32(a1, 124) = 0;
    v5 = (int *)(a1 + 7380);
    v4 = FIELD_U32(a1, 7380);
    if ( v4 > 2 )
    {
      if ( v4 == 3 )
      {
        *v5 = 4;
        FIELD_U32(a1, 120) = 0;
      }
      else
      {
        v9 = sub_6014C4A4(a1 + 648);
        switch ( sub_6014C57C(a1 + 648, v9) )
        {
          case 0:
            break;
          case 1:
            v10 = 3;
            goto LABEL_17;
          case 2:
            v10 = 2;
            goto LABEL_17;
          case 3:
            v10 = 1;
            goto LABEL_17;
          case 4:
            v10 = 0;
            goto LABEL_17;
          default:
            v10 = 4;
LABEL_17:
            FIELD_U32(a1, 104) = 1031798784;
            FIELD_U32(a1, 132) = dword_60B047F4[v10];
            if ( sub_6014C540(a1 + 648) )
              FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
            break;
        }
      }
    }
    else
    {
      v6 = v4 + 1;
      *v5 = v4 + 1;
      if ( !v4 )
      {
        v7 = FIELD_F32(a1, 112);
        v8 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v7;
        mapPositionToScreen(&v13, &position);
        BasicSoundActor2_play(v8, "SE_OBJ_COIN_BOUND", &v13.x, 0);
        v6 = *v5;
      }
      FIELD_U32(a1, 124) = dword_60AF2994[v6];
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.5;
      if ( FIELD_U32(a1, 7388) == 2 )
        FIELD_U32(a1, 3192) &= ~0x40000000u;
    }
  }
  if ( sub_6000346C(a1) == 1 )
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  if ( sub_60003AE0((StageActor *)a1) == 1 )
  {
    v11 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v11 + 8.0;
    position.z = 4500.0;
    EffectData_create(1233, &position, 0, a1 + 144);
    FIELD_U8(a1, 19) = 1;
  }
  if ( !FIELD_U16(a1, 7332) )
    goto LABEL_28;
  result = FIELD_U16(a1, 7332) - 1;
  FIELD_U16(a1, 7332) = result;
  if ( (unsigned __int16)result > 0xB3u )
    return result;
  if ( (_WORD)result )
  {
    result = a1 + 7334;
    if ( FIELD_U16(a1, 7334) )
    {
      *(_WORD *)result = FIELD_U16(a1, 7334) - 1;
    }
    else
    {
      *(_WORD *)result = 4;
      v12 = FIELD_U16(a1, 7336) ^ 1;
      FIELD_U16(a1, 7336) = v12;
      result = v12 == 0;
      FIELD_U8(a1, 535) = result;
    }
  }
  else
  {
LABEL_28:
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
