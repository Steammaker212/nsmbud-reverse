/* sub_60042034
 * address: 0x60042034   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60042034(int a1, int a2)
{
  int v4; // r4
  int v5; // r7
  int ProfileId; // r0
  char v7; // r12
  StateBase *CurrentState; // r0
  int v9; // r6
  int v10; // r0
  float v11; // s0
  StateBase *v12; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r5
  char v16; // r12
  int v17; // r5
  StateBase *v18; // r0
  int v19; // r5
  StateBase *v20; // r0
  int v21; // r6
  StateBase *v22; // r0
  int v23; // r6
  StateBase *v24; // r0
  int v25; // r5
  float v26; // s0
  float v27; // s2
  bool v28; // cc
  StateBase *v29; // r0
  int v30; // r6
  StateBase *v31; // r0
  int v32; // r4

  v4 = FIELD_U32(a2, 64);
  v5 = FIELD_U32(a1, 64);
  ProfileId = Actor__getProfileId((Actor *)v4);
  switch ( ProfileId )
  {
    case 521:
      if ( ((unsigned int)&dword_60C803F0 & ~(1610883188 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
      {
        dword_60C803EC = (int)&off_60BC321C;
        _cxa_guard_release(&dword_60C803F0);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C803EC) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v9 == (*((int (**)(void))BobOmb_StateID_Walk._.vtable + 2))() )
        {
          v10 = FIELD_U32(v4, 80);
          v11 = FIELD_F32(v5, 108) - FIELD_F32(v4, 108);
          if ( !v10 && v11 > 0.0 || v10 == 1 && v11 < 0.0 )
            (*(void (__fastcall **)(int, State *))(*(_DWORD *)v4 + 192))(v4, &BobOmb_StateID_Turn);
        }
        else
        {
          v18 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
          v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
          if ( v19 != (*(int (**)(void))(dword_60C80268 + 8))() )
          {
            v20 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
            v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20);
            if ( v21 != (*(int (**)(void))(dword_60C80288 + 8))() )
            {
              v22 = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
              v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
              if ( v23 != (*((int (**)(void))BobOmb_StateID_Turn._.vtable + 2))() )
              {
                v24 = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
                v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
                if ( v25 != (*((int (**)(void))BobOmb_StateID_BowserJrW7_2._.vtable + 2))() )
                {
                  v26 = FIELD_F32(v4, 120);
                  v27 = FIELD_F32(v5, 108) - FIELD_F32(v4, 108);
                  v28 = v26 <= 0.0;
                  if ( v26 >= 0.0 )
                    v28 = v27 <= 0.0;
                  if ( !v28 || v26 <= 0.0 && v27 < 0.0 )
                    FIELD_F32(v4, 120) = v26 * -0.5;
                }
              }
            }
          }
        }
      }
      break;
    case 476:
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 240))(v4);
      sub_601362A0(v4);
      break;
    case 474:
      SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v4);
      break;
    case 392:
      v12 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
      if ( v13 != (*(int (**)(void))(dword_60C80268 + 8))() )
      {
        v14 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
        if ( v15 != (*(int (**)(void))(dword_60C80288 + 8))() )
        {
          if ( ((unsigned int)&dword_60C7B39C & ~(1610883660 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
          {
            dword_60C7B398 = (int)&off_60BC00E0;
            _cxa_guard_release(&dword_60C7B39C);
          }
          if ( v4 )
          {
            v17 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B398);
            if ( v17 )
              v17 = v4;
          }
          else
          {
            v17 = 0;
          }
          v29 = StateMgr__getCurrentState((StateMgr *)(v17 + 6084));
          v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
          if ( v30 == (*(int (**)(void))(stru_60C92664 + 8))()
            || (v31 = StateMgr__getCurrentState((StateMgr *)(v17 + 6084)),
                v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v31, 0x0) + 2))(v31),
                v32 == (*(int (**)(void))(stru_60C92684 + 8))()) )
          {
            sub_602EE7B8(v17, FIELD_U32(v17, 80), -1);
            sub_602EE940(v17);
          }
        }
      }
      break;
    default:
      sub_600D18C8(a1, a2);
      break;
  }
}
