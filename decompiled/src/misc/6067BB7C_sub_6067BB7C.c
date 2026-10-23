/* sub_6067BB7C
 * address: 0x6067BB7C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6067BB7C(int a1)
{
  int v2; // r5
  StateMgr *v3; // r0
  StateMethodExecuter *result; // r0
  _DWORD v5[2]; // [sp+4h] [bp-24h] BYREF
  _DWORD v6[2]; // [sp+Ch] [bp-1Ch] BYREF
  char v7; // [sp+14h] [bp-14h]

  v6[0] = FIELD_U16(a1, 10184);
  v6[1] = unk_60C26424;
  v7 = 0;
  v2 = a1 + 6100;
  SE_EMY_LIFT_LINE_MOVE_ref(a1 + 6100, v6);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6444);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6448);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6452);
  sub_6067F108(v2, v5);
  FIELD_U32(a1, 120) = v5[0];
  FIELD_U32(a1, 124) = v5[1];
  if ( sub_6067F45C(v2, AreaTask_intance + 1812, 0) == 1 )
  {
    v3 = (StateMgr *)(a1 + 6084);
    return StateMgr__changeState(v3, (StateBase *)&dword_60CB7F90);
  }
  result = (StateMethodExecuter *)sub_6067F45C(v2, dword_60CC6484 + 40, 0);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = (StateMethodExecuter *)sub_6067F184(v2);
    if ( result == (StateMethodExecuter *)1 )
    {
      v3 = (StateMgr *)(a1 + 6084);
      return StateMgr__changeState(v3, (StateBase *)&dword_60CB7F90);
    }
  }
  return result;
}
