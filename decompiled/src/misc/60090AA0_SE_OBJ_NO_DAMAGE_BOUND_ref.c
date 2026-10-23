/* SE_OBJ_NO_DAMAGE_BOUND_ref
 * address: 0x60090AA0   size: 1212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_NO_DAMAGE_BOUND_ref(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v5; // r5
  char v6; // r12
  bool v7; // zf
  unsigned int *v8; // r9
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r7
  StateBase *CurrentState; // r0
  int v14; // r7
  StateBase *v15; // r0
  int v16; // r7
  StateBase *v17; // r0
  int v18; // r6
  float v19; // s0
  unsigned int v20; // r6
  unsigned int v21; // r7
  int v22; // r10
  int v23; // r8
  char v24; // r12
  int v25; // r0
  int v26; // r0
  float v27; // s0
  int v28; // r0
  bool v29; // zf
  float v30; // r1
  int v31; // r5
  Vec2 v32; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  if ( ((unsigned int)&dword_60C81104 & ~(1611205312 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C81100);
    if ( v5 )
      v5 = (int)v3;
    v7 = v5 == 0;
    if ( v5 )
    {
      a2 = FIELD_U32(a2, 2196);
      v7 = a2 == 0;
    }
    if ( !v7 && FIELD_U8(a2, 533) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611205460 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) == 1 )
      {
        v8 = (unsigned int *)(v5 + 15240);
        if ( FIELD_U32(v5, 15240) >= 4u
          && ((v9 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
               v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
               v10 == (*(int (**)(void))(dword_60C82060 + 8))())
           || (v11 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
               v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
               v12 == (*(int (**)(void))(dword_60C82080 + 8))())) )
        {
          *v8 = FIELD_S8(a2, 84);
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C820A0);
        }
        else
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v14 == (*(int (**)(void))(dword_60C820E0 + 8))()
            || (v15 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
                v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15),
                v16 == (*(int (**)(void))(dword_60C82200 + 8))())
            || (v17 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
                v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
                v18 == (*(int (**)(void))(dword_60C820C0 + 8))()) )
          {
            v19 = FIELD_F32(v5, 108);
            v20 = *v8;
            v21 = 0;
            v22 = 0;
            if ( v19 >= (float)(FIELD_F32(dword_60CC6484, 112) + 80.0) )
            {
              v22 = 1;
              if ( v19 <= (float)(FIELD_F32(dword_60CC6484, 120) + -80.0) )
              {
                v23 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
                if ( ((unsigned int)&dword_60C81738 & ~(1611206004 << v24) & 1) == 0
                  && _cxa_guard_acquire(&dword_60C81738) )
                {
                  dword_60C81734 = (int)&off_60BC1FA8;
                  _cxa_guard_release(&dword_60C81738);
                }
                if ( v23 && (**(int (__fastcall ***)(int, int *))v23)(v23, &dword_60C81734) == 1 )
                {
                  if ( FIELD_F32(v23, 108) <= FIELD_F32(v5, 108) )
                    v22 = 0;
                }
                else
                {
                  v22 = 0;
                }
              }
            }
            SE_PLY_CRASH_KOOPA_ref(v5, v22);
            if ( v20 < 4 )
              v21 = v20;
            v25 = *(_DWORD *)(PlayerMgr_instance + 4 * v21 + 48);
            FIELD_U32(v5, 8420) = v25;
            FIELD_U32(v5, 9076) = v25;
            FIELD_U32(v5, 256) = v25;
            sub_6010005C(v5, v20);
            *v8 = FIELD_S8(a2, 84);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C820A0);
          }
          else
          {
            v26 = FIELD_S8(a2, 84);
            if ( *v8 != v26 )
            {
              if ( (unsigned __int8)v26 >= 4u )
                v26 = 0;
              if ( *(int *)(v5 + 4 * v26 + 9460) < 1 )
              {
                sub_602A3178(a2, &dword_60CC4B7C);
                v28 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 644))(a2);
                v29 = v28 == 0;
                if ( !v28 )
                  v29 = (FIELD_U8(a2, 1205) & 0x40) == 0;
                if ( v29 )
                {
                  v30 = FIELD_F32(a2, 112);
                  v31 = Global_BasicSoundActor1;
                  position.x = FIELD_F32(a2, 108);
                  position.y = v30;
                  mapPositionToScreen(&v32, &position);
                  BasicSoundActor1_playSound(v31, "SE_OBJ_NO_DAMAGE_BOUND", (int)&v32, 0);
                }
              }
              else
              {
                v27 = FIELD_F32(a2, 124);
                FIELD_F32(a2, 180) = FIELD_F32(a2, 120) + FIELD_F32(a2, 180);
                FIELD_F32(a2, 184) = v27 + FIELD_F32(a2, 184);
              }
            }
          }
        }
      }
    }
  }
}
