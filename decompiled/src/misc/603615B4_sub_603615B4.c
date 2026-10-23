/* sub_603615B4
 * address: 0x603615B4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603615B4(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  ColliderBase *v6; // r4

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  if ( ((int (__fastcall *)(int, int))loc_6069B070)(a1 + 6984, a1 + 108) )
  {
    v3 = FIELD_U32(a1, 108);
    v4 = FIELD_U32(a1, 112);
    v5 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v3;
    FIELD_U32(a1, 588) = v4;
    FIELD_U32(a1, 592) = v5;
    FIELD_U32(a1, 608) = v3;
    FIELD_U32(a1, 612) = v4;
    FIELD_U32(a1, 616) = v5;
    v6 = (ColliderBase *)(a1 + 6328);
    sub_60160948(v6);
  }
  else
  {
    v6 = (ColliderBase *)(a1 + 6328);
  }
  return ShapedCollider_execute(v6);
}
