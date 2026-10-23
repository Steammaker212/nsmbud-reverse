/* BoomBoomBase__collisionPlayer
 * address: 0x60050E68   size: 892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024E78
// 
// Overridden by: None
unsigned int __fastcall BoomBoomBase__collisionPlayer(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  unsigned int result; // r0
  char v7; // r12
  StageActor *owner; // r7
  int v9; // r9
  StageActor *v10; // r8
  unsigned int playerId; // r0
  int *v12; // r10
  unsigned int v13; // r0
  int v14; // r1
  float v15; // s0
  float v16; // s16
  float v17; // s0

  if ( (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 884))(a1) == 1 )
    return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  result = Enemy__processCollision(a1, a2, a3, 2);
  switch ( result )
  {
    case 0u:
      owner = FIELD_U32(a3, 0x40);
      if ( ((unsigned int)&dword_60C7B374 & ~(1610944304 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( owner )
      {
        v9 = 0;
        v10 = 0;
        if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B370) == 1 )
        {
          playerId = FIELD_U8(owner, 0x54);
          v9 = 1;
          if ( playerId > 3 || (v12 = &FIELD_U32(a1, 0x0) + playerId, v12[1579] < 1) )
          {
            v10 = owner;
          }
          else
          {
            v10 = owner;
            if ( owner[2]._.field_20.previous == (sead_ListNode *)3 )
            {
              sub_602A3178(owner, &dword_60CC4B7C);
              (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 404))(a1);
              (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 408))(a1, owner);
              v12[1579] = 16;
              return 6316;
            }
          }
        }
      }
      else
      {
        v9 = 0;
        v10 = 0;
      }
      if ( FIELD_F32(a1, 0x7C) <= 1.0
        || (ActiveCollider_getCenterY(a2), v16 = v15, ActiveCollider_getCenterY(a3), v16 >= v17) )
      {
        result = Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
        if ( v9 == 1 )
        {
          result = BYTE1(v10[1].effectOffset.x);
          if ( (result & 1) != 0 )
          {
            result = FIELD_U8(v10, 0x54);
            if ( result <= 3 )
            {
              result = (unsigned int)a1 + 2 * result;
              FIELD_U16(result, 6140) = 32;
            }
          }
        }
      }
      else
      {
        result = v9 & ((*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 888))(a1) ^ 1);
        if ( result == 1 )
        {
          if ( v10[2]._.field_20.previous == (sead_ListNode *)3 )
          {
            sub_602A3178(v10, &dword_60CC4B7C);
            (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 404))(a1);
            (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 408))(a1, v10);
            v13 = (unsigned __int8)FIELD_U8(v10, 0x54);
            goto LABEL_17;
          }
          (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 804))(a1, FIELD_U32(a3, 0x40));
          result = sub_602A3178(v10, &dword_60CC4B7C);
        }
      }
      break;
    case 1u:
    case 3u:
      result = (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 888))(a1);
      if ( !result )
        result = (*(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 804))(a1, FIELD_U32(a3, 0x40));
      break;
    case 2u:
      result = (unsigned int)FIELD_U32(a3, 0x40);
      if ( result )
      {
        v13 = FIELD_U8(result, 84);
LABEL_17:
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
