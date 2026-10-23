/* sub_60941A08
 * address: 0x60941A08   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60941A08(int a1, int *a2, int a3, int a4, int a5)
{
  int result; // r0

  FIELD_U32(a1, 8) = 0;
  (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
  FIELD_U32(a1, 4) = sub_6090FEB4(a2[1]);
  result = a5;
  if ( a5 )
    return sub_60947BFC(a5, a1);
  return result;
}
