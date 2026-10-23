/* sub_60593B3C
 * address: 0x60593B3C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60593B3C(CollisionActor *a1)
{
  float v2; // s0

  v2 = CollisionActor__handleSpeed(a1);
  if ( !a1[1].collisionMgr[1501] )
  {
    CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
    if ( sub_6000346C((int)a1) == 1 )
    {
      FIELD_U32(a1, 0x0).speed.x = -FIELD_U32(a1, 0x0).speed.x;
      a1[1].collisionMgr[1501] = 1;
    }
  }
  return sub_60596650(a1);
}
