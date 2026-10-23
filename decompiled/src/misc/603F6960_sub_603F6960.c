/* sub_603F6960
 * address: 0x603F6960   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F6960(unsigned __int8 *a1, int a2, int a3)
{
  int result; // r0

  result = -1;
  if ( a1[4] == a2 && a1[5] == a3 )
    return *(_DWORD *)a1;
  return result;
}
