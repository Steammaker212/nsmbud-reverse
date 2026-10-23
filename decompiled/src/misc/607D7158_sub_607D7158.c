/* sub_607D7158
 * address: 0x607D7158   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7158(int a1, int a2)
{
  int result; // r0

  result = sub_607D6C28(a1);
  if ( result )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 1212))(result, a2);
  return result;
}
