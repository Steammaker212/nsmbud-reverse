/* sub_60746530
 * address: 0x60746530   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60746530(int a1)
{
  float v2; // s2
  unsigned int v3; // r0
  float v4; // s0
  float v5; // s0
  float v6; // s2
  float v7; // s6
  float v8; // s4
  float v9; // s2
  float v10; // s4
  StateMethodExecuter *result; // r0

  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  v2 = FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v2;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 672) = v2 + FIELD_F32(a1, 672);
  v3 = FIELD_U32(a1, 680) + (int)0x80000000 / sub_6074C8F4(a1);
  FIELD_U32(a1, 680) = v3;
  v4 = FIELD_F32(a1, 684)
     * (float)(*(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
             + (float)((float)((float)(v3 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0)))
                     * 0.000000059605));
  FIELD_F32(a1, 688) = v4;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 672) + v4;
  v5 = FIELD_F32(a1, 664);
  v6 = FIELD_F32(a1, 676);
  if ( v6 == v5 )
  {
    v9 = 0.01;
  }
  else
  {
    v7 = v5 - v6;
    v8 = FIELD_F32(a1, 116) - v6;
    v9 = 0.01;
    v10 = (float)(v8 / v7) * 1.5;
    if ( v10 >= 0.01 )
    {
      v9 = v10;
      if ( v10 > 1.0 )
        v9 = 1.0;
    }
  }
  FIELD_F32(a1, 144) = v9;
  FIELD_F32(a1, 148) = v9;
  FIELD_F32(a1, 152) = v9;
  result = *(StateMethodExecuter **)(a1 + 648);
  if ( !result )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 108) = FIELD_U32(a1, 656);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 660);
    FIELD_F32(a1, 116) = v5;
    return StateMgr__changeState((StateMgr *)(a1 + 752), (StateBase *)&dword_60CBE540);
  }
  return result;
}
