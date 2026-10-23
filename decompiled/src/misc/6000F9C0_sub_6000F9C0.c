/* sub_6000F9C0
 * address: 0x6000F9C0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000F9C0(int a1, float *a2, float a3, float a4, float a5, float a6)
{
  float v10; // s10
  float v11; // s1
  float v12; // s0
  float v13; // s2
  float v14; // s4
  int result; // r0
  unsigned int v16; // r1
  unsigned int v17; // r2
  int v18; // r0
  unsigned int v19; // r1
  int v20; // r0

  v10 = a2[1] + -16.0;
  v11 = a5 - *a2;
  v12 = a6 - v10;
  v13 = (float)((float)(v12 * v12) + (float)(v11 * v11)) + -256.0;
  if ( v13 == 0.0
    || (v14 = (float)((float)((float)(a4 - v10) * (float)(a4 - v10)) + (float)((float)(a3 - *a2) * (float)(a3 - *a2)))
            + -256.0,
        v13 < 0.0)
    && v14 >= 0.0
    || (result = 0, v13 >= 0.0) && v14 < 0.0 )
  {
    v16 = sub_6000F7B8(v12, v11);
    result = 0;
    v17 = v16 + 0x1000000;
    if ( (v16 + 0x1000000) >> 25 <= 0x20 )
    {
      v18 = 1090519039;
      v19 = HIBYTE(v16);
      if ( v17 < 0x40FFFFFF )
        v18 = v17;
      v20 = v18 - 0x1000000;
      if ( v19 > 0xFE )
        v20 = 0;
      FIELD_U32(a1, 132) = v20;
      FIELD_F32(a1, 116) = *a2;
      FIELD_F32(a1, 120) = a2[1];
      FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
      FIELD_U8(a1, 142) ^= 1u;
      StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C7B6A8);
      return 1;
    }
  }
  return result;
}
