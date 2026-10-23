/* GoombaBase__collisionYoshi
 * address: 0x6033C95C   size: 308   group: actors
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
int __fastcall GoombaBase__collisionYoshi(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  int v8; // r4
  StageActor *v9; // r7
  int result; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614006656 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner )
  {
    v8 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378);
    if ( v8 )
      v8 = (int)owner;
  }
  else
  {
    v8 = 0;
  }
  v9 = FIELD_U32(a2, 0x40);
  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( !result )
    return Enemy__collisionYoshi((int)a1, (int)a2, (int)a3);
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(Enemy *, int))(FIELD_U32(a1, 0x0) + 664))(a1, v8);
    if ( v9 )
    {
      result = Actor__getProfileId(&FIELD_U32(v9, 0x0));
      if ( result == 467 )
      {
        result = BYTE1(v9[10].aCollider.field_4C);
        if ( !BYTE1(v9[10].aCollider.field_4C) )
          return sub_603FFD60(dword_60C99DD4 + 852);
      }
    }
  }
  return result;
}
