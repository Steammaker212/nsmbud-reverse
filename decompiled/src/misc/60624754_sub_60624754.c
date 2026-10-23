/* sub_60624754
 * address: 0x60624754   size: 2244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60624754(ActiveCollider *a1, int a2)
{
  char v2; // r12
  StageActor *owner; // r4
  int *p_vtable; // r5
  int v7; // r4
  int v8; // r0
  float v9; // s16
  float v10; // s16
  char v11; // r12
  _DWORD *v12; // r7
  int v13; // r0
  float v14; // r1
  int *v15; // r0
  int *v16; // r5
  int v17; // t1
  float Left; // s16
  float Right; // s16
  char v20; // r12
  _DWORD *v21; // r6
  int v22; // r0
  int *v23; // r0
  int *v24; // r5
  int v25; // t1
  char v26; // r12
  float v27; // s16
  float v28; // s16
  char v29; // r12
  int v30; // r0
  char v31; // r12
  Vec3 v32; // [sp+0h] [bp-30h] BYREF

  if ( (FIELD_U8(a2, 150) & 0x40) == 0 )
    return;
  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60CB3BF8 & ~(1617053588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3BF8) )
  {
    dword_60CB3BF4 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3BF8);
  }
  if ( owner )
  {
    p_vtable = (int *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60CB3BF4);
    if ( p_vtable )
      p_vtable = &FIELD_U32(owner, 0x0).vtable;
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
    v21 = p_vtable + 1617;
    if ( p_vtable[1617] > 9 )
      return;
    v22 = FIELD_U32(v7, 8);
    if ( p_vtable[1618] == v22
      || p_vtable[1627] == v22
      || p_vtable[1636] == v22
      || p_vtable[1645] == v22
      || p_vtable[1654] == v22
      || p_vtable[1663] == v22
      || p_vtable[1672] == v22
      || p_vtable[1681] == v22
      || p_vtable[1690] == v22
      || p_vtable[1699] == v22 )
    {
      return;
    }
    if ( ((unsigned int)&dword_60C7B37C & ~(1617054708 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) != 1 || sub_60774AEC(v7, 0) != 1 )
      return;
LABEL_63:
    v23 = p_vtable + 1618;
    if ( p_vtable[1618] )
    {
      v23 = p_vtable + 1627;
      if ( p_vtable[1627] )
      {
        v23 = p_vtable + 1636;
        if ( p_vtable[1636] )
        {
          v23 = p_vtable + 1645;
          if ( p_vtable[1645] )
          {
            v23 = p_vtable + 1654;
            if ( p_vtable[1654] )
            {
              v23 = p_vtable + 1663;
              if ( p_vtable[1663] )
              {
                v23 = p_vtable + 1672;
                if ( p_vtable[1672] )
                {
                  v23 = p_vtable + 1681;
                  if ( p_vtable[1681] )
                  {
                    v23 = p_vtable + 1690;
                    if ( p_vtable[1690] )
                    {
                      v25 = p_vtable[1699];
                      v24 = p_vtable + 1699;
                      if ( v25 )
                        return;
                      v23 = v24;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *v23 = FIELD_U32(v7, 8);
    v23[2] = FIELD_U32(v7, 108);
    v23[3] = FIELD_U32(v7, 112);
    v23[4] = 0;
    v23[8] = 0;
    *((_BYTE *)v23 + 24) = 1;
    ++*v21;
    return;
  }
  if ( (unsigned int)(v8 - 3) < 2 )
  {
    v9 = ActiveCollider_getLeft((ActiveCollider *)a2);
    if ( v9 >= ActiveCollider_getLeft(a1) )
    {
      v10 = ActiveCollider_getRight((ActiveCollider *)a2);
      if ( v10 <= ActiveCollider_getRight(a1) )
      {
        v12 = p_vtable + 1617;
        if ( p_vtable[1617] <= 9 )
        {
          v13 = FIELD_U32(v7, 8);
          if ( p_vtable[1618] != v13
            && p_vtable[1627] != v13
            && p_vtable[1636] != v13
            && p_vtable[1645] != v13
            && p_vtable[1654] != v13
            && p_vtable[1663] != v13
            && p_vtable[1672] != v13
            && p_vtable[1681] != v13
            && p_vtable[1690] != v13
            && p_vtable[1699] != v13 )
          {
            if ( ((unsigned int)&dword_60C7B394 & ~(1617053996 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
            {
              CollisionActor_RTTI = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B394);
            }
            if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &CollisionActor_RTTI) == 1
              && !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 148))(v7) )
            {
              if ( FIELD_U32(a2, 140) == 9 )
              {
                v14 = FIELD_F32(v7, 112);
                v32.x = FIELD_F32(v7, 108);
                v32.y = v14;
                v32.z = 4500.0;
                EffectData_create(298, &v32, 0, 0);
              }
              (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
              v15 = p_vtable + 1618;
              if ( p_vtable[1618] )
              {
                v15 = p_vtable + 1627;
                if ( p_vtable[1627] )
                {
                  v15 = p_vtable + 1636;
                  if ( p_vtable[1636] )
                  {
                    v15 = p_vtable + 1645;
                    if ( p_vtable[1645] )
                    {
                      v15 = p_vtable + 1654;
                      if ( p_vtable[1654] )
                      {
                        v15 = p_vtable + 1663;
                        if ( p_vtable[1663] )
                        {
                          v15 = p_vtable + 1672;
                          if ( p_vtable[1672] )
                          {
                            v15 = p_vtable + 1681;
                            if ( p_vtable[1681] )
                            {
                              v15 = p_vtable + 1690;
                              if ( p_vtable[1690] )
                              {
                                v17 = p_vtable[1699];
                                v16 = p_vtable + 1699;
                                if ( v17 )
                                  return;
                                v15 = v16;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *v15 = FIELD_U32(v7, 8);
              v15[2] = FIELD_U32(v7, 108);
              v15[3] = FIELD_U32(v7, 112);
              v15[4] = 0;
              v15[8] = 0;
              *((_BYTE *)v15 + 24) = 1;
              ++*v12;
              return;
            }
          }
        }
      }
    }
    return;
  }
  if ( FIELD_U8(v7, 533) )
    return;
  if ( Actor__getProfileId(*(Actor **)(a2 + 64)) == 392 )
  {
    if ( ((unsigned int)&dword_60C7B39C & ~(1617055132 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B398) == 1 )
      FIELD_U8(v7, 7526) = 1;
    return;
  }
  v27 = ActiveCollider_getLeft((ActiveCollider *)a2);
  if ( v27 >= ActiveCollider_getLeft(a1) )
  {
    v28 = ActiveCollider_getRight((ActiveCollider *)a2);
    if ( v28 <= ActiveCollider_getRight(a1) )
    {
      v21 = p_vtable + 1617;
      if ( p_vtable[1617] <= 9 )
      {
        v30 = FIELD_U32(v7, 8);
        if ( p_vtable[1618] != v30
          && p_vtable[1627] != v30
          && p_vtable[1636] != v30
          && p_vtable[1645] != v30
          && p_vtable[1654] != v30
          && p_vtable[1663] != v30
          && p_vtable[1672] != v30
          && p_vtable[1681] != v30
          && p_vtable[1690] != v30
          && p_vtable[1699] != v30 )
        {
          if ( ((unsigned int)&dword_60C7B418 & ~(1617055508 << v29) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
          {
            dword_60C7B414 = (int)&off_60BC00C8;
            _cxa_guard_release(&dword_60C7B418);
          }
          if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B414) == 1 && FIELD_U8(v7, 6199) )
          {
            if ( ((unsigned int)&dword_60C7B394 & ~(1617055632 << v31) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
            {
              CollisionActor_RTTI = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B394);
            }
            if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &CollisionActor_RTTI) == 1
              && !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 148))(v7) )
            {
              (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
              goto LABEL_63;
            }
          }
        }
      }
    }
  }
}
