/* sub_6026DB20
 * address: 0x6026DB20   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026DB20(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r0
  _DWORD *v4; // r8
  int v5; // r0
  int *v6; // r2
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0

  v2 = a1[5];
  a1[2369] = dword_60AF4AD0[v2 & 7];
  v3 = (v2 >> 4) & 1;
  a1[2367] = v3;
  a1[20] = (v2 >> 8) & 1;
  a1[2348] = 1065353216;
  a1[2349] = 1065353216;
  a1[2350] = 1065353216;
  a1[2351] = 1065353216;
  a1[2352] = 1065353216;
  a1[2353] = 1065353216;
  a1[2354] = 1065353216;
  a1[2355] = 1065353216;
  a1[2356] = 1065353216;
  a1[2357] = 1065353216;
  a1[41] = dword_60AF5A54[v3];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 212))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 204))(a1);
  v4 = a1 + 2369;
  a1[29] = 0;
  v5 = a1[2367];
  *((float *)a1 + 28) = flt_60AF1FA0[v5] + *((float *)a1 + 28);
  if ( v5 == 1 )
    v6 = &dword_60C8E88C;
  else
    v6 = &dword_60C8E8B0;
  ShapedCollider_init((ShapedCollider *)(a1 + 1528), (StageActor *)a1, (ShapedColliderInfo *)v6);
  a1[1569] = (char *)a1 + 87;
  a1[1568] = (char *)a1 + 86;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1528));
  ShapedCollider_init((ShapedCollider *)(a1 + 1692), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E8D4);
  a1[1733] = (char *)a1 + 87;
  a1[1732] = (char *)a1 + 86;
  v7 = -*v4;
  a1[2372] = v7;
  a1[1753] = v7;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1692));
  ShapedCollider_init((ShapedCollider *)(a1 + 1856), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E8D4);
  a1[1897] = (char *)a1 + 87;
  a1[1896] = (char *)a1 + 86;
  v8 = -1073741824 - *v4;
  a1[2373] = v8;
  a1[1917] = v8;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1856));
  ShapedCollider_init((ShapedCollider *)(a1 + 2020), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E8D4);
  a1[2061] = (char *)a1 + 87;
  a1[2060] = (char *)a1 + 86;
  v9 = -(*v4 ^ 0x80000000);
  a1[2374] = v9;
  a1[2081] = v9;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 2020));
  ShapedCollider_init((ShapedCollider *)a1 + 24, (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E8D4);
  a1[2225] = (char *)a1 + 87;
  a1[2224] = (char *)a1 + 86;
  v10 = 0x40000000 - *v4;
  a1[2375] = v10;
  a1[2245] = v10;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 2184));
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C8E800);
  return 1;
}
