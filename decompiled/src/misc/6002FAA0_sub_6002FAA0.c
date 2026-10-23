/* sub_6002FAA0
 * address: 0x6002FAA0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6002FAA0(unsigned __int8 *a1)
{
  _BYTE *v2; // r5
  StateMgr *v3; // r4
  _DWORD *v4; // r8
  _DWORD *v5; // r1
  int v6; // r0
  bool v7; // zf
  StateBase *CurrentState; // r0
  int v9; // r0
  bool v10; // zf
  StateBase *v11; // r0
  int v12; // r0
  bool v13; // zf
  StateBase *v14; // r0
  signed int result; // r0
  bool v16; // zf
  StateBase *v17; // r0

  a1[7436] = 0;
  v2 = a1 + 7436;
  v3 = (StateMgr *)(a1 + 6084);
  v4 = a1 + 7408;
  v5 = (_DWORD *)PlayerMgr_instance;
  v6 = FIELD_U32(PlayerMgr_instance, 32);
  v7 = v6 == 0;
  if ( v6 )
    v7 = (FIELD_U8(v6, 3552) & 1) == 0;
  if ( !v7 && FIELD_U8(v6, 532) == a1[532] )
  {
    Player_stun(v6, 1);
    CurrentState = StateMgr__getCurrentState(v3);
    (*((void (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    (*(void (**)(void))(dword_60C7FBA0 + 8))();
    *v4 = 40;
    *v2 = 1;
    v5 = (_DWORD *)PlayerMgr_instance;
  }
  a1[7437] = 0;
  v9 = v5[9];
  v10 = v9 == 0;
  if ( v9 )
    v10 = (FIELD_U8(v9, 3552) & 1) == 0;
  if ( !v10 && FIELD_U8(v9, 532) == a1[532] )
  {
    Player_stun(v9, 1);
    v11 = StateMgr__getCurrentState(v3);
    (*((void (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    (*(void (**)(void))(dword_60C7FBA0 + 8))();
    *v4 = 40;
    a1[7437] = 1;
    v5 = (_DWORD *)PlayerMgr_instance;
  }
  a1[7438] = 0;
  v12 = v5[10];
  v13 = v12 == 0;
  if ( v12 )
    v13 = (FIELD_U8(v12, 3552) & 1) == 0;
  if ( !v13 && FIELD_U8(v12, 532) == a1[532] )
  {
    Player_stun(v12, 1);
    v14 = StateMgr__getCurrentState(v3);
    (*((void (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
    (*(void (**)(void))(dword_60C7FBA0 + 8))();
    *v4 = 40;
    a1[7438] = 1;
    v5 = (_DWORD *)PlayerMgr_instance;
  }
  a1[7439] = 0;
  result = v5[11];
  v16 = result == 0;
  if ( result )
    v16 = (FIELD_U8(result, 3552) & 1) == 0;
  if ( !v16 && FIELD_U8(result, 532) == a1[532] )
  {
    Player_stun(result, 1);
    v17 = StateMgr__getCurrentState(v3);
    (*((void (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
    (*(void (**)(void))(dword_60C7FBA0 + 8))();
    *v4 = 40;
    a1[7439] = 1;
    return 40;
  }
  return result;
}
