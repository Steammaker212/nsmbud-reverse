/* sub_60334740
 * address: 0x60334740   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60334740(int a1)
{
  if ( FIELD_U8(a1, 7004) )
    return Enemy__vf180(a1);
  return a1;
}
