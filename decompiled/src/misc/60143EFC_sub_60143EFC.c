/* sub_60143EFC
 * address: 0x60143EFC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60143EFC(int a1)
{
  int v2; // r4
  int v3; // r1
  int result; // r0
  int v5; // r2

  v2 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = FIELD_U32(a1, 2872);
  result = 1;
  if ( (v3 & 1) != 0 )
    return result;
  if ( (v3 & 0x10) != 0 )
    return 0;
  v5 = FIELD_U32(a1, 80);
  result = 1;
  if ( (*(_DWORD *)(v2 + 4 * ((v5 + 18) >> 5) + 2224) & (1 << ((v5 + 18) & 0x1F))) == 0
    && (*(_DWORD *)(v2 + 4 * ((v5 + 22) >> 5) + 2224) & (1 << ((v5 + 22) & 0x1F))) == 0 )
  {
    result = 1;
    if ( (v3 & 0x10400) == 0x400 )
      return result;
    return 0;
  }
  if ( (*(_DWORD *)(v2 + 4 * ((v5 + 28) >> 5) + 2224) & (1 << ((v5 + 28) & 0x1F))) != 0 && (v3 & 0x10400) != 0x400 )
    return 0;
  return result;
}
