/* sub_607CDF9C
 * address: 0x607CDF9C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CDF9C(int a1, int a2, int a3)
{
  int result; // r0

  result = sub_607D6C28(a1);
  if ( result )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)result + 216))(result, a2, a3);
  return result;
}
