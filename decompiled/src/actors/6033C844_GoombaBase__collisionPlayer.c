/* GoombaBase__collisionPlayer
 * address: 0x6033C844   size: 264   group: actors
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
int __fastcall GoombaBase__collisionPlayer(Enemy *this, ActiveCollider *self, ActiveCollider *other)
{
  StageActor *otherActor; // r6
  int collisionType; // r0
  StageActor *v8; // r4
  StageActor *owner; // r4

  otherActor = FIELD_U32(other, 0x40);
  collisionType = Enemy__processCollision(this, self, other, 0);
  if ( collisionType == 3 )
  {
    collisionType = (*(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 660))(this, otherActor);
    owner = FIELD_U32(self, 0x40);
    if ( owner )
    {
      collisionType = Actor__getProfileId(&FIELD_U32(owner, 0x0));
      if ( collisionType == 0x1D3 )
      {
        collisionType = BYTE1(owner[10].aCollider.field_4C);
        if ( !BYTE1(owner[10].aCollider.field_4C) )
          return sub_603FFD60(dword_60C99DD4 + 852);
      }
    }
  }
  else if ( collisionType != 2 )
  {
    if ( collisionType == 1 )
    {
      collisionType = (*(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(this, 0x0)._._._.vtable + 652))(this, otherActor);
      v8 = FIELD_U32(self, 0x40);
      if ( v8 )
      {
        collisionType = Actor__getProfileId(&FIELD_U32(v8, 0x0));
        if ( collisionType == 0x1D3 )
        {
          collisionType = BYTE1(v8[10].aCollider.field_4C);
          if ( !BYTE1(v8[10].aCollider.field_4C) )
            return sub_603FFD60(dword_60C99DD4 + 852);
        }
      }
    }
    else
    {
      return Enemy__collisionPlayer((int)this, (int)self, (int)other);
    }
  }
  return collisionType;
}
