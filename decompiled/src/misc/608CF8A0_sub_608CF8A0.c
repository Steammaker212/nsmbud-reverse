/* sub_608CF8A0
 * address: 0x608CF8A0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF8A0(_DWORD *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  if ( result == 1 )
    return nn__fs__FlushFile(a1[1]);
  return result;
}
