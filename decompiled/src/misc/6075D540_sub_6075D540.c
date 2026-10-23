/* sub_6075D540
 * address: 0x6075D540   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075D540(_DWORD *a1, int a2)
{
  int result; // r0

  a1[278] = 0;
  result = sub_6078F298(a1, a2);
  if ( result )
  {
    a1[280] = FIELD_U32(result, 8);
    result = FIELD_U32(result, 12);
    a1[279] = result;
  }
  return result;
}
