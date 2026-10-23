/* sub_6039683C
 * address: 0x6039683C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_6039683C(int a1)
{
  void *result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  if ( FIELD_U8(a1, 2992) )
  {
    if ( !FIELD_U8(a1, 2996) )
      goto LABEL_8;
  }
  else if ( FIELD_U8(a1, 3000) )
  {
    goto LABEL_8;
  }
  if ( FIELD_F32(a1, 124) <= 0.0 )
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
    CollisionMgr_vf14(a1 + 648);
    CollisionActor__sub_600034C8((CollisionActor *)a1);
    if ( sub_60003460(a1) == 1 )
      FIELD_U32(a1, 6320) |= 1u;
  }
LABEL_8:
  result = (void *)FIELD_U8(a1, 6320);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 6392) = &unk_60C974C0;
    return &unk_60C974C0;
  }
  return result;
}
