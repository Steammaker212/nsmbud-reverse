/* sub_6089E2AC
 * address: 0x6089E2AC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089E2AC(unsigned __int8 *a1)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    sub_6083CD6C(a1 + 608);
    *((_DWORD *)a1 + 150) = 0;
    return 0;
  }
  return result;
}
