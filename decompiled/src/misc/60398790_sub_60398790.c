/* sub_60398790
 * address: 0x60398790   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60398790(int result)
{
  CollisionMgr *v1; // r4

  if ( FIELD_U8(result, 2992) )
  {
    if ( !FIELD_U8(result, 2996) )
      return result;
    goto LABEL_3;
  }
  if ( !FIELD_U8(result, 3000) )
  {
LABEL_3:
    v1 = (CollisionMgr *)(result + 648);
    CollisionMgr_setSensor((CollisionMgr *)(result + 648), &stru_60B008D0, 3);
    CollisionMgr_setSensor(v1, 0, 2);
    CollisionMgr_setSensor(v1, 0, 0);
    CollisionMgr_setSensor(v1, 0, 1);
    return CollisionMgr_vf14((int)v1);
  }
  return result;
}
