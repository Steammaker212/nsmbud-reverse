/* sub_60187054
 * address: 0x60187054   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60187054(int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 *v3; // r0

  if ( a2 >= 9 )
    a2 = 0;
  v3 = (unsigned __int8 *)(a1 + 2 * a2 + 1080);
  if ( a3 < 2 )
    v3 += a3;
  return *v3;
}
