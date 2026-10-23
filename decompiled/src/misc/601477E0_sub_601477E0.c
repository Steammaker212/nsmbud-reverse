/* sub_601477E0
 * address: 0x601477E0   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601477E0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int v5; // r0
  float v6; // s2
  bool v7; // r1
  float v8; // s0

  ((void (*)(void))loc_6014792C)();
  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C880E0 + 8))() )
  {
    v4 = FIELD_U32(a1, 6416);
    if ( v4 >= 1 )
    {
      FIELD_U32(a1, 6416) = v4 - 1;
      if ( v4 == 1 )
        FIELD_U8(a1, 6420) = 1;
    }
  }
  if ( FIELD_U8(a1, 6420) )
  {
    StageActor__cullCheck((StageActor *)a1, 2);
    if ( v5 == 1 )
      StageActor__delete((StateActor *)a1, 1);
  }
  else
  {
    v6 = FIELD_F32(a1, 112);
    v7 = 0;
    if ( v6 <= FIELD_F32(dword_60CC6484, 124) )
    {
      v8 = FIELD_F32(dword_60CC6484, 112);
      if ( v6 >= (float)(v8 + FIELD_F32(dword_60CC6484, 108)) )
        v7 = FIELD_F32(a1, 108) >= v8 && FIELD_F32(a1, 108) <= (float)(v8 + FIELD_F32(dword_60CC6484, 104));
    }
    FIELD_U8(a1, 6420) = v7;
  }
  FIELD_U8(a1, 6437) = 0;
  return 1;
}
