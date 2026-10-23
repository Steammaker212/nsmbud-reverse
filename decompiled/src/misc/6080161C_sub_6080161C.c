/* sub_6080161C
 * address: 0x6080161C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6080161C(int a1, int a2, int a3)
{
  float *v6; // r7
  float result; // s0

  sub_60800970(a1, a3);
  v6 = *(float **)a2;
  sub_60800A24(a1, *(float **)a2);
  sub_60800A5C(a1, (int)v6);
  sub_608044DC(FIELD_U32(a1, 40), FIELD_F32(a1, 16));
  sub_607FEDA4(
    FIELD_U32(a1, 44),
    (float)(*(float *)(FIELD_U32(a2, 12) + 44) + *(float *)(FIELD_U32(a2, 12) + 48)) * 0.5,
    FIELD_F32(a3, 36));
  *(float *)(FIELD_U32(a1, 48) + 28) = (float)(*(float *)(FIELD_U32(a2, 12) + 52)
                                                + *(float *)(FIELD_U32(a2, 12) + 56))
                                        * 0.5;
  sub_607FEDB0(FIELD_U32(a1, 44), FIELD_U32(a1, 36), FIELD_U32(a2, 12));
  result = FIELD_F32(a1, 20);
  FIELD_F32(a1, 52) = FIELD_F32(a1, 28) + (float)(result * 0.5);
  return result;
}
