/* Enemy__vfF8
 * address: 0x602A29AC   size: 260   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60383978 : Pokey
bool __fastcall Enemy__vfF8(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  int category; // r0
  int v7; // r1
  _BOOL4 result; // r0
  int v9; // r1
  unsigned int playerId; // r0

  category = FIELD_U32(acOther, 0x8C);
  if ( category == 3 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 8) == 0 )
      return 0;
    v7 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x114))(
           this,
           acSelf,
           acOther);
    result = 1;
    if ( v7 )
      return result;
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category != 7 )
  {
LABEL_12:
    if ( category == 5 && (FIELD_U32(acSelf, 0x94) & 0x20) != 0 )
      return (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x118))(
               this,
               acSelf,
               acOther) != 0;
    return 0;
  }
  if ( (FIELD_U32(acSelf, 0x94) & 0x80) == 0 )
    return 0;
  if ( !(*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x128))(
          this,
          acSelf,
          acOther) )
  {
    category = FIELD_U32(acOther, 0x8C);
    goto LABEL_12;
  }
  v9 = 0;
  playerId = (unsigned __int8)FIELD_U8(acOther, 0x94);
  if ( playerId < 4 )
    v9 = (char)playerId;
  *((_WORD *)&FIELD_U32(acSelf, 0x40)[9].aCollider.info.callback + v9) = 5;
  return 1;
}
