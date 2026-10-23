/* Player_changeState
 * address: 0x60773DC0   size: 168   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_changeState(int a1, StateBase *a2, int a3)
{
  int result; // r0

  result = FIELD_U8(a1, 1204);
  if ( (result & 0x10) == 0 )
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
    FIELD_U32(a1, 9936) = a3;
    StateMgr__changeState((StateMgr *)(a1 + 9916), a2);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
  }
  return result;
}
