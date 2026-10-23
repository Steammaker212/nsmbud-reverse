/* SE_OBJ_ICICLE_BREAK_ref_AF528
 * address: 0x600AF528   size: 1628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_ICICLE_BREAK_ref_AF528(int a1, int a2)
{
  int v2; // r8
  char v3; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r7
  int v7; // r4
  char v8; // r12
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  char v12; // r12
  int v13; // r11
  int v14; // r0
  bool v15; // zf
  StateBase *CurrentState; // r0
  int v17; // r5
  char v18; // r12
  char v19; // r12
  int v20; // r5
  StateBase *v21; // r0
  int v22; // r5
  int v23; // r0
  StateBase *v24; // r0
  int v25; // r10
  StateBase *v26; // r0
  int v27; // r0
  bool v28; // zf
  float v29; // r1
  int v30; // r5
  Vec3 v31; // [sp+0h] [bp-40h] BYREF
  Vec2 out; // [sp+Ch] [bp-34h] BYREF
  Vec3 position; // [sp+14h] [bp-2Ch] BYREF

  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C82EAC & ~(1611330892 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
  {
    dword_60C82EA8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82EAC);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C82EA8);
    if ( v7 )
      v7 = (int)v6;
    v9 = v7 == 0;
    if ( v7 )
    {
      v2 = FIELD_U32(a2, 64);
      v9 = v2 == 0;
    }
    if ( !v9 && !FIELD_U8(v7, 19) )
    {
      if ( FIELD_U8(v2, 533) == 1 )
      {
        v10 = FIELD_U32(a2, 136);
        v11 = v10 == 1;
        if ( v10 != 1 )
          v11 = v10 == 15;
        if ( !v11 )
        {
          if ( ((unsigned int)&dword_60C7B374 & ~(1611331076 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B370) == 1 )
          {
            if ( sub_6075EDF8(v2) == 1 )
            {
              (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 1164))(v2, a1, a2);
              FIELD_U32(v7, 6260) = v2;
            }
            else if ( (FIELD_U8(v2, 6900) & 1) != 0 )
            {
              (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 1164))(v2, a1, a2);
            }
          }
        }
        return;
      }
      if ( Actor__getProfileId((Actor *)v2) == 392 )
      {
        if ( ((unsigned int)&dword_60C7B39C & ~(1611331268 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B398) != 1 )
          return;
        v13 = 0;
        if ( FIELD_U8(v7, 7112) )
        {
          v14 = sub_602EE904(v2);
          v15 = v14 == 0;
          if ( !v14 )
            v15 = FIELD_U8(v2, 19) == 0;
          if ( v15 && FIELD_U32(v2, 328) == 9 )
          {
            v13 = 1;
            FIELD_U8(a1, 110) |= 2u;
          }
        }
        if ( FIELD_F32(v2, 112) <= FIELD_F32(v2, 588) )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
          v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v17 != (*(int (**)(void))(stru_60C92684 + 8))() )
          {
            sub_602EE7B8(v2, FIELD_U32(v2, 80), FIELD_S8(v2, 84));
            if ( !v13 )
              return;
            goto LABEL_74;
          }
        }
LABEL_73:
        if ( !v13 )
          return;
LABEL_74:
        sub_600AE93C(v7, v2);
        v29 = FIELD_F32(v7, 112);
        v31.x = FIELD_F32(v7, 108);
        v31.y = v29;
        v31.z = 4500.0;
        EffectData_create(1055, &v31, 0, 0);
        v30 = Global_BasicSoundActor2;
        position.x = v31.x;
        position.y = v31.y;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v30, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
        FIELD_U8(v7, 19) = 1;
        return;
      }
      if ( FIELD_U8(v2, 533) != 3 )
        return;
      if ( ((unsigned int)dword_60C7B430 & ~(1611331536 << v12) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &Enemy_RTTI) != 1 || Actor__getProfileId((Actor *)v2) == 711 )
        return;
      if ( (FIELD_U8(v2, 6148) & 1) != 0 )
      {
        if ( ((unsigned int)&dword_60C830F8 & ~(1611331964 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
        {
          dword_60C830F4 = (int)&off_60BC321C;
          _cxa_guard_release(&dword_60C830F8);
        }
        v13 = 0;
        if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C830F4) != 1 )
          goto LABEL_65;
        v24 = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
        v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
        if ( v25 != (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
        {
          v26 = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
          v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
          v23 = (*((int (**)(void))stru_60C8EA70._.vtable + 2))();
          goto LABEL_59;
        }
      }
      else
      {
        if ( Actor__getProfileId((Actor *)v2) == 521 )
        {
          if ( ((unsigned int)&dword_60C803F0 & ~(1611331716 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
          {
            dword_60C803EC = (int)&off_60BC321C;
            _cxa_guard_release(&dword_60C803F0);
          }
          v20 = v2 + 6084;
          if ( !(**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C803EC) )
            v20 = 6084;
          v21 = StateMgr__getCurrentState((StateMgr *)v20);
          v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
          v23 = (*((int (**)(void))stru_60C8EA70._.vtable + 2))();
          v13 = 0;
LABEL_59:
          if ( v22 == v23 )
            return;
          goto LABEL_65;
        }
        if ( (FIELD_U8(a2, 153) & 2) == 0 )
        {
          v13 = 0;
          if ( Actor__getProfileId((Actor *)v2) == 368 )
            return;
          goto LABEL_65;
        }
      }
      v13 = 1;
      FIELD_U8(a1, 110) |= 2u;
LABEL_65:
      v27 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 80))(v2);
      v28 = v27 == 0;
      if ( v27 )
        v28 = (FIELD_U8(v27, 2224) & 1) == 0;
      if ( !v28 )
      {
        if ( !FIELD_U8(v2, 19) && !sub_602A588C(v2) && !FIELD_U8(v2, 6136) )
          SE_EMY_DOWN_ref_2A58B4(v2, v6);
        FIELD_U8(a2, 110) |= 2u;
      }
      goto LABEL_73;
    }
  }
}
