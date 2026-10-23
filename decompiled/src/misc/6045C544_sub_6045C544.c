/* sub_6045C544
 * address: 0x6045C544   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045C544(int a1)
{
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = FIELD_U32(a1, 6324) - 1;
  FIELD_U32(a1, 6324) = result;
  if ( !result )
  {
    result = 1143111680;
    FIELD_U32(a1, 116) = 1143111680;
  }
  if ( FIELD_F32(a1, 124) <= 0.0 )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9D004);
  return result;
}
