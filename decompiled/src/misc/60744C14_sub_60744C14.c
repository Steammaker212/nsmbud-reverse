/* sub_60744C14
 * address: 0x60744C14   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60744C14(int a1)
{
  float v2; // s2
  float v3; // s0
  float v4; // s2
  unsigned int v5; // r0
  float v6; // s4
  float v7; // s4
  float v8; // s2
  float v9; // s4
  float v10; // s2
  float v11; // s0
  float v12; // s2
  StateMethodExecuter *result; // r0

  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  v2 = FIELD_F32(a1, 124);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v2;
  v3 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v3;
  v4 = v2 + FIELD_F32(a1, 720);
  FIELD_F32(a1, 720) = v4;
  v5 = FIELD_U32(a1, 728) - 23860929;
  FIELD_U32(a1, 728) = v5;
  v6 = FIELD_F32(a1, 732)
     * (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
             + (float)((float)((float)(v5 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                     * 0.000000059605));
  FIELD_F32(a1, 736) = v6;
  FIELD_F32(a1, 112) = v4 + v6;
  v7 = FIELD_F32(a1, 712);
  v8 = FIELD_F32(a1, 724);
  if ( v8 == v7 )
  {
    v11 = 0.01;
  }
  else
  {
    v9 = v7 - v8;
    v10 = v3 - v8;
    v11 = 0.01;
    v12 = (float)(v10 / v9) * 1.5;
    if ( v12 >= 0.01 )
    {
      v11 = v12;
      if ( v12 > 0.5 )
        v11 = 0.5;
    }
  }
  FIELD_F32(a1, 144) = v11;
  FIELD_F32(a1, 148) = v11;
  FIELD_F32(a1, 152) = v11;
  FIELD_F32(a1, 672) = v11 + v11;
  FIELD_F32(a1, 676) = v11 + v11;
  FIELD_F32(a1, 680) = v11 + v11;
  result = *(StateMethodExecuter **)(a1 + 696);
  if ( result == (StateMethodExecuter *)45 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
    result = *(StateMethodExecuter **)(a1 + 696);
  }
  if ( !result )
  {
    FIELD_U32(a1, 672) = 1065353216;
    FIELD_U32(a1, 676) = 1065353216;
    FIELD_U32(a1, 680) = 1065353216;
    FIELD_U32(a1, 144) = 1056964608;
    FIELD_U32(a1, 148) = 1056964608;
    FIELD_U32(a1, 152) = 1056964608;
    FIELD_U32(a1, 108) = FIELD_U32(a1, 704);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 708);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 712);
    return StateMgr__changeState((StateMgr *)(a1 + 872), (StateBase *)&dword_60CBE480);
  }
  return result;
}
