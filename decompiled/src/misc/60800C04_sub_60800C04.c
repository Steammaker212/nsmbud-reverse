/* sub_60800C04
 * address: 0x60800C04   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60800C04(sead_IDisposer *a1, float **a2, int a3)
{
  int v6; // r0
  float *v7; // r5

  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)&off_60C27E3C;
  sub_60800970((int)a1, a3);
  FIELD_U32(a1, 0x0) = (int)&off_60C27E4C;
  v6 = operator_new(0x14u);
  a1[2].containingHeap = sub_607FDBA0(v6);
  v7 = *a2;
  sub_60800A24((int)a1, *a2);
  sub_60800A5C((int)a1, (int)v7);
  return a1;
}
