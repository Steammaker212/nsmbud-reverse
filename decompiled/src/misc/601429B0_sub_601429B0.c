/* sub_601429B0
 * address: 0x601429B0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601429B0(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1

  v2 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = FIELD_U32(a1, 2872);
  if ( (v3 & 1) != 0 )
    return 1;
  if ( ((v4 = FIELD_U32(a1, 80), (*(_DWORD *)(v2 + 4 * ((v4 + 18) >> 5) + 2224) & (1 << ((v4 + 18) & 0x1F))) != 0)
     || (*(_DWORD *)(v2 + 4 * ((v4 + 22) >> 5) + 2224) & (1 << ((v4 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v2 + 4 * ((v4 + 28) >> 5) + 2224) & (1 << ((v4 + 28) & 0x1F))) == 0 )
  {
    return 1;
  }
  else
  {
    return (v3 & 0x10400) == 1024;
  }
}
