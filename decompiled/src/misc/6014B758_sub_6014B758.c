/* sub_6014B758
 * address: 0x6014B758   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014B758(int a1, int a2)
{
  int v2; // r2
  int v3; // r6
  int v4; // r2
  int v5; // r5

  v2 = *(_DWORD *)(a1 + 4 * ((a2 + 18) >> 5) + 2224) & (1 << ((a2 + 18) & 0x1F));
  if ( !v2 && (*(_DWORD *)(a1 + 4 * ((a2 + 22) >> 5) + 2224) & (1 << ((a2 + 22) & 0x1F))) == 0 )
    return 0;
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 4 * ((a2 + 28) >> 5) + 2224) & (1 << ((a2 + 28) & 0x1F))) == 0
    && (v2 || (*(_DWORD *)(a1 + 4 * ((a2 + 22) >> 5) + 2224) & (1 << ((a2 + 22) & 0x1F))) != 0) )
  {
    v4 = *(_DWORD *)(a1 + 4 * a2 + 2560);
    if ( v4 <= 5 )
    {
      v5 = a1 + 336 * a2 + 56 * v4;
      if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v5, 2620)) )
        return FIELD_U32(v5, 2624);
    }
  }
  return v3;
}
