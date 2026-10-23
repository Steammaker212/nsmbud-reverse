/* sub_600C1678
 * address: 0x600C1678   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C1678(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = FIELD_U32(a1, 80);
  v4 = (v3 + 18) & 0x1F;
  if ( (*(_DWORD *)(v2 + 4 * ((v3 + 18) >> 5) + 2224) & (1 << v4)) != 0
    || (v5 = (v3 + 22) & 0x1F, v4 = *(_DWORD *)(v2 + 4 * ((v3 + 22) >> 5) + 2224), (v4 & (1 << v5)) != 0) )
  {
    v6 = v3 + 28;
    v5 = *(_DWORD *)(v2 + 4 * (v6 >> 5) + 2224);
    if ( (v5 & (1 << (v6 & 0x1F))) == 0 )
      FIELD_U32(a1, 120) = 0;
  }
  sub_600C6BF4(a1, 1, v5, v4);
  v7 = *(_DWORD **)(a1 + 7100);
  v8 = v7[3];
  v9 = v7[2];
  v10 = v7[17];
  if ( v9 > v10 )
    v8 += 4 * v10;
  result = *(_DWORD *)(*(_DWORD *)v8 + 28);
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
