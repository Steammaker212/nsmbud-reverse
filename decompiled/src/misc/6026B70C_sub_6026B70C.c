/* sub_6026B70C
 * address: 0x6026B70C   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6026B70C(Enemy *a1, int a2, ActiveCollider *a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  char v8; // r12
  StageActor *owner; // r6
  int v10; // r0
  float Bottom; // s16
  StageActor *v12; // r7
  StageActor *v13; // r1
  float y; // r3
  int vtable; // r0
  Vec2 v16; // [sp+0h] [bp-28h] BYREF

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 != (*(int (**)(void))(dword_60C8E774 + 8))() )
    return;
  if ( &FIELD_U32(a1, 0xBC) != (ActiveCollider *)a2 )
    goto LABEL_3;
  v10 = Enemy__processCollision(a1, (ActiveCollider *)a2, a3, 0);
  if ( v10 )
  {
    FIELD_U32(a2, 120) = 0;
    if ( v10 == 2 )
      return;
  }
  else
  {
    if ( !LOBYTE(a1[1]._._._._.field_20.next)
      || (Bottom = ActiveCollider_getBottom((ActiveCollider *)a2), Bottom > ActiveCollider_getCenterY(a3)) )
    {
      FIELD_U32(a2, 120) = 0;
LABEL_3:
      if ( FIELD_U32(a3, 0x88) != 15 )
      {
        owner = FIELD_U32(a3, 0x40);
        if ( ((unsigned int)&dword_60C7B37C & ~(1613150088 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( owner )
        {
          if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
            (*(void (__fastcall **)(StageActor *, int, ActiveCollider *))(FIELD_U32(owner, 0x0) + 1164))(owner, a2, a3);
        }
      }
      return;
    }
    v12 = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613150344 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v12 && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v12, 0x0))(v12, &dword_60C7B378) == 1 )
    {
      if ( FIELD_U8(v12, 0x215) == 1 )
      {
        if ( v12[2]._.field_20.previous == (sead_ListNode *)3 )
        {
          (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 388))(a1, v12);
          (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 404))(a1);
          (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 408))(a1, v12);
        }
        else
        {
          vtable = FIELD_U32(a1, 0x0);
          if ( (v12[1].profileFlags & 0x40) != 0 )
          {
            (*(void (__fastcall **)(Enemy *, StageActor *))(vtable + 400))(a1, v12);
            sub_602A3124(a1, v12);
            (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 372))(a1, v12);
            sub_602A3160(a1, v12);
          }
          else
          {
            (*(void (__fastcall **)(Enemy *, StageActor *))(vtable + 392))(a1, v12);
            (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 396))(a1, v12);
            (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 372))(a1, v12);
            (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 376))(a1, v12);
          }
        }
      }
      else
      {
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 412))(a1, v12);
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 380))(a1, v12);
        (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 384))(a1, v12);
      }
    }
    FIELD_U32(a2, 120) = 0;
  }
  if ( *(_DWORD *)&a1[1]._._._._.field_10 == 1 )
  {
    FIELD_F32(a1, 0x90) = 2.0;
    FIELD_F32(a1, 0x94) = 2.0;
    FIELD_F32(a1, 0x98) = 2.0;
  }
  v13 = FIELD_U32(a3, 0x40);
  y = FIELD_F32(a1, 0x7C);
  v16.x = FIELD_F32(a1, 0x78);
  v16.y = y;
  Enemy_killWithState(a1, v13, &v16, (int)&stru_60C906EC);
}
