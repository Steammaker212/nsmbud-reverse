/* sub_60606D64
 * address: 0x60606D64   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60606D64(int a1)
{
  StateMethodExecuter *result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  if ( FIELD_F32(a1, 124) > -0.1 )
    FIELD_U32(a1, 124) = -1110651699;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( !FIELD_U32(a1, 6828) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB2B94);
  result = (StateMethodExecuter *)(a1 + 6808);
  if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(a1, 6808) + -6.0) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB2B54);
  return result;
}
