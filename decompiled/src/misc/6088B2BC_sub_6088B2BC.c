/* sub_6088B2BC
 * address: 0x6088B2BC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088B2BC(int a1)
{
  int result; // r0

  result = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)a1 + 136) + 1874);
  if ( !result )
    JUMPOUT(0x6088E174);
  return result;
}
