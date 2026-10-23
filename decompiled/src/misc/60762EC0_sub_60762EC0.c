/* sub_60762EC0
 * address: 0x60762EC0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60762EC0(int a1, _DWORD *a2)
{
  unsigned int v2; // r0

  if ( (unsigned __int16)*a2 != 0x10 )
    return 0;
  v2 = (unsigned __int8)__ROR4__(*a2, 16) - 4;
  if ( v2 > 0xC )
    return 0;
  else
    return (0x1005u >> v2) & 1;
}
