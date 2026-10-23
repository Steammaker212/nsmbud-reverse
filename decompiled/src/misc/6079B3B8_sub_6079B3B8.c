/* sub_6079B3B8
 * address: 0x6079B3B8   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079B3B8(int result, float a2, float a3)
{
  if ( (FIELD_U8(result, 1221) & 0x20) != 0 )
  {
    FIELD_F32(result, 88) = a2;
    FIELD_F32(result, 124) = a3;
  }
  return result;
}
