/* FixedIcicle__collisionPlayer
 * address: 0x60624318   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D54
// 
// Overridden by: None
int __fastcall FixedIcicle__collisionPlayer(FixedIcicle *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  StageActor *other; // r6
  int result; // r0
  bool otherIsNull; // zf

  result = FIELD_U32(acOther, 0x88);
  otherIsNull = result == 15;
  if ( result != 15 )
  {
    other = FIELD_U32(acOther, 0x40);
    otherIsNull = other == 0;
  }
  if ( !otherIsNull )
  {
    result = (*(int (__fastcall **)(StageActor *))(FIELD_U32(other, 0x0) + 1156))(other);
    if ( !result )
      return (*(int (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(other, 0x0) + 1164))(
               other,
               acSelf,
               acOther);
  }
  return result;
}
