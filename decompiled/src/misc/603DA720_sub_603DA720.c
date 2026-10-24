/* sub_603DA720
 * address: 0x603DA720   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603DA720(
        StateMethodExecuter *result,
        float a2,
        float a3,
        float32x2_t a4,
        double a5)
{
  int v5; // r4
  int v6; // r2
  int i; // r3
  StateMethodExecuter *v8; // r1

  a4.n64_u32[0] = -4.5;
  v5 = 17;
  v6 = 1020;
  for ( i = 0; i != 17; ++i )
  {
    if ( !*((_BYTE *)&FIELD_U32(result, 0x0) + v6) )
    {
      v8 = &result[i];
      *(float *)&a5 = *(float *)&result[i + 17].owner + -0.15;
      a5 = vmax_f32(*(float32x2_t *)&a5, a4).n64_f64[0];
      FIELD_U32(v8 + (17) * 12, 0x4) = (void *)LODWORD(a5);
      *(float *)&FIELD_U32(v8, 0x0) = *(float *)&FIELD_U32(result + (i) * 12, 0x0) + *(float *)&result[i + 17].vtable;
      *(float *)&a5 = *(float *)&a5 + *(float *)&FIELD_U32(result + (i) * 12, 0x4);
      FIELD_U32(v8, 0x4) = (void *)LODWORD(a5);
      *(float *)&FIELD_U32(v8, 0x8) = *(float *)&FIELD_U32(result + (i) * 12, 0x8) + *(float *)&result[i + 17].currentState;
      FIELD_U32(v8 + (34) * 12, 0x0) = (char *)result[i + 34].vtable + 0x8000000;
      FIELD_U32(v8 + (34) * 12, 0x8) = result[i + 34].currentState + 0x4000000;
      if ( *(float *)&a5 >= (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) )
        goto LABEL_6;
      *((_BYTE *)&FIELD_U32(result, 0x0) + v6) = 1;
    }
    --v5;
LABEL_6:
    ++v6;
  }
  if ( v5 < 1 )
    return StateMgr__changeState((StateMgr *)&result[89], (StateBase *)&dword_60C99218);
  return result;
}
