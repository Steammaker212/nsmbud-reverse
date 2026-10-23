/* sub_6000F338
 * address: 0x6000F338   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000F338(int result, float a2)
{
  if ( FIELD_U8(result, 142) )
    a2 = -a2;
  FIELD_F32(result, 136) = a2;
  return result;
}
