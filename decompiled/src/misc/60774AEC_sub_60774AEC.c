/* sub_60774AEC
 * address: 0x60774AEC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774AEC(int a1, int a2)
{
  int v4; // r4
  char v5; // r0
  bool v6; // zf
  StateBase *CurrentState; // r0
  int v8; // r6

  v4 = 0;
  v5 = FIELD_U8(a1, 1217);
  v6 = (v5 & 0x10) == 0;
  if ( (v5 & 0x10) == 0 )
    v6 = (FIELD_U8(a1, 1230) & 0x20) == 0;
  if ( v6 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 != (*((int (**)(void))stru_60CBF960.vtable + 2))() && !sub_60766708(a1) )
    {
      v4 = 1;
      FIELD_U32(a1, 9976) = a2;
      if ( (FIELD_U8(a1, 1204) & 0x10) == 0 )
      {
        sub_6040A1D8(dword_60C9A1F0);
        FIELD_U8(a1, 1296) = 0;
        FIELD_U8(a1, 1314) = 0;
        FIELD_U32(a1, 9940) = 0;
        FIELD_U32(a1, 9944) = 0;
        FIELD_U32(a1, 9948) = 0;
        FIELD_U32(a1, 1228) &= 0xFFFFD3FF;
        FIELD_U32(a1, 1208) &= ~8u;
        FIELD_U32(a1, 1204) &= ~0x400u;
        FIELD_U32(a1, 9932) = 0;
        FIELD_U32(a1, 9936) = 0;
        StateMgr__changeState((StateMgr *)(a1 + 9916), &stru_60CBF960);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
      }
    }
  }
  return v4;
}
