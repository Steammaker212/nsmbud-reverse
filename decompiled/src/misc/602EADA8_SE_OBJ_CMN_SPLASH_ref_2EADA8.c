/* SE_OBJ_CMN_SPLASH_ref_2EADA8
 * address: 0x602EADA8   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_CMN_SPLASH_ref_2EADA8(int a1)
{
  float *v2; // r5
  float v3; // s0
  StateMethodExecuter *result; // r0
  int v5; // r1
  float v6; // r2
  bool v7; // zf
  int v8; // r2
  unsigned int v9; // r1
  StateBase *v10; // r1
  StateMgr *v11; // r0
  float v12; // r1
  int v13; // r5
  StateMethodExecuter *v14; // [sp+4h] [bp-44h] BYREF
  int v15; // [sp+8h] [bp-40h]
  _DWORD v16[2]; // [sp+Ch] [bp-3Ch] BYREF
  float v17; // [sp+14h] [bp-34h]
  Vec2 out; // [sp+1Ch] [bp-2Ch] BYREF
  Vec3 position; // [sp+24h] [bp-24h] BYREF

  v2 = (float *)(a1 + 124);
  if ( FIELD_F32(a1, 124) < 0.0
    && ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 124, 0.0, 0.085, 0.5, 0.0) < 0.25 )
  {
    *v2 = 0.0;
  }
  StageActor__accelerateX((StageActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( sub_6000346C(a1) == 1 )
    return (StateMethodExecuter *)sub_602EE7D8(a1, FIELD_U32(a1, 80) ^ 1, FIELD_S8(a1, 84), 0);
  v15 = FIELD_U32(a1, 7504);
  v5 = FIELD_U32(a1, 7512);
  v6 = FIELD_F32(a1, 7516);
  v16[0] = FIELD_U32(a1, 7508);
  v16[1] = v5;
  v17 = v6;
  ((void (__fastcall *)(StateMethodExecuter **, int, int, int, _DWORD))physics_21893E8)(
    &v14,
    a1 + 7432,
    a1 + 7504,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = v14;
  v7 = v14 == 0;
  FIELD_U32(a1, 7520) = v14;
  if ( v7 )
  {
    if ( (_BYTE)v15 )
    {
      v12 = FIELD_F32(a1, 112);
      v13 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v12;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v13, "SE_OBJ_CMN_SPLASH", &out.x, 0);
      position.x = 0.0;
      position.y = 0.0;
      position.z = v17;
      sub_602F32F8(a1 + 6784, v16, 12, &position);
    }
    v11 = (StateMgr *)(a1 + 6084);
    v10 = (StateBase *)&dword_60C92644;
    return StateMgr__changeState(v11, v10);
  }
  if ( *v2 >= 0.0 && fabsf(FIELD_F32(a1, 120)) < FIELD_F32(a1, 104) )
  {
    FIELD_U32(a1, 3192) &= 0x3BFFFDFFu;
    FIELD_U32(a1, 3196) &= 0xFFFFFFFC;
    FIELD_U32(a1, 3200) &= 0xFBFFFDFF;
    FIELD_U32(a1, 3204) &= 0xFFFFFFFC;
    v8 = FIELD_U32(a1, 3184);
    FIELD_U32(a1, 3176) &= 0xFBFFFDFF;
    FIELD_U32(a1, 3184) = v8 & 0xFBFFFDFF;
    v9 = FIELD_U32(a1, 3188) & 0xFFFFFFFC;
    FIELD_U32(a1, 3180) &= 0xFFFFFFFC;
    FIELD_U32(a1, 3188) = v9;
    if ( FIELD_U8(a1, 6780) )
      FIELD_U32(a1, 6240) &= ~0x1000u;
    FIELD_U8(a1, 7532) = 0;
    if ( !FIELD_U8(a1, 7531) )
      FIELD_U32(a1, 328) = 0;
    FIELD_U8(a1, 84) = -1;
    FIELD_U32(a1, 120) = 0;
    v10 = *(StateBase **)(a1 + 7500);
    v11 = (StateMgr *)(a1 + 6084);
    return StateMgr__changeState(v11, v10);
  }
  return result;
}
