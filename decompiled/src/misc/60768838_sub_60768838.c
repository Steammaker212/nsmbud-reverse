/* sub_60768838
 * address: 0x60768838   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768838(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r6
  StateBase *v7; // r1
  StateBase *v8; // r0
  int v9; // r5
  float v10; // s2
  float *v11; // r5
  float v12; // s0
  int v13; // r0
  float v14; // s0

  result = FIELD_U32(a1, 1232);
  FIELD_U32(a1, 1232) = result & 0xFFDFFFFF;
  v3 = FIELD_U32(a1, 9708);
  if ( v3 != 4 )
  {
    if ( v3 != 1 )
      return result;
    FIELD_U32(a1, 1232) = result | 0x200000;
    v4 = FIELD_U32(a1, 6900);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( (v4 & 1) != 0 )
    {
      if ( v6 == (*((int (**)(void))stru_60CBF81C.vtable + 2))()
        || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 9916)),
            v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
            v9 == (*(int (**)(void))(stru_60CBF918 + 8))()) )
      {
LABEL_12:
        v10 = FIELD_F32(a1, 108);
        v11 = (float *)(a1 + 9744);
        v12 = FIELD_F32(a1, 9736);
        if ( fabsf(v10 - v12) >= FIELD_F32(a1, 9744) )
        {
          v13 = a1 + 688;
          if ( v10 >= v12 )
          {
            result = sub_60786D24(v13, 6);
            v14 = -*v11;
          }
          else
          {
            result = sub_60786D24(v13, 7);
            v14 = *v11;
          }
          FIELD_F32(a1, 88) = v14;
        }
        else
        {
          FIELD_U32(a1, 9708) = 0;
          FIELD_U32(a1, 88) = 0;
          FIELD_F32(a1, 108) = v12;
          return 0;
        }
        return result;
      }
      v7 = &stru_60CBF81C;
    }
    else
    {
      if ( v6 == (*(int (**)(void))(dword_60CBF864 + 8))() )
        goto LABEL_12;
      v7 = (StateBase *)&dword_60CBF864;
    }
    Player_changeState(a1, v7, 1);
    goto LABEL_12;
  }
  result = FIELD_U32(a1, 9712);
  if ( !result )
    return (int)sub_60766314(a1, &stru_60CBF37C, 0);
  return result;
}
