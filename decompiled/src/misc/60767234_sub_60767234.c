/* sub_60767234
 * address: 0x60767234   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60767234(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r7
  StateBase *CurrentState; // r0
  int v11; // r6
  int v12; // r0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1) != 1
    || (v9 = 0, (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 640))(a1, 4) == 1) )
  {
    v9 = 0;
    if ( (FIELD_U8(a1, 1219) & 8) == 0 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9680));
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v9 = 1;
      if ( v11 != (*(int (**)(void))(dword_60CBF604 + 8))() )
      {
        FIELD_U32(a1, 9732) = a4;
        v12 = FIELD_S8(a1, 84);
        if ( v12 >= 0 )
        {
          FIELD_U32(PlayerMgr_instance, 144) |= 1 << v12;
          FIELD_U8(dword_60C99DE4, 29) |= 1 << FIELD_U8(a1, 84);
          FIELD_U32(a1, 1204) |= 0x20u;
          FIELD_U32(a1, 1228) |= 0x400000u;
        }
        FIELD_U32(a1, 9704) = 0;
        FIELD_U32(a1, 9708) = 0;
        FIELD_U32(a1, 9696) = a2;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 1);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 3);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 4);
        StateMgr__changeState((StateMgr *)(a1 + 9680), (StateBase *)&dword_60CBF604);
        FIELD_U32(a1, 9712) = a3;
        if ( FIELD_U8(dword_60CC6D8C, 17) && a5 == 1 )
          FIELD_U32(a1, 1232) |= 0x2000000u;
        if ( FIELD_U32(a1, 9732) == 1 )
        {
          FIELD_U32(a1, 1204) &= ~0x20u;
          if ( (FIELD_U8(a1, 1216) & 0x10) == 0 )
            Player_changeState(a1, (StateBase *)&dword_60CBF864, 1);
        }
        v9 = 1;
        if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
        {
          v9 = 1;
          Player_changeState(a1, (StateBase *)&dword_60CBF864, 1);
        }
      }
    }
  }
  return v9;
}
