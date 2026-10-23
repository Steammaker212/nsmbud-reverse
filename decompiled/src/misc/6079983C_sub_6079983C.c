/* sub_6079983C
 * address: 0x6079983C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6079983C(int a1, int a2)
{
  int v2; // r0
  int v4; // r0
  Actor *v5; // r0

  v2 = a1 + 1328;
  if ( (*(_DWORD *)(v2 + 4 * ((a2 + 18) >> 5) + 2224) & (1 << ((a2 + 18) & 0x1F))) == 0
    && (*(_DWORD *)(v2 + 4 * ((a2 + 22) >> 5) + 2224) & (1 << ((a2 + 22) & 0x1F))) == 0 )
  {
    return 0;
  }
  if ( (*(_DWORD *)(v2 + 4 * ((a2 + 28) >> 5) + 2224) & (1 << ((a2 + 28) & 0x1F))) != 0 )
    return 0;
  v4 = sub_6014B758(v2, a2);
  if ( !v4 )
    return 0;
  v5 = *(Actor **)(v4 + 144);
  return !v5 || Actor__getProfileId(v5) != 309;
}
