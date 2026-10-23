/* sub_605B74CC
 * address: 0x605B74CC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B74CC(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60C09564;
  v2 = a1 + 644;
  ShapedCollider_dtor((ColliderBase *)(a1 + 1344));
  sub_605B750C(v2);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
