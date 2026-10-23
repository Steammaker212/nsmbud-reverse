/* sub_601A9BD0
 * address: 0x601A9BD0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A9BD0(int a1)
{
  int result; // r0

  result = sub_60185EA8(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1);
  return result;
}
