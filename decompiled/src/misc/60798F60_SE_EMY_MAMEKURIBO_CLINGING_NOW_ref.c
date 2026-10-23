/* SE_EMY_MAMEKURIBO_CLINGING_NOW_ref
 * address: 0x60798F60   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_MAMEKURIBO_CLINGING_NOW_ref(unsigned __int8 *a1)
{
  int v2; // r4
  int v3; // r0
  bool v4; // zf
  bool v5; // zf
  unsigned int v7; // r0
  int v8; // r1
  int v9; // r1
  StateBase *CurrentState; // r0
  int v11; // r6

  v2 = 0;
  if ( sub_60786A0C((int)(a1 + 688)) != 1 || sub_6078A50C() == 1 || !dword_60C995D0 || FIELD_U32(dword_60C995D0, 32) )
    return v2;
  v3 = sub_60766708((int)a1);
  v4 = v3 == 0;
  if ( !v3 )
    v4 = (a1[1239] & 0x40) == 0;
  if ( !v4 )
    return v2;
  v5 = (a1[1206] & 8) == 0;
  if ( (a1[1206] & 8) == 0 )
    v5 = (a1[1219] & 8) == 0;
  if ( !v5 )
    return v2;
  v7 = a1[84];
  v8 = 0;
  v2 = 0;
  if ( v7 < 6 )
    v8 = (char)v7;
  v9 = dword_60C99DD4 + 72 * v8;
  if ( FIELD_U8(v9, 292) )
  {
    if ( FIELD_S32(v9, 296) < 1 )
      return v2;
  }
  if ( (unsigned int)(FIELD_U32(dword_60C99D88, 32) - 1) < 2
    || sub_603FD530((unsigned int *)(dword_60C99DD4 + 764))
    || !sub_6078A700() )
  {
    return v2;
  }
  if ( sub_60760184((int)a1) )
  {
    sub_607734E8(a1, (int)"SE_EMY_MAMEKURIBO_CLINGING_NOW", 0, 0);
    return 0;
  }
  v2 = 1;
  sub_60766314((int)a1, &stru_60CBF37C, 1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v11 == (*(int (**)(void))(dword_60CC4EEC + 8))() )
    return v2;
  Player_changeState((int)a1, (StateBase *)&dword_60CC4EEC, 4);
  return 1;
}
