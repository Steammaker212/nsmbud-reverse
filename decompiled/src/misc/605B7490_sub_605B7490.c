/* sub_605B7490
 * address: 0x605B7490   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605B7490(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60C09564;
  v2 = a1 + 644;
  ShapedCollider_dtor((ColliderBase *)(a1 + 1344));
  sub_605B750C(v2);
  return StageActor__dtor((Actor *)a1);
}
