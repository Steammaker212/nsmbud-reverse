/* sub_60051970
 * address: 0x60051970   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60051970(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 7096);
  if ( FIELD_U32(a1, 80) )
    return -v1;
  return v1;
}
