/* sub_601685E4
 * address: 0x601685E4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601685E4(int a1, _DWORD *a2)
{
  return (*a2 & 0xFF0000) != 0x40000 && (unsigned __int16)*a2 == 0xD;
}
