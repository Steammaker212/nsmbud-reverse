/* sub_605DD9F0
 * address: 0x605DD9F0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DD9F0(int a1, int a2)
{
  int v2; // r2

  LOWORD(v2) = 0;
  if ( (unsigned __int8)a2 <= 3u )
    return (unsigned __int16)*(_DWORD *)(a1 + 4 * a2 + 6928);
  return (unsigned __int16)v2;
}
