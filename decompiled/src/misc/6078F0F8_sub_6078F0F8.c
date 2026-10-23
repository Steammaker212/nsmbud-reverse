/* sub_6078F0F8
 * address: 0x6078F0F8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078F0F8(int a1)
{
  unsigned int v1; // r0

  v1 = FIELD_U32(a1, 536);
  if ( (v1 & 2) != 0 )
    return 1;
  else
    return (v1 >> 1) & 2;
}
