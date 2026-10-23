/* sub_60300F64
 * address: 0x60300F64   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_60300F64(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  Enemy *owner; // r5
  Enemy *result; // r0
  unsigned int playerId; // r0
  int v9; // r1

  owner = (Enemy *)FIELD_U32(acOther, 0x40);
  result = (Enemy *)sub_602A20D8();
  if ( !result )
  {
    Enemy__vfC8(this, (int)acSelf, (int)acOther);
    result = (Enemy *)FIELD_U32(acOther, 0x74).category;
    if ( result == (Enemy *)10 )
    {
      playerId = (unsigned __int8)FIELD_U32(owner, 0x0)._._.playerId;
      v9 = 0;
      if ( playerId < 4 )
        v9 = (char)playerId;
      result = (Enemy *)((char *)this + 2 * v9);
      FIELD_U32(result, 0x17FC) = 28;
    }
  }
  return result;
}
