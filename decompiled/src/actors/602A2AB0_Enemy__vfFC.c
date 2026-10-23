/* Enemy__vfFC
 * address: 0x602A2AB0   size: 220   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall Enemy__vfFC(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  int category; // r0
  int v7; // r1
  _BOOL4 result; // r0
  int v9; // r1

  category = FIELD_U32(acOther, 0x74).category;
  if ( category == 3 )
  {
    if ( (FIELD_U32(acSelf, 0x74).mask & 8) == 0 )
      return 0;
    v7 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x154))(
           this,
           acSelf,
           acOther);
    result = 1;
    if ( v7 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
  }
  if ( category != 24 )
    goto LABEL_9;
  if ( (FIELD_U32(acSelf, 0x74).mask & 0x1000000) != 0 )
  {
    v9 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x14C))(
           this,
           acSelf,
           acOther);
    result = 1;
    if ( v9 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
LABEL_9:
    if ( category == 26 && (FIELD_U32(acSelf, 0x74).mask & 0x4000000) != 0 )
      return (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x150))(
               this,
               acSelf,
               acOther) != 0;
  }
  return 0;
}
