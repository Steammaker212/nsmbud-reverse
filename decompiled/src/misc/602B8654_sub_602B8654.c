/* sub_602B8654
 * address: 0x602B8654   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602B8654(Enemy *a1)
{
  int *p_id; // r0
  int id; // t1

  id = a1[1]._._._._.id;
  p_id = &a1[1]._._._._.id;
  if ( id != 1 )
  {
    *p_id = 1;
    sub_60421AD4(a1[1]._._._._.heap);
  }
  CollisionMgr_vf14((int)&a1[1]._._._.playerId);
  return Enemy__beginState_DieFall(a1);
}
