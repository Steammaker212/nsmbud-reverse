/* sub_6028FC18
 * address: 0x6028FC18   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028FC18(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  float v5; // s0
  float v6; // s4
  float v7; // s6

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 40));
  v2 = FIELD_U32(a1, 104);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 104) = result;
  }
  else
  {
    result = 0;
  }
  v4 = result;
  if ( result <= 1 )
    v4 = 1;
  v5 = 1.0 / (float)v4;
  FIELD_U32(a1, 84) += (int)(float)((float)-FIELD_U32(a1, 84) * v5);
  v6 = FIELD_F32(a1, 56) + (float)(v5 * (float)(*(float *)&dword_60C8F8C0 - FIELD_F32(a1, 56)));
  v7 = FIELD_F32(a1, 60) + (float)(v5 * (float)(*(float *)&dword_60C8F8C4 - FIELD_F32(a1, 60)));
  FIELD_F32(a1, 52) = FIELD_F32(a1, 52) + (float)(v5 * (float)(*(float *)&dword_60C8F8BC - FIELD_F32(a1, 52)));
  FIELD_F32(a1, 56) = v6;
  FIELD_F32(a1, 60) = v7;
  if ( !result )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C8F874);
  return result;
}
