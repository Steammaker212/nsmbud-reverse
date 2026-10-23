/* sub_6014C658
 * address: 0x6014C658   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014C658(int a1, int a2)
{
  int v2; // r2

  if ( ((*(_DWORD *)(a1 + 4 * ((a2 + 18) >> 5) + 2224) & (1 << ((a2 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(a1 + 4 * ((a2 + 22) >> 5) + 2224) & (1 << ((a2 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(a1 + 4 * ((a2 + 28) >> 5) + 2224) & (1 << ((a2 + 28) & 0x1F))) == 0
    && (v2 = *(_DWORD *)(a1 + 4 * a2 + 2560), v2 <= 5) )
  {
    return *(_DWORD *)(a1 + 336 * a2 + 56 * v2 + 2600);
  }
  else
  {
    return (a2 << 31) | 0x40000000;
  }
}
