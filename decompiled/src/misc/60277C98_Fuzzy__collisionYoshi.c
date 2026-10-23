/* Fuzzy__collisionYoshi
 * address: 0x60277C98   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D78
// 
// Overridden by: None
int __fastcall Fuzzy__collisionYoshi(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0
  StageActor *owner; // r5
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  if ( !Enemy__processCollision(a1, a2, a3, 2) )
    return Enemy__collisionYoshi(a1, a2, a3);
  v8[0] = a2;
  v8[1] = a3;
  result = sub_602A8B10((int)&a1[1]._._._.aCollider.node4.prev, (int)v8);
  if ( result == 1 )
  {
    owner = FIELD_U32(a3, 0x40);
    if ( owner )
    {
      sub_602A3520((float *)&FIELD_U32(a1, 0x0), "SE_EMY_YOSHI_STEP", 0);
      return (*(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 380))(a1, owner);
    }
  }
  return result;
}
