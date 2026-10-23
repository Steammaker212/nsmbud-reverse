/* sub_60606E58
 * address: 0x60606E58   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60606E58(int a1)
{
  unsigned int v2; // r0
  StateMethodExecuter **v3; // r5
  float *v4; // r1
  float v5; // s0
  float v6; // s16
  float v7; // s2
  int v8; // r1
  StateMethodExecuter *result; // r0
  bool v10; // cc
  float v11; // s0
  unsigned int v12; // r1
  float v13; // s4

  v3 = (StateMethodExecuter **)(a1 + 6828);
  v2 = FIELD_U32(a1, 6828);
  if ( v2 >= 4 )
  {
    v6 = -1.13;
    v5 = -2.2;
    FIELD_U32(a1, 136) = -1072902963;
  }
  else
  {
    v4 = (float *)&dword_60AF2A64[v2];
    v5 = *v4;
    v6 = flt_60AF2A74[v2];
    FIELD_F32(a1, 136) = *v4;
  }
  v7 = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 124) = v7;
  if ( v7 >= v5 )
  {
    v5 = v7;
    if ( v7 > v6 )
      v5 = v6;
  }
  FIELD_F32(a1, 124) = v5;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v8 = FIELD_U32(a1, 7228);
  result = *v3;
  v10 = (int)*v3 <= 2;
  if ( (int)*v3 >= 2 )
    v10 = (int)result <= v8;
  if ( !v10 )
    FIELD_F32(a1, 124) = FIELD_F32(a1, 124) + -0.5;
  v11 = FIELD_F32(a1, 124);
  if ( (int)result < v8 )
  {
    v11 = v11 + 0.5;
    FIELD_F32(a1, 124) = v11;
  }
  if ( v11 == v6 )
  {
    v12 = FIELD_U32(a1, 6120) - 1;
    v13 = v12 > 2 ? 0.0 : flt_60B063B0[v12];
    if ( (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 6796)) < (float)(FIELD_F32(AreaTask_intance, 1824) + v13) )
    {
      StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB2B74);
      result = *v3;
    }
  }
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB2B94);
  return result;
}
