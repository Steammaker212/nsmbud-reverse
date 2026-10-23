/* sub_600C3214
 * address: 0x600C3214   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600C3214(int a1)
{
  int v2; // r5
  int v3; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v2 + 4 * ((v3 + 18) >> 5) + 2224) & (1 << ((v3 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v2 + 4 * ((v3 + 22) >> 5) + 2224) & (1 << ((v3 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v2 + 4 * ((v3 + 28) >> 5) + 2224) & (1 << ((v3 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 120) = 0;
  }
  target = 805306368;
  v5 = 39256064;
  return moveValueTo((int *)(a1 + 160), &target, &v5);
}
