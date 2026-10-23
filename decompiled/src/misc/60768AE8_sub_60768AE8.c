/* sub_60768AE8
 * address: 0x60768AE8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768AE8(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  bool v8; // zf

  result = FIELD_U8(a1, 1234);
  if ( (result & 2) == 0 )
    return result;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9680));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))stru_60CBF37C.vtable + 2))();
  if ( v4 != result )
    return result;
  v5 = FIELD_U32(a1, 1232);
  if ( (v5 & 0x40000) != 0 )
  {
    if ( (v5 & 0x400000) != 0 )
      FIELD_F32(a1, 88) = FIELD_F32(a1, 88) * 0.98;
    v6 = FIELD_U32(a1, 6900);
    if ( (v6 & 1) == 0 )
      goto LABEL_11;
    v7 = (FIELD_U8(a1, 1209) & 1) == 0;
    if ( (FIELD_U8(a1, 1209) & 1) == 0 )
      v7 = (FIELD_U8(a1, 1219) & 1) == 0;
    if ( v7 )
    {
      if ( (v5 & 0x800000) != 0 && (FIELD_U8(a1, 6905) & 2) != 0 )
        goto LABEL_17;
    }
    else
    {
LABEL_11:
      if ( (v6 & 0x40000) == 0 || (FIELD_U8(a1, 1215) & 4) == 0 )
        goto LABEL_17;
    }
    FIELD_U32(a1, 88) = 0;
  }
  sub_60766314(a1, (StateBase *)&unk_60CBF64C, 0);
LABEL_17:
  result = FIELD_U8(a1, 1234);
  v8 = (result & 8) == 0;
  if ( (result & 8) != 0 )
  {
    result = FIELD_U8(a1, 1213);
    v8 = (result & 4) == 0;
  }
  if ( !v8 )
  {
    FIELD_U32(a1, 88) = 0;
    return Player_changeState(a1, &stru_60CBF81C, 0);
  }
  return result;
}
