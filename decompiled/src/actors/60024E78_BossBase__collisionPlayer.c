/* BossBase__collisionPlayer
 * address: 0x60024E78   size: 556   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2D54
// 
// Overridden by:
//   - 0x60050E68 : BoomBoomBase
//   - 0x600306C0 : SumoBrosBoss
//   - 0x60071610 : FinalBowser
//   - 0x600C6550 : Bowser
//   - 0x600CEFE8 : BowserJrBase
unsigned int __fastcall BossBase__collisionPlayer(BossBase *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  unsigned int result; // r0
  char v7; // r12
  StageActor *owner; // r6
  unsigned int playerId; // r0
  int *v10; // r8
  _DWORD *v11; // r8
  int v12; // t1
  unsigned int v13; // r0
  int v14; // r1

  if ( (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x374))(a1) == 1 )
    return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  result = Enemy__processCollision(&FIELD_U32(a1, 0x0), a2, a3, 2);
  switch ( result )
  {
    case 0u:
      owner = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B374 & ~(1610764084 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( !owner || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B370) != 1 )
        return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
      playerId = FIELD_U8(owner, 0x54);
      if ( playerId <= 3
        && (v10 = &FIELD_U32(a1, 0x0) + playerId, v12 = v10[1579], v11 = v10 + 1579, v12 >= 1)
        && FIELD_U32(owner + (2) * 644, 0x20) == (sead_ListNode *)3 )
      {
        sub_602A3178(owner, &dword_60CC4B7C);
        (*(void (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x194))(a1);
        (*(void (__fastcall **)(BossBase *, StageActor *))(FIELD_U32(a1, 0x0) + 0x198))(a1, owner);
        *v11 = 16;
        result = 16;
      }
      else
      {
        Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
        result = BYTE1(owner[1].effectOffset.x);
        if ( (result & 1) != 0 )
        {
          result = FIELD_U8(owner, 0x54);
          if ( result <= 3 )
          {
            result = (unsigned int)a1 + 2 * result;
            FIELD_U16(result, 6140) = 32;
          }
        }
      }
      break;
    case 1u:
    case 3u:
      result = (*(int (__fastcall **)(BossBase *))(FIELD_U32(a1, 0x0) + 0x378))(a1);
      if ( !result )
        result = (*(unsigned int (__fastcall **)(BossBase *, StageActor *))(FIELD_U32(a1, 0x0) + 0x324))(
                   a1,
                   FIELD_U32(a3, 0x40));
      break;
    case 2u:
      result = (unsigned int)FIELD_U32(a3, 0x40);
      if ( result )
      {
        v13 = FIELD_U8(result, 84);
        v14 = 0;
        if ( v13 < 4 )
          v14 = (char)v13;
        result = (unsigned int)a1 + 4 * v14;
        FIELD_U32(result, 6316) = 16;
      }
      break;
    default:
      return result;
  }
  return result;
}
