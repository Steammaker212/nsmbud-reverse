/* sub_606DF394
 * address: 0x606DF394   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606DF394(int a1, int a2, double *a3)
{
  float v5; // s2
  double v6; // d0

  v6 = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 240))(a1);
  v5 = *(float *)&v6 + -16.0;
  *(float *)&v6 = *(float *)&v6 + 4.0;
  *(float *)a2 = v5;
  FIELD_U32(a2, 4) = HIDWORD(v6);
  *a3 = v6;
  return *(float *)&v6;
}
