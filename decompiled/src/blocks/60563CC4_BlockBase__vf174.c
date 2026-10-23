/* BlockBase__vf174
 * address: 0x60563CC4   size: 380   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockBase__vf174(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v5; // r0
  bool v6; // zf
  float v7; // s0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CB117C + 8))() )
  {
    FIELD_U32(a1, 6884) = 0;
    FIELD_U32(a1, 6888) = 0;
    return 6888;
  }
  v5 = FIELD_U32(a1, 7300);
  v6 = v5 == 0;
  if ( v5 )
    v6 = FIELD_U32(a1, 7304) == 0;
  if ( v6 )
    goto LABEL_10;
  MovementHandler__execute((MovementHandler *)(a1 + 6992));
  if ( FIELD_U32(a1, 7040) != 1 )
    goto LABEL_10;
  if ( FIELD_U32(a1, 7060) != 1 )
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6992);
    v7 = FIELD_F32(a1, 6996);
    if ( !FIELD_U8(a1, 7377) )
      v7 = v7 + FIELD_F32(a1, 6796);
    FIELD_F32(a1, 112) = v7;
    FIELD_U32(a1, 164) = FIELD_U32(a1, 7072);
    goto LABEL_13;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 400))(a1) == 1 )
  {
    v7 = FIELD_F32(a1, 112);
  }
  else
  {
LABEL_10:
    v7 = FIELD_F32(a1, 6984);
    if ( !FIELD_U8(a1, 7377) )
      v7 = v7 + FIELD_F32(a1, 6796);
    FIELD_F32(a1, 112) = v7;
  }
LABEL_13:
  FIELD_F32(a1, 6884) = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  FIELD_F32(a1, 6888) = v7 - FIELD_F32(a1, 588);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 396))(a1);
}
