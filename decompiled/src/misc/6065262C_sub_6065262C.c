/* sub_6065262C
 * address: 0x6065262C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6065262C(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C140A0;
  FIELD_U32(a1, 6812) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 6812);
  sub_60002B6C((StageActor *)(a1 + 6812));
  sead__IDisposer__dtor(v2);
  *(_DWORD *)a1 = off_60C14194;
  SolidOnTopCollider_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
