/* sub_6072C768
 * address: 0x6072C768   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072C768(int a1)
{
  float v2; // s0
  _BYTE *v3; // r5

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v3 = (_BYTE *)(a1 + 7481);
  if ( ((int (__fastcall *)(int, int, int, float))loc_6057AC94)(a1, 1, 1, -0.34) )
    *v3 = 1;
  sub_6057A200(a1);
  sub_605D01D4(a1);
  if ( *v3 )
    sub_6057AEC8(a1);
  return ShapedCollider_execute((ColliderBase *)(a1 + 6120));
}
