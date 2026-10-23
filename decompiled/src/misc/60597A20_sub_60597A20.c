/* sub_60597A20
 * address: 0x60597A20   size: 1764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60597A20(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  char v5; // r12
  int v6; // r5
  int v7; // r5
  int v8; // r5
  int v9; // r5
  StateBase *v10; // r0
  int v11; // r5
  char v12; // r12
  int v13; // r5
  int v14; // r5
  int v15; // r5
  int v16; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CAF848 + 8))() )
  {
    if ( FIELD_S32(a1, 8168) >= 2 )
    {
      if ( FIELD_U32(a1, 6116) == 2 )
      {
        v6 = FIELD_U32(PlayerMgr_instance, 48);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616476840 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) == 1 && !FIELD_U8(v6, 12013) )
        {
          FIELD_U32(a1, 6116) = 3;
          FIELD_U8(a1, 6112) = 1;
        }
      }
      if ( FIELD_U32(a1, 6124) == 2 )
      {
        v7 = FIELD_U32(PlayerMgr_instance, 52);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616477028 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B370) == 1 && !FIELD_U8(v7, 12013) )
        {
          FIELD_U32(a1, 6124) = 3;
          FIELD_U8(a1, 6120) = 1;
        }
      }
      if ( FIELD_U32(a1, 6132) == 2 )
      {
        v8 = FIELD_U32(PlayerMgr_instance, 56);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616477216 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B370) == 1 && !FIELD_U8(v8, 12013) )
        {
          FIELD_U32(a1, 6132) = 3;
          FIELD_U8(a1, 6128) = 1;
        }
      }
      if ( FIELD_U32(a1, 6140) == 2 )
      {
        v9 = FIELD_U32(PlayerMgr_instance, 60);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616477404 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B370) == 1 && !FIELD_U8(v9, 12013) )
        {
          FIELD_U32(a1, 6140) = 3;
          FIELD_U8(a1, 6136) = 1;
        }
      }
    }
LABEL_35:
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAF888);
    return sub_602A3EFC(a1 + 8260, 24, 0.015625);
  }
  v10 = StateMgr__getCurrentState(v2);
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 == (*(int (**)(void))(dword_60CAF868 + 8))() )
  {
    if ( FIELD_S32(a1, 8168) >= 2 )
    {
      if ( FIELD_U32(a1, 6116) == 2 )
      {
        v13 = FIELD_U32(PlayerMgr_instance, 48);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616477688 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B370) == 1 && !FIELD_U8(v13, 12013) )
        {
          FIELD_U32(a1, 6116) = 3;
          FIELD_U8(a1, 6112) = 1;
        }
      }
      if ( FIELD_U32(a1, 6124) == 2 )
      {
        v14 = FIELD_U32(PlayerMgr_instance, 52);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616477876 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C7B370) == 1 && !FIELD_U8(v14, 12013) )
        {
          FIELD_U32(a1, 6124) = 3;
          FIELD_U8(a1, 6120) = 1;
        }
      }
      if ( FIELD_U32(a1, 6132) == 2 )
      {
        v15 = FIELD_U32(PlayerMgr_instance, 56);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616478064 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v15 && (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C7B370) == 1 && !FIELD_U8(v15, 12013) )
        {
          FIELD_U32(a1, 6132) = 3;
          FIELD_U8(a1, 6128) = 1;
        }
      }
      if ( FIELD_U32(a1, 6140) == 2 )
      {
        v16 = FIELD_U32(PlayerMgr_instance, 60);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616478252 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v16 && (**(int (__fastcall ***)(int, int *))v16)(v16, &dword_60C7B370) == 1 && !FIELD_U8(v16, 12013) )
        {
          FIELD_U32(a1, 6140) = 3;
          FIELD_U8(a1, 6136) = 1;
        }
      }
    }
    if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 20) < 50.0 )
      goto LABEL_35;
  }
  return sub_602A3EFC(a1 + 8260, 24, 0.015625);
}
