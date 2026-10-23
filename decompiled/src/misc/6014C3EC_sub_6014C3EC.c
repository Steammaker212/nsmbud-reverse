/* sub_6014C3EC
 * address: 0x6014C3EC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014C3EC(int a1, int a2)
{
  int result; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r2

  if ( (*(_DWORD *)(a1 + 4 * ((a2 + 18) >> 5) + 2224) & (1 << ((a2 + 18) & 0x1F))) == 0
    && (*(_DWORD *)(a1 + 4 * ((a2 + 22) >> 5) + 2224) & (1 << ((a2 + 22) & 0x1F))) == 0
    || (*(_DWORD *)(a1 + 4 * ((a2 + 28) >> 5) + 2224) & (1 << ((a2 + 28) & 0x1F))) != 0 )
  {
    return 0;
  }
  v3 = a1 + 336 * a2;
  v4 = *(_DWORD *)(a1 + 4 * a2 + 2560);
  v5 = v3 + 56 * v4;
  result = 0;
  if ( v4 < 6 )
    return v5 + 2592;
  return result;
}
