/* sub_60562DC8
 * address: 0x60562DC8   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60562DC8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  float v4; // s0
  int v5; // r0
  bool v6; // zf
  float v7; // s16
  float v8; // s18
  float *v9; // r5
  float v10; // s0
  float v12; // r0
  _DWORD *v13; // r2
  int v14; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CB117C + 8))() )
  {
    v4 = 0.0;
    FIELD_U32(a1, 6884) = 0;
  }
  else
  {
    v5 = FIELD_U32(a1, 7300);
    v6 = v5 == 0;
    if ( v5 )
      v6 = FIELD_U32(a1, 7304) == 0;
    if ( v6
      || (v7 = FIELD_F32(a1, 108),
          v8 = FIELD_F32(a1, 112),
          v9 = (float *)(a1 + 6992),
          MovementHandler__execute((MovementHandler *)(a1 + 6992)),
          FIELD_U32(a1, 7040) != 1)
      || FIELD_U32(a1, 7060) == 1 )
    {
      v10 = FIELD_F32(a1, 6984);
      if ( !FIELD_U8(a1, 7377) )
        v10 = v10 + FIELD_F32(a1, 6796);
      FIELD_F32(a1, 112) = v10;
    }
    else
    {
      v12 = *v9;
      FIELD_F32(a1, 108) = *v9;
      v10 = FIELD_F32(a1, 6996);
      if ( !FIELD_U8(a1, 7377) )
        v10 = v10 + FIELD_F32(a1, 6796);
      FIELD_F32(a1, 112) = v10;
      v13 = (_DWORD *)(a1 + 7120);
      if ( (FIELD_U32(a1, 20) & 0x2000000) == 0 )
        v13 = (_DWORD *)(a1 + 7072);
      FIELD_U32(a1, 164) = *v13;
      if ( FIELD_U8(a1, 7076)
        || (float)((float)((float)(v10 - v8) * (float)(v10 - v8)) + (float)((float)(v12 - v7) * (float)(v12 - v7))) > 65536.0 )
      {
        FIELD_F32(a1, 108) = v12;
        FIELD_F32(a1, 112) = v10;
        v14 = FIELD_U32(a1, 116);
        FIELD_F32(a1, 584) = v12;
        FIELD_F32(a1, 588) = v10;
        FIELD_U32(a1, 592) = v14;
        FIELD_F32(a1, 608) = v12;
        FIELD_F32(a1, 612) = v10;
        FIELD_U32(a1, 616) = v14;
        sub_60160948((_DWORD *)(a1 + 6120));
        v10 = FIELD_F32(a1, 112);
      }
    }
    FIELD_F32(a1, 6884) = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
    v4 = v10 - FIELD_F32(a1, 588);
  }
  FIELD_F32(a1, 6888) = v4;
  return a1 + 6888;
}
