/* sub_6000FBEC
 * address: 0x6000FBEC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000FBEC(int a1, float *a2, float a3, float a4, float a5, float a6)
{
  float v10; // s8
  float v11; // s10
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s4
  int result; // r0
  unsigned int v17; // r1
  int v18; // r0
  int v19; // r0

  v10 = a2[1] + -32.0;
  v11 = *a2 + 32.0;
  v12 = a6 - v10;
  v13 = a5 - v11;
  v14 = (float)((float)(v12 * v12) + (float)(v13 * v13)) + -1024.0;
  if ( v14 == 0.0
    || (v15 = (float)((float)((float)(a4 - v10) * (float)(a4 - v10)) + (float)((float)(a3 - v11) * (float)(a3 - v11)))
            + -1024.0,
        v14 < 0.0)
    && v15 >= 0.0
    || (result = 0, v14 >= 0.0) && v15 < 0.0 )
  {
    v17 = sub_6000F7B8(v12, v13) - 1056964608;
    result = 0;
    if ( v17 >> 25 <= 0x20 )
    {
      v18 = 1090519039;
      if ( v17 < 0x40FFFFFF )
        v18 = v17;
      v19 = v18 + 1056964608;
      if ( v17 < 0x1000000 )
        v19 = 0x40000000;
      FIELD_U32(a1, 132) = v19;
      FIELD_F32(a1, 116) = *a2;
      FIELD_F32(a1, 120) = a2[1];
      FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
      FIELD_U8(a1, 142) ^= 1u;
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C7B728);
      return 1;
    }
  }
  return result;
}
