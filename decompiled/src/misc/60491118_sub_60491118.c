/* sub_60491118
 * address: 0x60491118   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60491118(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r5
  float v8; // s2
  float v9; // s0
  float v10; // s16
  float32x2_t v11; // d0
  float32x2_t v12; // d1
  float v13; // s0
  int v14; // r0
  unsigned int v15; // r1
  bool v16; // cf
  int v17; // r0
  int v18; // r0
  unsigned int v19; // r1
  bool v20; // cf
  float v21; // s2
  float v22; // s0
  float v23; // s4

  v2 = (StateMgr *)(a1 + 20);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 20));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C9F7E0 + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 == (*(int (**)(void))(dword_60C9F800 + 8))() )
    {
      v8 = FIELD_F32(a1, 100);
      v9 = (float)FIELD_S32(a1, 76);
    }
    else
    {
      v10 = sub_6047457C(FIELD_U32(a1, 68), 0);
      v11.n64_f32[0] = sub_604745C0(FIELD_U32(a1, 68), 0);
      v12.n64_u32[0] = 981668463;
      LODWORD(v13) = vmax_f32(v11, v12).n64_u32[0];
      switch ( FIELD_U32(a1, 60) )
      {
        case 0:
          v14 = FIELD_U32(a1, 44);
          v15 = FIELD_U32(a1, 60);
          v10 = v13 - v10;
          v16 = v15 >= 4;
          goto LABEL_7;
        case 1:
          v14 = FIELD_U32(a1, 44);
          v15 = FIELD_U32(a1, 60);
          v16 = v15 >= 4;
LABEL_7:
          if ( v16 )
            v15 = 0;
          v17 = dword_60B02B30[v15] + v14;
          goto LABEL_15;
        case 2:
          v18 = FIELD_U32(a1, 44);
          v19 = FIELD_U32(a1, 60);
          v10 = v13 - v10;
          v20 = v19 >= 4;
          goto LABEL_12;
        case 3:
          v18 = FIELD_U32(a1, 44);
          v19 = FIELD_U32(a1, 60);
          v20 = v19 >= 4;
LABEL_12:
          if ( v20 )
            v19 = 0;
          v17 = v18 + dword_60B02B30[v19] - 1;
LABEL_15:
          v9 = v10 / v13;
          FIELD_U32(a1, 76) = v17;
          break;
        default:
          v9 = 0.0;
          v17 = FIELD_U32(a1, 76);
          break;
      }
      v8 = (float)v17;
      FIELD_F32(a1, 100) = v9;
    }
    v21 = v9 + v8;
    v22 = FIELD_F32(a1, 88);
    v23 = FIELD_F32(a1, 96);
    result = FIELD_U32(a1, 72);
    FIELD_U32(result, 24) = 0;
    FIELD_F32(result, 28) = v22 + (float)(v21 * v23);
    FIELD_U32(result, 32) = 0;
    FIELD_U8(result, 64) |= 0x10u;
  }
  return result;
}
