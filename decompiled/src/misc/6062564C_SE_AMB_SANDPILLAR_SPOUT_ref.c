/* SE_AMB_SANDPILLAR_SPOUT_ref
 * address: 0x6062564C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_AMB_SANDPILLAR_SPOUT_ref(int a1)
{
  float v2; // r0
  float v3; // s0
  float v4; // s2
  int v5; // r5
  float v6; // s4
  int v7; // r6
  float *v8; // r1
  StateMethodExecuter *result; // r0
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6
  Vec3 position; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  Animation_update(FIELD_U32(a1, 6136));
  if ( !FIELD_U8(a1, 6108) )
  {
    v2 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    position.z = 4500.0;
    if ( (FIELD_U8(a1, 21) & 0x10) != 0 && FIELD_U8(dword_60CC6D8C, 17) )
      position.y = v2 + -16.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 7404), 26, &position, 0, 0);
    v3 = FIELD_F32(a1, 108);
    if ( FIELD_F32(a1, 6112) <= v3 && FIELD_F32(a1, 6116) >= v3 )
    {
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_U32(a1, 8);
      v6 = FIELD_F32(a1, 6120);
      position.x = FIELD_F32(a1, 108);
      v7 = Global_BasicSoundActor2;
      position.y = v4 + v6;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v7, "SE_AMB_SANDPILLAR_SPOUT", v5, &out, 0);
    }
    EffectWrapper_update((EffectWrapper *)(a1 + 7300), 25, (Vec3 *)(a1 + 7288), 0, 0);
  }
  v8 = (float *)(a1 + 6456);
  result = (StateMethodExecuter *)(a1 + 6464);
  v10 = FIELD_F32(a1, 6464);
  v11 = FIELD_F32(a1, 6456);
  if ( v11 < v10 )
  {
    v11 = v11 + FIELD_F32(a1, 6460);
    *v8 = v11;
    if ( v11 <= v10 )
      goto LABEL_15;
LABEL_14:
    v11 = v10;
    *v8 = v10;
    goto LABEL_15;
  }
  if ( v11 > v10 )
  {
    v11 = v11 - FIELD_F32(a1, 6460);
    *v8 = v11;
    if ( v11 < v10 )
      goto LABEL_14;
  }
LABEL_15:
  v12 = v11 + FIELD_F32(a1, 148);
  FIELD_F32(a1, 148) = v12;
  v13 = FIELD_F32(a1, 6448);
  if ( v12 >= v13 )
  {
    FIELD_F32(a1, 148) = v13;
    if ( v11 > v10 )
      *v8 = v10;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB3BB4);
  }
  else if ( v12 >= (float)(v13 * 0.8) )
  {
    FIELD_U32(result, 0x0) = (void *)998982550;
  }
  return result;
}
