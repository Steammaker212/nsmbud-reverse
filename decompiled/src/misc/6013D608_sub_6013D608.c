/* sub_6013D608
 * address: 0x6013D608   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013D608(int a1)
{
  StateMgr *v2; // r5
  int v3; // r1
  int v4; // r1
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r1
  int v8; // r0

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v3 = FIELD_U32(a1, 308);
  FIELD_U32(a1, 6544) = FIELD_U32(a1, 304);
  FIELD_U32(a1, 6548) = v3;
  v4 = FIELD_U32(a1, 316);
  FIELD_U32(a1, 6552) = FIELD_U32(a1, 312);
  FIELD_U32(a1, 6556) = v4;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  CurrentState = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C87C00 + 8))() )
  {
    v7 = FIELD_U32(a1, 6416);
    if ( v7 >= 1 )
    {
      FIELD_U32(a1, 6416) = v7 - 1;
      if ( v7 == 1 )
        FIELD_U8(a1, 6420) = 1;
    }
  }
  if ( FIELD_U8(a1, 6420) )
  {
    StageActor__cullCheck((StageActor *)a1, 8);
    if ( v8 == 1 )
      FIELD_U8(a1, 19) = 1;
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  }
  FIELD_U8(a1, 6422) = 0;
  return 1;
}
