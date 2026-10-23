/* sub_607973AC
 * address: 0x607973AC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607973AC(int a1, int a2)
{
  int result; // r0

  sub_60760034(a1, a2);
  result = sub_6079D894(a1);
  if ( result )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 1056))(result, a2);
  return result;
}
