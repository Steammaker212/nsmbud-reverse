/* sub_60213CE0
 * address: 0x60213CE0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60213CE0(int a1)
{
  if ( !FIELD_U8(a1, 477) )
    return sub_60186A24(a1);
  FIELD_U8(a1, 19) = 1;
  return a1;
}
