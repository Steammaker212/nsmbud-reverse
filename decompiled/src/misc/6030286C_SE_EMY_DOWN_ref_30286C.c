/* SE_EMY_DOWN_ref_30286C
 * address: 0x6030286C   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_30286C(int a1)
{
  char v2; // r12
  float v3; // r0
  int v4; // r5
  _BOOL4 v5; // r7
  float v6; // s2
  float v7; // s0
  int result; // r0
  int v9; // r5
  StateBase *CurrentState; // r0
  int v11; // r5
  ActiveColliderMgr *v12; // r5
  float *v13; // r0
  float v14; // s0
  float v15; // s0
  ActiveColliderMgr *v16; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  sub_6030309C();
  if ( FIELD_U8(a1, 7034) )
  {
    v3 = FIELD_F32(a1, 6984);
    position.x = FIELD_F32(a1, 6980);
    position.y = v3;
    v4 = Global_BasicSoundActor1;
    mapPositionToScreen(&out, &position);
    sub_60813810(v4, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
    v5 = FIELD_F32(a1, 108) < FIELD_F32(a1, 6980);
    sub_602A6C70((float *)a1, v5);
    sub_602A6024(a1, v5, -1, -1);
  }
  v6 = FIELD_F32(a1, 6968);
  FIELD_F32(a1, 304) = v6 * 0.0;
  v7 = FIELD_F32(a1, 6972);
  FIELD_F32(a1, 308) = v7 * 13.0;
  FIELD_F32(a1, 312) = v6 * 8.0;
  FIELD_F32(a1, 316) = v7 * 9.0;
  result = FIELD_U8(a1, 7033);
  if ( !FIELD_U8(a1, 7033) )
  {
    if ( FIELD_U32(a1, 6992) == 1 )
    {
      v9 = FIELD_U32(a1, 56);
      if ( ((unsigned int)&dword_60C92F04 & ~(1613769108 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
      {
        dword_60C92F00 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C92F04);
      }
      if ( v9 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C92F00) == 1 )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v11 != (*(int (**)(void))(dword_60C92F88 + 8))() && !FIELD_U8(a1, 7009) )
          {
            FIELD_U8(a1, 7009) = 1;
            v12 = ActiveColliderMgr_instance;
            if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
              && !ActiveColliderMgr_isInCreateList(v12, (ActiveCollider *)(a1 + 188)) )
            {
              ActiveColliderMgr_addToCreateList(v12, (ActiveCollider *)(a1 + 188));
            }
          }
        }
      }
    }
    v13 = (float *)(a1 + 7004);
    v14 = FIELD_F32(a1, 7004);
    if ( v14 < 0.0 )
    {
      v15 = v14 + 1.0;
      *v13 = v15;
      if ( v15 >= 0.0 )
        *v13 = 0.0;
    }
    if ( FIELD_F32(a1, 6968) >= 1.24 && !FIELD_U8(a1, 7009) )
    {
      FIELD_U8(a1, 7009) = 1;
      v16 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 188));
      }
    }
    result = sub_6030413C(a1);
    if ( !result )
      return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6952) + 12));
  }
  return result;
}
