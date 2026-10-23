/* sub_60369330
 * address: 0x60369330   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60369330(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r7
  StateBase *v5; // r0
  int v6; // r6
  int v7; // r0
  bool v8; // zf
  float v9; // s6
  float v10; // s2
  float v11; // s0
  int v12; // r0
  int v13; // r1

  v2 = 0;
  if ( Enemy__beforeExecute((CollisionActor *)a1) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v2 = 1;
    if ( v4 != (*(int (**)(void))(dword_60C95D98 + 8))() )
    {
      v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      v7 = (*(int (**)(void))(dword_60C95CF8 + 8))();
      v8 = v6 == v7;
      if ( v6 != v7 )
        v8 = (FIELD_U8(a1, 21) & 1) == 0;
      if ( !v8 )
      {
        v9 = FIELD_F32(a1, 120);
        v10 = FIELD_F32(dword_60CC6484, 120);
        v11 = FIELD_F32(dword_60CC6484, 112) + -48.0;
        if ( v9 < 0.0 )
        {
          v12 = FIELD_U32(a1, 112);
          v13 = FIELD_U32(a1, 116);
          v11 = v10 + 48.0;
LABEL_11:
          FIELD_F32(a1, 108) = v11;
          FIELD_F32(a1, 584) = v11;
          FIELD_U32(a1, 588) = v12;
          FIELD_U32(a1, 592) = v13;
          FIELD_F32(a1, 608) = v11;
          FIELD_U32(a1, 612) = v12;
          FIELD_U32(a1, 616) = v13;
          return v2;
        }
        if ( v9 > 0.0 && FIELD_F32(a1, 108) > (float)(v10 + 48.0) )
        {
          v12 = FIELD_U32(a1, 112);
          v13 = FIELD_U32(a1, 116);
          goto LABEL_11;
        }
      }
    }
  }
  return v2;
}
