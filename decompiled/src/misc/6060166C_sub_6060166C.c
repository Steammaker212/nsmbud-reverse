/* sub_6060166C
 * address: 0x6060166C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6060166C(int a1)
{
  int v2; // r4
  int v3; // r10
  int v4; // r5
  Actor *v5; // r0

  v2 = 0;
  *(_DWORD *)a1 = off_60C0E9D0;
  v3 = a1 + 30568;
  do
  {
    *(_DWORD *)(v3 + v2) = EffectWrapper_vtable;
    sub_60237560(v3 + v2);
    sead__IDisposer__dtor((_DWORD *)(v3 + v2));
    v2 -= 104;
  }
  while ( v2 != -3328 );
  FIELD_U32(a1, 27192) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 27192));
  sead__IDisposer__dtor((_DWORD *)(a1 + 27192));
  v4 = 0;
  *(_DWORD *)a1 = off_60C0EBB4;
  do
  {
    ActiveCollider_dtor((ActiveCollider *)(a1 + 26888 + v4));
    v4 -= 304;
  }
  while ( v4 != -19456 );
  ShapedCollider_dtor((ColliderBase *)(a1 + 6160));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v5 = StageActor__dtor((Actor *)a1);
  operator_delete(v5);
}
