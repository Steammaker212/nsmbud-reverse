/* SE_OBJ_ICICLE_BREAK_ref_AE0B4
 * address: 0x600AE0B4   size: 1004   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_ICICLE_BREAK_ref_AE0B4(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  char v5; // r12
  int v6; // r0
  int v7; // r0
  int v8; // r7
  char v9; // r12
  int v10; // r0
  bool v11; // zf
  StateBase *CurrentState; // r0
  int v13; // r6
  char v14; // r12
  int v15; // r6
  StateBase *v16; // r0
  int v17; // r6
  float v18; // r1
  int v19; // r5
  Vec3 v20; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v3 = FIELD_U32(a1, 144);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2);
  if ( ((unsigned int)&dword_60C82EAC & ~(1611325680 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
  {
    dword_60C82EA8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82EAC);
  }
  if ( v3 )
  {
    v6 = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C82EA8);
    if ( v4 )
    {
      if ( v6 == 1 )
      {
        v7 = FIELD_U32(a2, 2532);
        v8 = 0;
        if ( (v7 & 0x10000) != 0 )
          v8 = FIELD_U16(a2, 2542) & 1;
        if ( (v7 & 0x8000) != 0 && (FIELD_U8(a2, 2541) & 0x80) != 0 )
          v8 = 1;
        if ( (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u
          && (FIELD_U8(a2, 2528) & 0x40) != 0
          && (FIELD_U8(a2, 2536) & 0x40) != 0 )
        {
          v8 = 1;
        }
        if ( Actor__getProfileId((Actor *)v4) == 392 )
        {
          if ( ((unsigned int)&dword_60C7B39C & ~(1611325924 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
          {
            dword_60C7B398 = (int)&off_60BC00E0;
            _cxa_guard_release(&dword_60C7B39C);
          }
          v10 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B398);
          v11 = v10 == 1;
          if ( v10 == 1 )
            v11 = FIELD_U8(v4, 19) == 0;
          if ( v11 && !sub_602EE904(v4) && FIELD_U8(v3, 7112) && FIELD_U32(v4, 328) == 9 )
          {
            if ( FIELD_F32(v4, 112) <= FIELD_F32(v4, 588) )
            {
              CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
              v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
              if ( v13 != (*(int (**)(void))(stru_60C92684 + 8))() )
                sub_602EE7B8(v4, FIELD_U32(v4, 80), FIELD_S8(v4, 84));
            }
LABEL_46:
            sub_600AE93C(v3, v4);
            v18 = FIELD_F32(v3, 112);
            v20.x = FIELD_F32(v3, 108);
            v20.y = v18;
            v20.z = 4500.0;
            EffectData_create(1055, &v20, 0, 0);
            v19 = Global_BasicSoundActor2;
            position.x = v20.x;
            position.y = v20.y;
            mapPositionToScreen(&out, &position);
            BasicSoundActor2_play(v19, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
            FIELD_U8(v3, 19) = 1;
            return;
          }
        }
        else if ( FIELD_U8(v4, 533) == 3 )
        {
          if ( ((unsigned int)dword_60C7B430 & ~(1611326192 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
          {
            Enemy_RTTI = (int)&off_60BC00C8;
            _cxa_guard_release(dword_60C7B430);
          }
          if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &Enemy_RTTI) == 1 )
          {
            if ( (FIELD_U8(v4, 6148) & 1) != 0 )
            {
              if ( ((unsigned int)&dword_60C830F8 & ~(1611326316 << v14) & 1) == 0
                && _cxa_guard_acquire(&dword_60C830F8) )
              {
                dword_60C830F4 = (int)&off_60BC321C;
                _cxa_guard_release(&dword_60C830F8);
              }
              v15 = v4 + 6084;
              if ( !(**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C830F4) )
                v15 = 6084;
              v16 = StateMgr__getCurrentState((StateMgr *)v15);
              v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
              if ( v17 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
                v8 = 1;
            }
            if ( (FIELD_U8(v4, 341) & 2) != 0 )
              v8 = 1;
          }
        }
        if ( !v8 )
          return;
        goto LABEL_46;
      }
    }
  }
}
