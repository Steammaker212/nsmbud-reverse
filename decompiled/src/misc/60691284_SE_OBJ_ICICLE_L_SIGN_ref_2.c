/* SE_OBJ_ICICLE_L_SIGN_ref_2
 * address: 0x60691284   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_ICICLE_L_SIGN_ref_2(int a1)
{
  float v2; // r1
  int v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  float *v6; // r2
  float v7; // s0
  float v8; // s8
  StateMethodExecuter *result; // r0
  int v10; // r1
  void *v11; // r1
  Vec2 speed; // [sp+8h] [bp+0h] BYREF
  Vec3 position; // [sp+10h] [bp+8h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 8);
  v4 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&speed, &position);
  SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, "SE_OBJ_ICICLE_L_SIGN", v3, &speed, 0);
  position.x = 1.542e-17;
  speed.x = 8.3591e-37;
  moveValueTo((int *)(a1 + 6164), (int *)&position, (int *)&speed);
  v5 = FIELD_U32(a1, 6160) + FIELD_U32(a1, 6164);
  FIELD_U32(a1, 6160) = v5;
  v6 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v7 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v8 = v6[2] + (float)(v7 * v6[3]);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 6152) + (float)((float)(*v6 + (float)(v6[1] * v7)) * 0.5);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6156) + (float)(v8 * 0.5);
  result = (StateMethodExecuter *)(a1 + 6148);
  v10 = FIELD_U32(a1, 6148);
  if ( !v10 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9088);
  v11 = (void *)(v10 - 1);
  FIELD_U32(result, 0x0) = v11;
  if ( !v11 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9088);
  return result;
}
