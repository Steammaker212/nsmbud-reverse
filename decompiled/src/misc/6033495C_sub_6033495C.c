/* sub_6033495C
 * address: 0x6033495C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6033495C(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BEC5AC;
  v2 = (_DWORD *)(a1 + 6344);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6656));
  sub_60026BFC(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
