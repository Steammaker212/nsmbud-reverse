/* sub_607042EC
 * address: 0x607042EC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607042EC(int a1)
{
  int v2; // r0
  float v3; // s0
  int v4; // r0
  int *v5; // r1

  v2 = FIELD_U32(a1, 20) & 3;
  FIELD_U32(a1, 6300) = v2;
  FIELD_F32(a1, 108) = flt_60B096E4[v2] + FIELD_F32(a1, 108);
  v3 = flt_60B096F8[v2] + FIELD_F32(a1, 112);
  v5 = (int *)((char *)&off_60C20C6C + ((4 * v2) & 8));
  v4 = *v5;
  FIELD_F32(a1, 112) = v3;
  FIELD_U32(a1, 6304) = v4;
  FIELD_U32(a1, 6308) = v5[1];
  sub_607045A4((StageActor *)a1);
  FIELD_U8(a1, 6444) = 0;
  return 1;
}
