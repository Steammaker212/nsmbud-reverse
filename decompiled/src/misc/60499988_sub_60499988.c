/* sub_60499988
 * address: 0x60499988   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499988(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 146854);
  if ( result )
  {
    sub_6040349C(a1 + 128764);
    sub_6040349C(a1 + 131752);
    sub_6040349C(a1 + 134740);
    sub_6040349C(a1 + 137728);
    sub_6040349C(a1 + 140716);
    return sub_6040349C(a1 + 143704);
  }
  return result;
}
