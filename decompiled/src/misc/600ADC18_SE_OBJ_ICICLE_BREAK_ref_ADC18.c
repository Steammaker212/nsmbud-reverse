/* SE_OBJ_ICICLE_BREAK_ref_ADC18
 * address: 0x600ADC18   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_ICICLE_BREAK_ref_ADC18(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r5
  char v7; // r12
  int v8; // r0
  int v9; // r0
  int v10; // r9
  char v11; // r12
  int v12; // r0
  bool v13; // zf
  StateBase *CurrentState; // r0
  int v15; // r7
  StateBase *v16; // r0
  int v17; // r7
  char v18; // r12
  int v19; // r6
  StateBase *v20; // r0
  int v21; // r6
  float v22; // r1
  int v23; // r5
  Vec3 v24; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v5 = FIELD_U32(a1, 144);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2);
  if ( ((unsigned int)&dword_60C82EAC & ~(1611324500 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
  {
    dword_60C82EA8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82EAC);
  }
  if ( v5 )
  {
    v8 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C82EA8);
    if ( v6 )
    {
      if ( v8 == 1 )
      {
        v9 = FIELD_U32(a2, 2532);
        v10 = 0;
        if ( (v9 & 0x10000) != 0 )
          v10 = FIELD_U16(a2, 2542) & 1;
        if ( (v9 & 0x8000) != 0 && (FIELD_U8(a2, 2541) & 0x80) != 0 )
          v10 = 1;
        if ( (unsigned __int8)(FIELD_U8(v6, 533) - 1) <= 1u
          && (FIELD_U8(a2, 2528) & 0x40) != 0
          && (FIELD_U8(a2, 2536) & 0x40) != 0 )
        {
          v10 = 1;
        }
        if ( Actor__getProfileId((Actor *)v6) == 392 )
        {
          if ( ((unsigned int)&dword_60C7B39C & ~(1611324744 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
          {
            dword_60C7B398 = (int)&off_60BC00E0;
            _cxa_guard_release(&dword_60C7B39C);
          }
          v12 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B398);
          v13 = v12 == 1;
          if ( v12 == 1 )
            v13 = FIELD_U8(v6, 19) == 0;
          if ( v13 && !sub_602EE904(v6) )
          {
            CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
            v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
            if ( v15 == (*(int (**)(void))(stru_60C92684 + 8))() && FIELD_U8(v5, 7112) && FIELD_U32(v6, 328) == 9 )
            {
              if ( FIELD_F32(v6, 112) <= FIELD_F32(v6, 588) )
              {
                v16 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
                v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
                if ( v17 != (*(int (**)(void))(stru_60C92684 + 8))() )
                  sub_602EE7B8(v6, a3 ^ 1, FIELD_S8(v6, 84));
              }
LABEL_47:
              sub_600AE93C(v5, v6);
              v22 = FIELD_F32(v5, 112);
              v24.x = FIELD_F32(v5, 108);
              v24.y = v22;
              v24.z = 4500.0;
              EffectData_create(1055, &v24, 0, 0);
              v23 = Global_BasicSoundActor2;
              position.x = v24.x;
              position.y = v24.y;
              mapPositionToScreen(&out, &position);
              BasicSoundActor2_play(v23, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
              FIELD_U8(v5, 19) = 1;
              return;
            }
          }
        }
        else if ( FIELD_U8(v6, 533) == 3 )
        {
          if ( ((unsigned int)dword_60C7B430 & ~(1611325068 << v11) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
          {
            Enemy_RTTI = (int)&off_60BC00C8;
            _cxa_guard_release(dword_60C7B430);
          }
          if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &Enemy_RTTI) == 1 )
          {
            if ( (FIELD_U8(v6, 6148) & 1) != 0 )
            {
              if ( ((unsigned int)&dword_60C830F8 & ~(1611325192 << v18) & 1) == 0
                && _cxa_guard_acquire(&dword_60C830F8) )
              {
                dword_60C830F4 = (int)&off_60BC321C;
                _cxa_guard_release(&dword_60C830F8);
              }
              v19 = v6 + 6084;
              if ( !(**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C830F4) )
                v19 = 6084;
              v20 = StateMgr__getCurrentState((StateMgr *)v19);
              v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20);
              if ( v21 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
                v10 = 1;
            }
            if ( (FIELD_U8(v6, 341) & 2) != 0 )
              v10 = 1;
          }
        }
        if ( !v10 )
          return;
        goto LABEL_47;
      }
    }
  }
}
