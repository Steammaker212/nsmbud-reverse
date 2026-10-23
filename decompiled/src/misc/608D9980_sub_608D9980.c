/* sub_608D9980
 * address: 0x608D9980   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9980(_DWORD *a1)
{
  int v1; // r1

  LOBYTE(v1) = 64;
  if ( (*a1 & 4) != 0 )
    return (unsigned __int8)a1[(*a1 & 1) + 1 + ((*a1 >> 1) & 1)];
  return (unsigned __int8)v1;
}
