/* sub_608AC23C
 * address: 0x608AC23C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC23C(_DWORD *a1, int a2)
{
  int result; // r0

  *a1 = a2;
  if ( sub_608AF1CC(a2) == 1 )
    sub_608AF1DC(*a1);
  result = *a1;
  *(_DWORD *)(*a1 + 8) = a1;
  return result;
}
