/* sub_606FCB80
 * address: 0x606FCB80   size: 1592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606FCB80(ActiveCollider *a1, int a2)
{
  char v2; // r12
  StageActor *owner; // r4
  int *p_vtable; // r5
  int v7; // r4
  int v8; // r0
  float v9; // s18
  float v10; // s16
  char v11; // r12
  StateBase *CurrentState; // r0
  int v13; // r7
  char v14; // r12
  _DWORD *v15; // r6
  int *v16; // r0
  int *v17; // r5
  int v18; // t1
  float Left; // s16
  float Right; // s16
  char v21; // r12
  int *v22; // r5
  int v23; // t1
  float v24; // s16
  float v25; // s16
  char v26; // r12

  if ( (FIELD_U8(a2, 150) & 0x40) == 0 )
    return;
  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60C8473C & ~(1617939384 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8473C) )
  {
    dword_60C84738 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8473C);
  }
  if ( owner )
  {
    p_vtable = (int *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C84738);
    if ( p_vtable )
      p_vtable = &FIELD_U32(owner, 0x0);
  }
  else
  {
    p_vtable = 0;
  }
  v7 = FIELD_U32(a2, 64);
  v8 = FIELD_U8(v7, 533);
  if ( (unsigned int)(v8 - 1) < 2 )
  {
    Left = ActiveCollider_getLeft((ActiveCollider *)a2);
    if ( Left < ActiveCollider_getLeft(a1) )
      return;
    Right = ActiveCollider_getRight((ActiveCollider *)a2);
    if ( Right > ActiveCollider_getRight(a1) )
      return;
    v15 = p_vtable + 1824;
    if ( p_vtable[1824] > 5 )
      return;
    if ( ((unsigned int)&dword_60C7B37C & ~(1617940248 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v7 || (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) != 1 || sub_60774AEC(v7, 1) != 1 )
      return;
LABEL_47:
    v16 = p_vtable + 1825;
    if ( p_vtable[1825] )
    {
      v16 = p_vtable + 1834;
      if ( p_vtable[1834] )
      {
        v16 = p_vtable + 1843;
        if ( p_vtable[1843] )
        {
          v16 = p_vtable + 1852;
          if ( p_vtable[1852] )
          {
            v16 = p_vtable + 1861;
            if ( p_vtable[1861] )
            {
              v23 = p_vtable[1870];
              v22 = p_vtable + 1870;
              if ( v23 )
                return;
              v16 = v22;
            }
          }
        }
      }
    }
LABEL_54:
    *v16 = FIELD_U32(v7, 8);
    v16[2] = FIELD_U32(v7, 108);
    v16[3] = FIELD_U32(v7, 112);
    v16[4] = 0;
    v16[8] = 0;
    *((_BYTE *)v16 + 24) = 1;
    ++*v15;
    return;
  }
  if ( !FIELD_U8(v7, 533) )
  {
    if ( ((unsigned int)&dword_60C7B418 & ~(1617940568 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
    {
      dword_60C7B414 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B418);
    }
    if ( !v7 )
      return;
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B414) != 1 )
      return;
    if ( !FIELD_U8(v7, 6199) )
      return;
    v24 = ActiveCollider_getLeft((ActiveCollider *)a2);
    if ( v24 < ActiveCollider_getLeft(a1) )
      return;
    v25 = ActiveCollider_getRight((ActiveCollider *)a2);
    if ( v25 > ActiveCollider_getRight(a1) )
      return;
    v15 = p_vtable + 1824;
    if ( p_vtable[1824] > 5 )
      return;
    if ( ((unsigned int)&dword_60C7B394 & ~(1617940784 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &CollisionActor_RTTI) != 1
      || (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 148))(v7) )
    {
      return;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
    goto LABEL_47;
  }
  if ( v8 == 3 )
  {
    v9 = ActiveCollider_getLeft(a1);
    v10 = ActiveCollider_getRight(a1);
    if ( ((unsigned int)&dword_60C84734 & ~(1617939572 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C84734) )
    {
      dword_60C84730 = (int)&off_60BC8314;
      _cxa_guard_release(&dword_60C84734);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C84730) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
        v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v13 != (*(int (**)(void))(dword_60C84640 + 8))() )
        {
          v10 = v10 + 12.5;
          v9 = v9 + -12.5;
        }
      }
    }
    if ( ActiveCollider_getLeft((ActiveCollider *)a2) >= v9 && ActiveCollider_getRight((ActiveCollider *)a2) <= v10 )
    {
      v15 = p_vtable + 1824;
      if ( p_vtable[1824] <= 5 )
      {
        if ( ((unsigned int)&dword_60C7B394 & ~(1617939820 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
        {
          CollisionActor_RTTI = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B394);
        }
        if ( v7
          && (**(int (__fastcall ***)(int, int *))v7)(v7, &CollisionActor_RTTI) == 1
          && !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 148))(v7) )
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 132))(v7, 1);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
          v16 = p_vtable + 1825;
          if ( p_vtable[1825] )
          {
            v16 = p_vtable + 1834;
            if ( p_vtable[1834] )
            {
              v16 = p_vtable + 1843;
              if ( p_vtable[1843] )
              {
                v16 = p_vtable + 1852;
                if ( p_vtable[1852] )
                {
                  v16 = p_vtable + 1861;
                  if ( p_vtable[1861] )
                  {
                    v18 = p_vtable[1870];
                    v17 = p_vtable + 1870;
                    if ( v18 )
                      return;
                    v16 = v17;
                  }
                }
              }
            }
          }
          goto LABEL_54;
        }
      }
    }
  }
}
