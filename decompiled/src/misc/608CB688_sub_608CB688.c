/* sub_608CB688
 * address: 0x608CB688   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB688(int result, int a2, __int16 a3)
{
  FIELD_U8(result, 112) = a2;
  if ( a2 == 1 )
    FIELD_U16(result, 124) = a3;
  return result;
}
