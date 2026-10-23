/* Actor__dtor
 * address: 0x60002D98   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60000500 : StageActor
Actor *__fastcall Actor__dtor(Actor *this)
{
  char *v1; // r6
  sead_ListNode *next; // r0
  bool v4; // zf
  int v5; // r1
  Actor *parent; // r5

  FIELD_U32(this, 0x0) = (int)&Actor__vtable;
  if ( FIELD_U32(this, 0x28) >= 1 )
  {
    do
    {
      next = FIELD_U32(this, 0x24);
      v4 = next == 0;
      if ( next )
      {
        v5 = FIELD_U32(this, 0x2C);
        v1 = (char *)next - v5;
        v4 = next == (sead_ListNode *)v5;
      }
      if ( v4 )
        break;
      sead__ListNode__erase(next);
      --FIELD_U32(this, 0x28);
      *((_DWORD *)v1 + 14) = 0;
    }
    while ( FIELD_U32(this, 0x28) > 0 );
  }
  parent = FIELD_U32(this, 0x38);
  if ( parent )
  {
    sead__ListNode__erase((char *)this + FIELD_U32(parent, 0x2C));
    --FIELD_U32(parent, 0x28);
    FIELD_U32(this, 0x38) = 0;
  }
  return this;
}
