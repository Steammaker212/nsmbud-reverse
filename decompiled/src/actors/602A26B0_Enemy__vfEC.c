/* Enemy__vfEC
 * address: 0x602A26B0   size: 676   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall Enemy__vfEC(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  char v3; // r12
  int category; // r0
  signed int v8; // r7
  StageActor *owner; // r6
  int v10; // r0

  category = FIELD_U32(acOther, 0x8C);
  if ( category == 3 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 8) == 0 )
      return 0;
    v8 = 1;
    if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x114))(
           this,
           acSelf,
           acOther) )
    {
      return v8;
    }
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category == 7 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 0x80) == 0 )
      return 0;
    owner = FIELD_U32(acOther, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613375272 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v8 = 0;
    v10 = 0;
    if ( owner )
    {
      v10 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378);
      if ( v10 )
        v10 = (int)owner;
    }
    if ( sub_6075F914(v10) )
      return v8;
    v8 = 1;
    if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x124))(
           this,
           acSelf,
           acOther) )
    {
      return v8;
    }
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category == 5 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 0x20) == 0 )
      return 0;
    v8 = 1;
    if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x118))(
           this,
           acSelf,
           acOther) )
    {
      return v8;
    }
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category == 10 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 0x400) == 0 )
      return 0;
    v8 = 0;
    if ( (FIELD_U32(this, 0x1804) & 0x200) != 0 )
      return v8;
    v8 = 1;
    if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x12C))(
           this,
           acSelf,
           acOther) )
    {
      return v8;
    }
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category == 13 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 0x2000) == 0 )
      return 0;
    v8 = 1;
    if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x11C))(
           this,
           acSelf,
           acOther) )
    {
      return v8;
    }
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category == 17 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 0x20000) == 0 )
      return 0;
    v8 = 1;
    if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x130))(
           this,
           acSelf,
           acOther) )
    {
      return v8;
    }
    category = FIELD_U32(acOther, 0x8C);
  }
  if ( category == 8 )
  {
    if ( (FIELD_U32(acSelf, 0x94) & 0x100) != 0 )
    {
      v8 = 1;
      if ( !(*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x120))(
              this,
              acSelf,
              acOther) )
      {
        category = FIELD_U32(acOther, 0x8C);
        goto LABEL_37;
      }
      return v8;
    }
    return 0;
  }
LABEL_37:
  if ( category != 25 || (FIELD_U32(acSelf, 0x94) & 0x2000000) == 0 )
    return 0;
  return (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x134))(
           this,
           acSelf,
           acOther) != 0;
}
