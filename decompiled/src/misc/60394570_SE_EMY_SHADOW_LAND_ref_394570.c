/* SE_EMY_SHADOW_LAND_ref_394570
 * address: 0x60394570   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall SE_EMY_SHADOW_LAND_ref_394570(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int *result; // r0
  float v7; // r1
  int v8; // r5
  _BOOL4 v9; // r6
  float v10; // s4
  float v11; // s4
  int v12; // r0
  __int16 v13; // r1
  int *v14; // r0
  float v15; // s2
  float v16; // s0
  Vec2 v17; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  sub_6039AF5C(a1, 0, 0.0);
  if ( (FIELD_U8(a1, 6321) & 1) != 0 )
  {
    v9 = 1;
    v10 = FIELD_F32(a1, 6584) - FIELD_F32(a1, 108);
    if ( v10 <= 1.0 && v10 >= -1.0 )
    {
      v11 = FIELD_F32(a1, 6588) - FIELD_F32(a1, 112);
      v9 = v11 < -1.0 || v11 > 1.0;
    }
    v12 = sub_6078A50C(PlayerMgr_instance);
    v13 = 3;
    if ( v12 > 1 )
      v13 = 6;
    FIELD_U16(a1, 6348) = v13;
    FIELD_U16(a1, 6336) = 0;
    FIELD_U32(a1, 6352) = 6;
    FIELD_U16(a1, 6356) = 0;
    v14 = (int *)(a1 + 6444);
    if ( v9 )
      ((void (__fastcall *)(int *))loc_6037909C)(v14);
    else
      sub_603791A0(v14);
    StateMgr__changeState((StateMgr *)(a1 + 6496), (StateBase *)&dword_60C96590);
    v15 = *(float *)(sub_60378E30(a1 + 6444) + 16);
    v16 = FIELD_F32(a1, 108);
    FIELD_U32(a1, 80) = v15 < v16;
    if ( ((int (__fastcall *)(int, float))loc_6039E65C)(a1, v16) == 1 )
      result = &dword_60C971C0;
    else
      result = &dword_60C971A0;
    FIELD_U32(a1, 6392) = result;
  }
  else
  {
    v2 = *(_DWORD **)(a1 + 6304);
    v3 = (_DWORD *)v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += v5;
    result = (int *)sub_60418548(*v3 + 4);
    if ( result == (int *)1 )
    {
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v7;
      mapPositionToScreen(&v17, &position);
      return (int *)BasicSoundActor1_playSound(v8, "SE_EMY_SHADOW_LAND", (int)&v17, 0);
    }
  }
  return result;
}
