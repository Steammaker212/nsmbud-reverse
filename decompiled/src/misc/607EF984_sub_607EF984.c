/* sub_607EF984
 * address: 0x607EF984   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EF984(int a1, _DWORD *a2)
{
  int result; // r0

  result = a1 + 2648;
  if ( FIELD_U8(result, 23748) )
    return sub_60473B88((_DWORD *)(result + 10808), a2, 0);
  return result;
}
