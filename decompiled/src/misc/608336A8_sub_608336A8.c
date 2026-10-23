/* sub_608336A8
 * address: 0x608336A8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608336A8(int a1)
{
  unsigned int v1; // r0

  v1 = a1 - 1;
  if ( v1 <= 2 )
    return dword_60AF5B04[v1];
  else
    return 0x40000000;
}
