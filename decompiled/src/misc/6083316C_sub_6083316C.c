/* sub_6083316C
 * address: 0x6083316C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6083316C(unsigned int *a1, float *a2)
{
  unsigned int v4; // r0
  unsigned int result; // r0

  v4 = sub_6000F7B8(-a2[6], sqrtf((float)(a2[10] * a2[10]) + (float)(a2[2] * a2[2])));
  *a1 = v4;
  if ( (v4 | 0x80000000) == 0xC0000000 )
  {
    a1[2] = 0;
    result = sub_6000F7B8(-a2[8], *a2);
    a1[1] = result;
  }
  else
  {
    a1[1] = sub_6000F7B8(a2[2], a2[10]);
    result = sub_6000F7B8(a2[4], a2[5]);
    a1[2] = result;
  }
  return result;
}
