/* sub_600C1150
 * address: 0x600C1150   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C1150(int a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
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
  v4 = *(_DWORD **)(a1 + 7100);
  v5 = v4[3];
  v6 = v4[2];
  v7 = v4[17];
  if ( v6 > v7 )
    v5 += 4 * v7;
  result = *(_DWORD *)(*(_DWORD *)v5 + 28);
  if ( (result & 1) != 0 )
  {
    if ( (result & 4) == 0 )
      return result;
    return sub_600C69CC(a1);
  }
  if ( (result & 0x30) != 0 )
    return sub_600C69CC(a1);
  return result;
}
