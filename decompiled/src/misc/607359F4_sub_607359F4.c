/* sub_607359F4
 * address: 0x607359F4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_607359F4(int a1)
{
  *(_DWORD *)a1 = off_60C22814;
  FIELD_U32(a1, 6856) = off_60C2293C;
  sub_60959BAC(a1 + 11544);
  sub_609175E4(a1 + 11320);
  sub_60959BAC(a1 + 10712);
  sub_609175E4(a1 + 10488);
  sub_604794C0((_DWORD *)(a1 + 6856));
  FIELD_U32(a1, 6832) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6832));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6832));
  FIELD_U32(a1, 6812) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 6812));
  sead__IDisposer__dtor((_DWORD *)(a1 + 6812));
  ShapedCollider_dtor((ColliderBase *)(a1 + 6104));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
