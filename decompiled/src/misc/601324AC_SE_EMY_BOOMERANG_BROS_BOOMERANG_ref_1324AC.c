/* SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_1324AC
 * address: 0x601324AC   size: 892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_1324AC(int a1)
{
  float v2; // s0
  float v3; // s2
  bool v4; // zf
  int v5; // r0
  float v6; // r1
  int v7; // r5
  int v8; // r6
  int v9; // r0
  unsigned int *v10; // r5
  Actor *v11; // r0
  int v13; // r5
  char v14; // r12
  StateBase *CurrentState; // r0
  int v16; // r6
  float v17; // s0
  float v18; // s2
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  FIELD_U32(a1, 156) += FIELD_U32(a1, 6520);
  v2 = *(float *)&dword_60AF1EC0[FIELD_U32(a1, 80) == 0];
  v3 = flt_60AF1EF8[FIELD_U32(a1, 80) == 0] + FIELD_F32(a1, 120);
  FIELD_F32(a1, 120) = v3;
  if ( fabsf(v3) >= fabsf(v2) )
    FIELD_F32(a1, 120) = v2;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v4 = FIELD_U8(a1, 6592) == 0;
  if ( v4 )
  {
    if ( (nullsub_7(a1 + 6600), v5 = FIELD_U32(a1, 8824), (v5 & 0x10400) == 0x400)
      || (v5 & 0x440000) != 0 && (v5 & 0x10000000) == 0
      || (v5 & 1) != 0
      || !(((v5 & 0x880000) == 0) | ((v5 & 0x20000000u) >> 29)) )
    {
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87644);
    }
  }
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_U32(a1, 8);
  v8 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v6;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_EMY_BOOMERANG_BROS_BOOMERANG", v7, &out, 0);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    CollisionMgr_process((_BYTE *)(a1 + 648));
  v9 = FIELD_U32(a1, 6516) - 1;
  FIELD_U32(a1, 6516) = v9;
  if ( !v9 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C87604);
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
  {
    v10 = (unsigned int *)(a1 + 6580);
LABEL_22:
    v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v10);
    if ( ((unsigned int)&dword_60C87678 & ~(1611867884 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C87678) )
    {
      dword_60C87674 = (int)&off_60BD20E4;
      _cxa_guard_release(&dword_60C87678);
    }
    if ( v13 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C87674) == 1
        && !*(_DWORD *)(FIELD_U32(a1, 620) + 12)
        && !FIELD_U8(v13, 536) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v13 + 6084));
        v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v16 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        {
          v17 = FIELD_F32(v13, 108);
          if ( fabsf(v17 - FIELD_F32(a1, 108)) < 10.0 )
          {
            FIELD_F32(a1, 6524) = v17;
            v18 = FIELD_F32(v13, 112);
            FIELD_F32(a1, 6528) = v18;
            FIELD_U32(a1, 6532) = FIELD_U32(v13, 116);
            FIELD_F32(a1, 6528) = v18 + 14.0;
            StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C87624);
          }
        }
      }
    }
    return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  v10 = (unsigned int *)(a1 + 6580);
  v11 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6580));
  if ( !v11 || Actor__getProfileId(v11) != 442 )
    goto LABEL_22;
  return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
