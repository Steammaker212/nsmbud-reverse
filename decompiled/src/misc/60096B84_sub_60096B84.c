/* sub_60096B84
 * address: 0x60096B84   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60096B84(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r4
  Actor *v6; // r8
  int v7; // r7
  char v8; // r12
  bool v9; // zf
  int v10; // r5
  char v11; // r12
  StateBase *CurrentState; // r0
  int v13; // r6
  StateBase *v14; // r0
  int v15; // r4
  char v16; // r12
  int v17; // r0
  char v18; // r12

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  v6 = *(Actor **)(a2 + 64);
  if ( ((unsigned int)&dword_60C81F10 & ~(1611230120 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81F10) )
  {
    dword_60C81F0C = (int)&off_60BC763C;
    _cxa_guard_release(&dword_60C81F10);
  }
  if ( v5 )
  {
    v7 = (**v5)(v5, &dword_60C81F0C);
    if ( v7 )
      v7 = (int)v5;
    v9 = v6 == 0;
    if ( v6 )
      v9 = v7 == 0;
    if ( !v9 )
    {
      if ( (unsigned int)BYTE1(v6[6].field_34) - 1 <= 1 )
      {
        FIELD_U8(a1, 110) |= 2u;
        if ( ((unsigned int)&dword_60C7B374 & ~(1611230280 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C7B370) == 1 )
        {
          (*(void (__fastcall **)(Actor *, int, int))(FIELD_U32(v6, 0x0) + 1164))(v6, a1, a2);
          v10 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, FIELD_U32(ActorMgr__instance, 27172));
          if ( ((unsigned int)&dword_60C81104 & ~(1611230452 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
          {
            dword_60C81100 = (int)&off_60BC66E8;
            _cxa_guard_release(&dword_60C81104);
          }
          if ( v10 )
          {
            if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C81100) == 1 )
            {
              FIELD_U32(v10, 9436) = SLOBYTE(FIELD_U32(v6 + (1) * 80, 0x4));
              FIELD_U32(v10, 9440) = 60;
            }
          }
        }
        return;
      }
      if ( Actor__getProfileId(v6) == 373 )
      {
        if ( v6[190].childCount >= 4u )
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)&v6[76].heap);
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v13 != (*(int (**)(void))(dword_60C82220 + 8))() )
          {
            v14 = StateMgr__getCurrentState((StateMgr *)&v6[76].heap);
            v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
            if ( v15 != (*(int (**)(void))(dword_60C82080 + 8))() )
              return;
          }
        }
LABEL_27:
        FIELD_U8(a1, 110) |= 2u;
        SE_BOSS_CMN_MAGIC_EXTINCT_ref_2(v7);
        return;
      }
      if ( Actor__getProfileId(v6) == 374 )
        goto LABEL_27;
      v17 = FIELD_U32(a2, 140);
      if ( v17 == 2 )
      {
        FIELD_U8(a1, 110) |= 2u;
        SE_BOSS_CMN_MAGIC_EXTINCT_ref_2(v7);
        if ( ((unsigned int)&dword_60C823CC & ~(1611230984 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
        {
          dword_60C823C8 = (int)&off_60BC7C30;
          _cxa_guard_release(&dword_60C823CC);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C823C8) == 1 )
          SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v6);
      }
      else if ( v17 == 1 )
      {
        if ( ((unsigned int)&dword_60C823BC & ~(1611230828 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
        {
          dword_60C823B8 = (int)&off_60BC7C24;
          _cxa_guard_release(&dword_60C823BC);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C823B8) == 1 )
        {
          (*(void (__fastcall **)(Actor *))(FIELD_U32(v6, 0x0) + 240))(v6);
          sub_601362A0(v6);
        }
      }
      else if ( Actor__getProfileId(v6) == 392 )
      {
        SE_BOSS_CMN_MAGIC_EXTINCT_ref_2(v7);
        sub_602EE7B8(v6, FIELD_U32(v6 + (1) * 80, 0x0), -1);
      }
    }
  }
}
