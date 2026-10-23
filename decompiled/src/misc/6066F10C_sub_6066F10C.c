/* sub_6066F10C
 * address: 0x6066F10C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6066F10C(int a1)
{
  float *v1; // r1
  float *v2; // r2
  float v3; // s4
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float *v7; // r3
  float v8; // s4
  float *v9; // r2
  float v10; // s0
  unsigned int v11; // r1
  StateMethodExecuter *result; // r0
  bool v13; // cc

  v1 = *(float **)(a1 + 6100);
  v2 = (float *)(a1 + 8244);
  v3 = FIELD_F32(a1, 8244);
  v4 = v1[6];
  v5 = v1[5];
  if ( v3 >= v4 )
  {
    v6 = v3 + -0.05;
    if ( v6 < v4 )
      v6 = v1[6];
  }
  else
  {
    v6 = v3 + 0.05;
    if ( v6 > v4 )
      v6 = v1[6];
  }
  *v2 = v6;
  v7 = (float *)(a1 + 8248);
  v8 = v6 + FIELD_F32(a1, 8248);
  if ( (float)(v8 - v5) >= 0.0 )
  {
    *v7 = 0.0;
    *v2 = v4;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7228);
  }
  else
  {
    *v7 = v8;
    v9 = (float *)(a1 + 8088);
    FIELD_F32(a1, 8088) = v1[14] - v8;
    FIELD_F32(a1, 8096) = v8 + v1[10];
    v10 = FIELD_F32(a1, 108);
    v11 = a1 + 8120;
    do
    {
      result = (StateMethodExecuter *)(v9 + 2);
      v9[6] = v10 + *v9;
      v13 = (unsigned int)(v9 + 8) > v11;
      v9 += 2;
    }
    while ( !v13 );
  }
  return result;
}
