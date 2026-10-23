/* SE_OBJ_CMN_SPLASH_ref_2E8FC0
 * address: 0x602E8FC0   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_2E8FC0(int a1)
{
  float v2; // s0
  int v3; // r9
  float v4; // s16
  float *v5; // r10
  int v6; // r5
  float v7; // s0
  float v8; // s0
  float v9; // s4
  float v10; // s2
  float v11; // s8
  float v12; // s12
  float v13; // s10
  float v14; // s6
  int result; // r0
  int v16; // r1
  int v17; // r6
  float v18; // s2
  float v19; // r1
  int v20; // r6
  StateMgr *v21; // r0
  int *v22; // r1
  int v23; // [sp+4h] [bp-54h] BYREF
  int target; // [sp+8h] [bp-50h] BYREF
  _DWORD v25[2]; // [sp+Ch] [bp-4Ch] BYREF
  float v26; // [sp+14h] [bp-44h]
  Vec2 out; // [sp+1Ch] [bp-3Ch] BYREF
  Vec3 position; // [sp+24h] [bp-34h] BYREF

  LODWORD(position.x) = 0x100000;
  target = 0;
  moveValueTo((int *)(a1 + 164), &target, (int *)&position);
  if ( FIELD_U8(a1, 7526) )
  {
    FIELD_U32(a1, 124) = 0x40000000;
    v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  }
  else
  {
    FIELD_U32(a1, 124) = 0;
  }
  v26 = FIELD_F32(a1, 7516);
  v25[1] = FIELD_U32(a1, 7512);
  v25[0] = FIELD_U32(a1, 7508);
  target = FIELD_U32(a1, 7504);
  v3 = FIELD_U32(a1, 7520);
  v4 = FIELD_F32(a1, 7432);
  v5 = (float *)(a1 + 7432);
  ((void (__fastcall *)(int *, int, int, int, float, _DWORD))physics_21893E8)(
    &v23,
    a1 + 7432,
    a1 + 7504,
    a1 + 108,
    v2,
    FIELD_U8(a1, 86));
  v6 = v23;
  FIELD_U32(a1, 7520) = v23;
  if ( sub_6040E4C8(LevelInfo_instance) == 1 )
  {
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_F32(a1, 7400);
    v10 = FIELD_F32(a1, 108) + (float)(v9 * -0.5);
    v11 = FIELD_F32(AreaTask_intance, 1820) + -16.0;
    v12 = FIELD_F32(AreaTask_intance, 1812) + 16.0;
    v13 = FIELD_F32(AreaTask_intance, 1816);
    v14 = FIELD_F32(AreaTask_intance, 1824);
    if ( v8 > v14 )
      goto LABEL_15;
    if ( v13 > v8 || v12 > v10 || v10 > v11 )
      goto LABEL_15;
    if ( v13 > v8 )
      goto LABEL_15;
    if ( v12 > (float)(v9 + v10) )
      goto LABEL_15;
    v7 = v8 + FIELD_F32(a1, 7404);
    if ( v7 > v14 || v12 > v10 || v10 > v11 || v13 > v7 )
      goto LABEL_15;
  }
  if ( FIELD_U8(a1, 7526) )
    goto LABEL_14;
  if ( v6 )
  {
    v7 = *v5 + (float)(FIELD_F32(a1, 7404) * -0.5);
    if ( v3 )
    {
      v18 = *v5 - v4;
      if ( v18 < 0.0 )
      {
        ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 112, v7, 0.1, 1.0, 0.05);
        v7 = *v5 + (float)(FIELD_F32(a1, 7404) * -0.3);
        if ( FIELD_F32(a1, 112) > v7 )
          FIELD_F32(a1, 112) = v7;
        goto LABEL_14;
      }
      if ( v18 <= 0.0 )
      {
        if ( !FIELD_U8(a1, 7535) )
          v7 = sub_602F46EC(a1 + 7448, v7);
        FIELD_F32(a1, 112) = v7;
LABEL_14:
        CollisionMgr_process((_BYTE *)(a1 + 648), v7);
        result = FIELD_U32(a1, 2872) & 0x10400;
        if ( result != 1024 )
          return result;
        goto LABEL_15;
      }
    }
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 112, v7, 0.1, 1.0, 0.05);
    goto LABEL_14;
  }
  CollisionMgr_process((_BYTE *)(a1 + 648), v7);
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
  {
LABEL_15:
    result = FIELD_U8(a1, 7525);
    if ( !FIELD_U8(a1, 7525) )
    {
      v16 = -1;
      v17 = FIELD_U32(a1, 7368);
      if ( !FIELD_U8(a1, 7529) )
        v16 = FIELD_S8(v17, 75);
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 56) + 68))(FIELD_U32(a1, 56), v16);
      FIELD_U8(v17, 74) = 3;
      result = 1;
      FIELD_U8(a1, 7525) = 1;
    }
    return result;
  }
  if ( (_BYTE)target )
  {
    v19 = FIELD_F32(a1, 112);
    v20 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v19;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v20, "SE_OBJ_CMN_SPLASH", &out.x, 0);
    position.x = 0.0;
    position.y = 0.0;
    position.z = v26;
    sub_602F32F8(a1 + 6784, v25, 12, &position);
  }
  if ( sub_60003460(a1) == 1 )
  {
    v21 = (StateMgr *)(a1 + 6084);
    v22 = &stru_60C925A4;
  }
  else
  {
    FIELD_U32(a1, 124) = 0;
    v21 = (StateMgr *)(a1 + 6084);
    v22 = &stru_60C92584;
  }
  return (int)StateMgr__changeState(v21, (StateBase *)v22);
}
