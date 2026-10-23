/* SE_EMY_KALON_REVIVAL_HEAD_ref
 * address: 0x602DE85C   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_EMY_KALON_REVIVAL_HEAD_ref(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r6
  char v3; // r12
  float result; // s0
  int v5; // r5
  float v6; // r1
  int v7; // r6
  int v8; // r7
  float *v9; // r6
  float *v10; // r7
  float v11; // s16
  float v12; // s18
  float v13; // s0
  float v14; // s2
  float v15; // s0
  float x; // s4
  float y; // s6
  float v18; // s4
  Vec3 position; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF

  position.x = -2.0016e15;
  out.x = 9.8608e-32;
  moveValueTo((int *)(a1 + 156), (int *)&position, (int *)&out);
  v2 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6104));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613621444 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 )
  {
    v5 = (**v2)(v2, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v2;
  }
  else
  {
    v5 = 0;
  }
  if ( ((unsigned int)&dword_60C91D50 & ~(1613621572 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C91D50) )
  {
    dword_60C91D4C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C91D50);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C91D4C) == 1 )
  {
    if ( !FIELD_U32(a1, 6152) )
    {
      v6 = FIELD_F32(a1, 112);
      v7 = FIELD_U32(a1, 8);
      v8 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v6;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_EMY_KALON_REVIVAL_HEAD", v7, &out, 0);
    }
    sub_602DBEC4(v5, (int)&position);
    v9 = (float *)(a1 + 6132);
    v10 = (float *)(a1 + 6136);
    v11 = 0.0 - FIELD_F32(a1, 6136);
    v12 = 0.0 - FIELD_F32(a1, 6132);
    v13 = sqrtf((float)(v11 * v11) + (float)(v12 * v12));
    if ( v13 <= 0.3 )
    {
      *v9 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
      FIELD_U32(a1, 6136) = 0;
    }
    else
    {
      v14 = *v9 + (float)((float)(v12 * (float)(1.0 / v13)) * 0.3);
      *v9 = v14;
      v15 = *v10 + (float)((float)(v11 * (float)(1.0 / v13)) * 0.3);
      *v10 = v15;
    }
    x = position.x;
    y = position.y;
    FIELD_F32(a1, 116) = position.z;
    result = y - v15;
    FIELD_F32(a1, 108) = x - v14;
    FIELD_F32(a1, 112) = result;
    if ( FIELD_F32(v5, 6332) < 0.0 )
    {
      v18 = FIELD_F32(a1, 144) * 0.8;
      FIELD_F32(a1, 144) = v18;
      result = result + (float)(v18 * 3.0);
      FIELD_F32(a1, 148) = FIELD_F32(a1, 148) * 0.8;
      FIELD_F32(a1, 152) = FIELD_F32(a1, 152) * 0.8;
      FIELD_F32(a1, 112) = result;
    }
  }
  return result;
}
