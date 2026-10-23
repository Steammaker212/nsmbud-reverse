/* sub_606A5ED0
 * address: 0x606A5ED0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606A5ED0(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C1991C;
  FIELD_U32(a1, 6996) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 6996);
  sub_60002B6C((StageActor *)(a1 + 6996));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 6976) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6976));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6976));
  FIELD_U32(a1, 6956) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6956));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6956));
  FIELD_U32(a1, 6936) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6936));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6936));
  *(_DWORD *)a1 = off_60C19A0C;
  ShapedCollider_dtor((ColliderBase *)(a1 + 6120));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
