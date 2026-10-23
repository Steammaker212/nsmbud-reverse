/* sub_6008C2D4
 * address: 0x6008C2D4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008C2D4(int a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 916))(a1);
  return result;
}
