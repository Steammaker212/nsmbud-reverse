/* Enemy__collisionCallback
 * address: 0x602A21B0   size: 980   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall Enemy__collisionCallback(ActiveCollider *acSelf, ActiveCollider *acOther)
{
  char v2; // r12
  Enemy *self; // r7
  Enemy *selfEnemy; // r6
  unsigned int result; // r0
  StageActor *owner; // r5
  StageActor *oterhStageActor; // r7
  char *v10; // r0
  int v11; // t1
  unsigned int otherPlayerId_; // r5
  char *v13; // r0
  int v14; // t1
  unsigned __int8 v15; // [sp+7h] [bp-19h] BYREF

  self = (Enemy *)FIELD_U32(acSelf, 0x40);
  if ( ((unsigned int)dword_60C7B430 & ~(1613373908 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( self )
  {
    selfEnemy = (Enemy *)(*(int (__fastcall **)(Enemy *, int *))FIELD_U32(self, 0x0)._._._.vtable)(self, &Enemy_RTTI);
    if ( selfEnemy )
      selfEnemy = self;
  }
  else
  {
    selfEnemy = 0;
  }
  if ( FIELD_U8(selfEnemy, 0x17F8) )
  {
LABEL_10:
    result = (unsigned __int8)FIELD_U8(acSelf, 0x6E) | 2;
    FIELD_U8(acSelf, 0x6E) = result;
  }
  else
  {
    owner = FIELD_U32(acOther, 0x40);
    if ( ((unsigned int)&dword_60C7B364 & ~(1613374076 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( owner )
    {
      oterhStageActor = (StageActor *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(
                                        owner,
                                        &StageActor_RTTI);
      if ( oterhStageActor )
        oterhStageActor = owner;
    }
    else
    {
      oterhStageActor = 0;
    }
    result = (unsigned __int8)FIELD_U8(oterhStageActor, 0x215) - 1;
    switch ( FIELD_U8(oterhStageActor, 0x215) )
    {
      case 1:                                   // Player
        if ( (FIELD_U32(selfEnemy, 0x1804) & 0x1000000) != 0
          || (result = dword_60CC6484,
              (float)((float)(FIELD_U32(selfEnemy, 0x0)._._.position.y + FIELD_U32(acSelf, 0x74).distToCenter.y) - FIELD_U32(acSelf, 0x74).distToEdge.y) <= FIELD_F32(dword_60CC6484, 124)) )
        {
          if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0xEC))(
                 selfEnemy,
                 acSelf,
                 acOther) == 1 )
            goto LABEL_41;
          result = FIELD_U32(acOther, 0x74).field_14;
          if ( result != 1 )
          {
            result = FIELD_U8(oterhStageActor, 0x54);
            if ( result <= 3 )
            {
              v10 = (char *)selfEnemy + 2 * result;
              v11 = *((unsigned __int16 *)v10 + 3070);
              result = (unsigned int)(v10 + 6140);
              if ( !v11 )
              {
                *(_WORD *)result = 5;
                result = (*(unsigned int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0x108))(
                           selfEnemy,
                           acSelf,
                           acOther);
              }
            }
          }
        }
        break;
      case 2:                                   // Yoshi
        otherPlayerId_ = FIELD_U8(oterhStageActor, 0x54);
        if ( otherPlayerId_ <= 3 )
        {
          if ( FIELD_U32(acOther, 0x74).category == 15 )
          {
            result = (*(unsigned int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable
                                                                                                 + 0xF4))(
                       selfEnemy,
                       acSelf,
                       acOther);
          }
          else
          {
            result = dword_60CC6484;
            if ( (float)((float)(FIELD_U32(selfEnemy, 0x0)._._.position.y + FIELD_U32(acSelf, 0x74).distToCenter.y) - FIELD_U32(acSelf, 0x74).distToEdge.y) <= FIELD_F32(dword_60CC6484, 124) )
            {
              if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0xF8))(
                     selfEnemy,
                     acSelf,
                     acOther) == 1 )
                goto LABEL_41;
              v13 = (char *)selfEnemy + 2 * otherPlayerId_;
              v14 = *((unsigned __int16 *)v13 + 3070);
              result = (unsigned int)(v13 + 6140);
              if ( !v14 )
              {
                *(_WORD *)result = 5;
                result = (*(unsigned int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0x10C))(
                           selfEnemy,
                           acSelf,
                           acOther);
              }
            }
          }
        }
        break;
      case 3:                                   // Enemy
        v15 = 0;
        if ( (*(int (__fastcall **)(Enemy *, unsigned __int8 *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0xF0))(
               selfEnemy,
               &v15,
               acSelf,
               acOther) == 1 )
        {
          result = v15;
          if ( v15 )
            goto LABEL_10;
        }
        else
        {
          if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0xE8))(
                 selfEnemy,
                 acSelf,
                 acOther) == 1 )
            goto LABEL_41;
          result = (*(unsigned int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable
                                                                                               + 0x104))(
                     selfEnemy,
                     acSelf,
                     acOther);
        }
        break;
      case 4:
        result = dword_60CC6484;
        if ( (float)((float)(FIELD_U32(selfEnemy, 0x0)._._.position.y + FIELD_U32(acSelf, 0x74).distToCenter.y) - FIELD_U32(acSelf, 0x74).distToEdge.y) <= FIELD_F32(dword_60CC6484, 124) )
        {
          if ( (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 0xFC))(
                 selfEnemy,
                 acSelf,
                 acOther) == 1 )
            goto LABEL_41;
          result = FIELD_U32(acOther, 0x74).category;
          if ( !result )
            result = (*(unsigned int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable
                                                                                                 + 0x110))(
                       selfEnemy,
                       acSelf,
                       acOther);
        }
        break;
      default:
        result = (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(selfEnemy, 0x0)._._._.vtable + 256))(
                   selfEnemy,
                   acSelf,
                   acOther);
        if ( result == 1 )
        {
LABEL_41:
          FIELD_U8(selfEnemy, 0x1898) = 1;
          goto LABEL_10;
        }
        break;
    }
  }
  return result;
}
