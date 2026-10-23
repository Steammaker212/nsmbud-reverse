/* sub_604A4D48
 * address: 0x604A4D48   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604A4D48(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r4
  int v6; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 24));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = 1;
  if ( v3 == (*(int (**)(void))(dword_60CA1190 + 8))() )
    return v4;
  if ( FIELD_U8(a1, 4982) )
    return v4;
  if ( FIELD_U8(a1, 4979) )
    return v4;
  v4 = 0;
  if ( !dword_60C99E24 )
    return v4;
  v6 = sub_603FF0A8(dword_60C99E24, a1);
  if ( !v6 )
    return v4;
  if ( FIELD_U8(v6, 36554) )
    return 1;
  return FIELD_U8(v6, 36551) != 0;
}
