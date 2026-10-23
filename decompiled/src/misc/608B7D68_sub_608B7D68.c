/* sub_608B7D68
 * address: 0x608B7D68   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7D68(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( a2 <= 15 )
    return *(_DWORD *)(a1 + 4 * a2 + 244);
  return result;
}
