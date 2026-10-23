/* sub_60971F1C
 * address: 0x60971F1C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int sub_60971F1C()
{
  unsigned int v0; // r4
  unsigned int result; // r0

  v0 = sub_60973D88(1, 10, 160, 560, 1, 1, 2);
  result = sub_60973D88(1, 10, 160, 560, 1, 1, 0);
  if ( v0 > result )
    return v0;
  return result;
}
