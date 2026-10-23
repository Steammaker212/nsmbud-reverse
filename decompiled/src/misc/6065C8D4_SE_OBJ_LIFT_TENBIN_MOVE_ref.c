/* SE_OBJ_LIFT_TENBIN_MOVE_ref
 * address: 0x6065C8D4   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_OBJ_LIFT_TENBIN_MOVE_ref(int a1, int a2, int *a3, int a4, float a5)
{
  int *v5; // r6
  bool v6; // zf
  int *v7; // r3
  float v8; // s6
  float v9; // s2
  float v10; // s8
  float v11; // s4
  float v12; // s4
  float v13; // s16
  int v14; // r6
  float v15; // s2
  float v16; // s0
  float v18; // s0
  int v19; // r4
  float *v20; // r1
  float v21; // r0
  int v22; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  if ( FIELD_U32(a1, 6148) )
  {
    v5 = dword_6065CB7C;
    v6 = a4 == 0;
    v7 = dword_6065CB88;
    v8 = 0.02;
    if ( v6 )
    {
      v5 = &dword_6065CB7C[1];
      v7 = &dword_6065CB88[1];
    }
    v9 = *(float *)v7;
    v10 = *(float *)v5;
  }
  else
  {
    v10 = 0.078125;
    v8 = 0.020752;
    v9 = 3.5;
  }
  v11 = a5;
  switch ( a2 )
  {
    case 0:
      if ( a5 >= 0.0 )
      {
        v11 = a5 - v10;
        if ( (float)(a5 - v10) < 0.0 )
          v11 = 0.0;
      }
      else
      {
        v11 = v10 + a5;
        if ( (float)(v10 + a5) > 0.0 )
          v11 = 0.0;
      }
      goto LABEL_21;
    case 1:
      v11 = (float)(a5 + (float)((float)(FIELD_F32(a1, 6176) - FIELD_F32(a1, 6180)) * -0.15)) - v8;
      goto LABEL_21;
    case 2:
      v11 = v8 + (float)(a5 + (float)((float)(FIELD_F32(a1, 6180) - FIELD_F32(a1, 6176)) * 0.15));
      goto LABEL_21;
    case 3:
      v12 = FIELD_F32(a1, 6136);
      if ( v12 < 0.0 )
        goto LABEL_20;
      if ( v12 <= FIELD_F32(a1, 6124) )
      {
        v11 = v10 + a5;
        if ( (float)(v10 + a5) > 0.0 )
LABEL_20:
          v11 = 0.0;
      }
      else
      {
        v11 = a5 - v10;
        if ( (float)(a5 - v10) < 0.0 )
          v11 = 0.0;
      }
LABEL_21:
      v13 = -v9;
      if ( v11 >= (float)-v9 )
      {
        v13 = v11;
        if ( v11 > v9 )
          v13 = v9;
      }
      if ( a5 >= 0.0 || v13 <= 0.0 )
      {
        if ( a5 > 0.0 && v13 < 0.0 )
          v13 = 0.0;
      }
      else
      {
        v13 = 0.0;
      }
      v14 = 2;
      v15 = v13 + FIELD_F32(a1, 6136);
      FIELD_F32(a1, 6136) = v15;
      v16 = FIELD_F32(a1, 6132);
      if ( v15 > v16 )
        goto LABEL_33;
      if ( v15 < 0.0 )
      {
        v16 = 0.0;
        v14 = 1;
LABEL_33:
        v13 = 0.0;
        FIELD_F32(a1, 6136) = v16;
        *a3 = v14 & a2;
        return v13;
      }
      if ( v13 != 0.0 )
      {
        v18 = FIELD_F32(a1, 108);
        v19 = FIELD_U32(a1, 8);
        v20 = (float *)(a1 + 6128);
        v21 = FIELD_F32(a1, 112);
        v22 = Global_BasicSoundActor2;
        position.x = v18 + (float)(*v20 * 0.5);
        position.y = v21;
        mapPositionToScreen(&out, &position);
        SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v22, "SE_OBJ_LIFT_TENBIN_MOVE", v19, &out, 0);
      }
      return v13;
    default:
      goto LABEL_21;
  }
}
