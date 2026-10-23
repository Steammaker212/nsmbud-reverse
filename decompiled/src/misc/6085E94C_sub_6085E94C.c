/* sub_6085E94C
 * address: 0x6085E94C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085E94C(int result, int a2, float a3)
{
  float *v3; // r1

  if ( a2 == 1 )
  {
    v3 = (float *)(FIELD_U32(result, 264) + 4);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v3 = *(float **)(result + 264);
LABEL_5:
    *v3 = a3;
  }
  FIELD_U16(result, 216) |= 4u;
  return result;
}
