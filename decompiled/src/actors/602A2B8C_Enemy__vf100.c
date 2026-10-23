/* Enemy__vf100
 * address: 0x602A2B8C   size: 452   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6007205C : FinalBowser
//   - 0x6039FE58 : ShellEnemy
bool __fastcall Enemy__vf100(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  int category; // r0
  int v7; // r1
  _BOOL4 result; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1

  category = FIELD_U32(acOther, 0x74).category;
  if ( category == 9 )
  {
    v7 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x138))(
           this,
           acSelf,
           acOther);
    result = 1;
    if ( v7 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
  }
  if ( category == 1 )
  {
    if ( (FIELD_U32(acSelf, 0x74).mask & 2) == 0 )
      return 0;
    v9 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x13C))(
           this,
           acSelf,
           acOther);
    result = 1;
    if ( v9 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
  }
  if ( category == 20 )
  {
    if ( (FIELD_U32(acSelf, 0x74).mask & 0x100000) == 0 )
      return 0;
    v10 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x148))(
            this,
            acSelf,
            acOther);
    result = 1;
    if ( v10 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
  }
  if ( category == 14 )
  {
    v11 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x13C))(
            this,
            acSelf,
            acOther);
    result = 1;
    if ( v11 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
  }
  if ( category == 2 )
  {
    if ( (FIELD_U32(acSelf, 0x74).mask & 4) == 0 )
      return 0;
    v12 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x140))(
            this,
            acSelf,
            acOther);
    result = 1;
    if ( v12 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
  }
  if ( category != 21 )
    goto LABEL_23;
  if ( (FIELD_U32(acSelf, 0x74).mask & 0x200000) != 0 )
  {
    v13 = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x140))(
            this,
            acSelf,
            acOther);
    result = 1;
    if ( v13 )
      return result;
    category = FIELD_U32(acOther, 0x74).category;
LABEL_23:
    if ( category == 19 && (FIELD_U32(acSelf, 0x74).mask & 0x80000) != 0 )
      return (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0)._._._.vtable + 0x144))(
               this,
               acSelf,
               acOther) != 0;
  }
  return 0;
}
