/* sub_60185F3C
 * address: 0x60185F3C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60185F3C(float *a1)
{
  float v1; // s4
  int v2; // r1
  float v3; // s0
  float v4; // s2

  v1 = a1[56];
  v2 = 0;
  v3 = v1 + a1[55];
  a1[55] = v3;
  v4 = a1[57];
  if ( v1 > 0.0 )
  {
    if ( v3 < v4 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v3 <= v4 )
  {
LABEL_5:
    v3 = a1[57];
    v2 = 1;
    a1[55] = v4;
  }
LABEL_6:
  a1[32] = v3;
  a1[33] = v3;
  a1[34] = v3;
  return v2;
}
