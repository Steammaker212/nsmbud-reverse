/* IceActor_setScale_helper
 * address: 0x602EE480   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall IceActor_setScale_helper(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // s0
  StateBase *v6; // r0
  int v7; // r5
  float result; // s0
  int v9; // r0
  float v10; // r1
  int v11; // r2
  float v12; // [sp+0h] [bp-18h] BYREF
  float v13; // [sp+4h] [bp-14h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))stru_60C925A4.vtable + 2))() )
  {
    if ( ((int (__fastcall *)(int, float *))loc_602EF61C)(a1, &v13) == 1 )
    {
      v5 = v13;
LABEL_7:
      FIELD_F32(a1, 112) = v5 + 1.0;
    }
  }
  else
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 != (*((int (**)(void))stru_60C92584.vtable + 2))() )
      return result;
    if ( ((int (__fastcall *)(int, float *))loc_602EF61C)(a1, &v12) == 1 )
    {
      v5 = v12;
      goto LABEL_7;
    }
  }
  v9 = FIELD_U32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  v11 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 108) = v9;
  FIELD_U32(a1, 584) = v9;
  FIELD_F32(a1, 588) = v10 + 8.0;
  FIELD_U32(a1, 592) = v11;
  FIELD_U32(a1, 608) = v9;
  FIELD_F32(a1, 612) = v10 + 8.0;
  FIELD_U32(a1, 616) = v11;
  FIELD_F32(a1, 112) = v10;
  return v10 + 8.0;
}
