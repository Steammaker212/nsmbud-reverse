/* SE_EMY_BIG_KALON_REVIVAL_HEAD_ref_2
 * address: 0x60318D24   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BIG_KALON_REVIVAL_HEAD_ref_2(unsigned __int8 *a1)
{
  unsigned int v2; // r1
  unsigned int *v3; // r7
  int v4; // r5
  char v5; // r12
  int v6; // r0
  bool v7; // zf
  float v8; // s16
  float v9; // s18
  float v10; // s0
  float v11; // s0
  float *v12; // r0
  float v13; // r1
  float v14; // r2
  int result; // r0
  _BYTE *v16; // r4
  int v17; // t1
  float v18; // s16
  float v19; // s18
  float v20; // s20
  float v21; // s22
  float v22; // s0
  float v23; // s0
  float v24; // s2
  float v25; // s0
  int v26; // r5
  int v27; // r6
  float v28; // r1
  int v29; // r1
  unsigned int v30; // r2
  int v31; // r1
  Vec3 position; // [sp+8h] [bp-50h] BYREF
  Vec2 out; // [sp+18h] [bp-40h] BYREF

  v3 = (unsigned int *)(a1 + 6408);
  v2 = *((_DWORD *)a1 + 1602);
  if ( !v2 )
    goto LABEL_9;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( ((unsigned int)&dword_60C93528 & ~(1613860212 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
  {
    dword_60C93524 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C93528);
  }
  if ( !v4 )
    goto LABEL_9;
  v6 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C93524);
  v7 = v6 == 1;
  if ( v6 == 1 )
    v7 = FIELD_U8(v4, 536) == 0;
  if ( v7 )
  {
    v18 = FIELD_F32(v4, 6356);
    v19 = FIELD_F32(v4, 6352);
    v20 = v18 - *((float *)a1 + 28);
    v21 = v19 - *((float *)a1 + 27);
    v22 = sqrtf((float)((float)(v20 * v20) + (float)(v21 * v21)) + 0.0);
    if ( v22 > 0.0 )
    {
      v23 = 1.0 / v22;
      v20 = v20 * v23;
      v21 = v21 * v23;
    }
    v24 = (float)(v21 + v21) + *((float *)a1 + 27);
    *((float *)a1 + 27) = v24;
    v25 = (float)(v20 + v20) + *((float *)a1 + 28);
    *((float *)a1 + 28) = v25;
    if ( fabsf(v19 - v24) < 4.0 && fabsf(v18 - v25) < 4.0 )
      (*(void (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C935E0);
    v26 = *((_DWORD *)a1 + 2);
    v27 = Global_BasicSoundActor1;
    v28 = *((float *)a1 + 28);
    if ( *((_DWORD *)a1 + 1597) == 1 )
    {
      position.x = *((float *)a1 + 27);
      position.y = v28;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v27, "SE_EMY_BIG_KALON_REVIVAL_HEAD", v26, &out, 0);
    }
    else
    {
      position.x = *((float *)a1 + 27);
      position.y = v28;
      mapPositionToScreen(&out, &position);
      j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v27, "SE_EMY_KALON_REVIVAL_HEAD", v26, &out, 0);
    }
    v29 = *((_DWORD *)a1 + 39);
    v12 = (float *)(a1 + 108);
    if ( v29 )
    {
      v30 = v29 + 201326592;
      v31 = v29 + 0x8000000;
      if ( v30 < 0x8000000 )
        v31 = 0;
      *((_DWORD *)a1 + 39) = v31;
    }
  }
  else
  {
LABEL_9:
    v8 = *((float *)a1 + 1582) - *((float *)a1 + 28);
    v9 = *((float *)a1 + 1581) - *((float *)a1 + 27);
    v10 = sqrtf((float)((float)(v8 * v8) + (float)(v9 * v9)) + 0.0);
    if ( v10 > 0.0 )
    {
      v11 = 1.0 / v10;
      v8 = v8 * v11;
      v9 = v9 * v11;
    }
    *((float *)a1 + 27) = *((float *)a1 + 27) + (float)(v9 + v9);
    *((float *)a1 + 28) = (float)(v8 + v8) + *((float *)a1 + 28);
    (*(void (__fastcall **)(unsigned __int8 *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C93600);
    v12 = (float *)(a1 + 108);
  }
  v13 = *v12;
  v14 = v12[1];
  position.z = v12[2];
  position.x = v13;
  position.y = v14 + 2.0;
  ((void (__fastcall *)(Vec2 *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(&out, 0, &position, a1[86]);
  result = LODWORD(out.x) - 3;
  if ( (unsigned int)(LODWORD(out.x) - 3) >= 2 )
  {
    v17 = a1[6428];
    v16 = a1 + 6428;
    result = v17;
    if ( v17 )
    {
      *v16 = 0;
      result = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
      if ( result )
        FIELD_U8(result, 7670) = 0;
    }
  }
  return result;
}
