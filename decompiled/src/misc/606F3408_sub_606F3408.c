/* sub_606F3408
 * address: 0x606F3408   size: 2932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606F3408(ActiveCollider *a1, int a2)
{
  char v2; // r12
  StageActor *owner; // r4
  int v6; // r5
  int v7; // r4
  int v8; // r0
  float Left; // s16
  float Right; // s16
  char v11; // r12
  _DWORD *v12; // r7
  int v13; // r0
  float v14; // r1
  int v15; // r0
  int v16; // r5
  int v17; // t1
  float v18; // s0
  float v19; // s18
  float v20; // s16
  ActiveCollider *v21; // r0
  float v22; // s16
  char v23; // r12
  int v24; // r6
  float v25; // s0
  float v26; // s16
  float v27; // s16
  _DWORD *v28; // r6
  int v29; // r0
  char v30; // r12
  int v31; // r0
  float v32; // s16
  float v33; // s16
  int v34; // r0
  int v35; // r0
  int v36; // r5
  int v37; // t1
  Vec3 v38; // [sp+0h] [bp-38h] BYREF

  if ( (FIELD_U8(a2, 150) & 0x40) == 0 )
    return;
  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)dword_60C98A98 & ~(1617900616 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C98A98) )
  {
    dword_60C98A94 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C98A98);
  }
  if ( owner )
  {
    v6 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C98A94);
    if ( v6 )
      v6 = (int)owner;
  }
  else
  {
    v6 = 0;
  }
  v7 = FIELD_U32(a2, 64);
  v8 = FIELD_U8(v7, 533);
  if ( (unsigned int)(v8 - 1) >= 2 )
  {
    if ( (unsigned int)(v8 - 3) < 2 )
    {
      Left = ActiveCollider_getLeft((ActiveCollider *)a2);
      if ( Left >= ActiveCollider_getLeft(a1) )
      {
        Right = ActiveCollider_getRight((ActiveCollider *)a2);
        if ( Right <= ActiveCollider_getRight(a1) )
        {
          v12 = (_DWORD *)(v6 + 6520);
          if ( FIELD_S32(v6, 6520) <= 9 )
          {
            v13 = FIELD_U32(v7, 8);
            if ( FIELD_U32(v6, 6524) != v13
              && FIELD_U32(v6, 6560) != v13
              && FIELD_U32(v6, 6596) != v13
              && FIELD_U32(v6, 6632) != v13
              && FIELD_U32(v6, 6668) != v13
              && FIELD_U32(v6, 6704) != v13
              && FIELD_U32(v6, 6740) != v13
              && FIELD_U32(v6, 6776) != v13
              && FIELD_U32(v6, 6812) != v13
              && FIELD_U32(v6, 6848) != v13 )
            {
              if ( ((unsigned int)&dword_60C7B394 & ~(1617901024 << v11) & 1) == 0
                && _cxa_guard_acquire(&dword_60C7B394) )
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
                  v38.x = FIELD_F32(v7, 108);
                  v38.y = v14;
                  v38.z = 4500.0;
                  EffectData_create(299, &v38, 0, 0);
                }
                (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 132))(v7, 1);
                (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
                v15 = v6 + 6524;
                if ( FIELD_U32(v6, 6524) )
                {
                  v15 = v6 + 6560;
                  if ( FIELD_U32(v6, 6560) )
                  {
                    v15 = v6 + 6596;
                    if ( FIELD_U32(v6, 6596) )
                    {
                      v15 = v6 + 6632;
                      if ( FIELD_U32(v6, 6632) )
                      {
                        v15 = v6 + 6668;
                        if ( FIELD_U32(v6, 6668) )
                        {
                          v15 = v6 + 6704;
                          if ( FIELD_U32(v6, 6704) )
                          {
                            v15 = v6 + 6740;
                            if ( FIELD_U32(v6, 6740) )
                            {
                              v15 = v6 + 6776;
                              if ( FIELD_U32(v6, 6776) )
                              {
                                v15 = v6 + 6812;
                                if ( FIELD_U32(v6, 6812) )
                                {
                                  v17 = FIELD_U32(v6, 6848);
                                  v16 = v6 + 6848;
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
                *(_DWORD *)v15 = FIELD_U32(v7, 8);
                FIELD_U32(v15, 8) = FIELD_U32(v7, 108);
                FIELD_U32(v15, 12) = FIELD_U32(v7, 112);
                FIELD_U32(v15, 16) = 0;
                FIELD_U32(v15, 32) = 0;
                FIELD_U8(v15, 24) = 1;
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
      if ( ((unsigned int)&dword_60C7B39C & ~(1617901664 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
      {
        dword_60C7B398 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C7B39C);
      }
      v24 = v7 + 7526;
      if ( !(**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B398) )
        v24 = 7526;
      *(_BYTE *)v24 = 1;
      return;
    }
    if ( ((unsigned int)&dword_60C7B418 & ~(1617901912 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
    {
      dword_60C7B414 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B418);
    }
    if ( !v7 )
      goto LABEL_138;
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B414) != 1 )
      goto LABEL_138;
    if ( !FIELD_U8(v7, 6199) )
      goto LABEL_138;
    v26 = ActiveCollider_getLeft((ActiveCollider *)a2);
    if ( v26 < ActiveCollider_getLeft(a1) )
      goto LABEL_138;
    v27 = ActiveCollider_getRight((ActiveCollider *)a2);
    if ( v27 > ActiveCollider_getRight(a1) )
      goto LABEL_138;
    v28 = (_DWORD *)(v6 + 6520);
    if ( FIELD_S32(v6, 6520) > 9 )
      goto LABEL_138;
    v29 = FIELD_U32(v7, 8);
    if ( FIELD_U32(v6, 6524) == v29
      || FIELD_U32(v6, 6560) == v29
      || FIELD_U32(v6, 6596) == v29
      || FIELD_U32(v6, 6632) == v29
      || FIELD_U32(v6, 6668) == v29
      || FIELD_U32(v6, 6704) == v29
      || FIELD_U32(v6, 6740) == v29
      || FIELD_U32(v6, 6776) == v29
      || FIELD_U32(v6, 6812) == v29
      || FIELD_U32(v6, 6848) == v29 )
    {
      goto LABEL_138;
    }
    if ( ((unsigned int)&dword_60C7B394 & ~(1617902292 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &CollisionActor_RTTI) != 1
      || (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 148))(v7) )
    {
LABEL_138:
      if ( ((unsigned int)&dword_60CB1F0C & ~(1617902424 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1F0C) )
      {
        dword_60CB1F08 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CB1F0C);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60CB1F08) == 1 )
      {
        if ( ((unsigned int)&dword_60C7B394 & ~(1617902540 << v30) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
        {
          CollisionActor_RTTI = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B394);
        }
        if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &CollisionActor_RTTI) == 1
          && !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 148))(v7) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
          v31 = v6 + 6524;
          if ( !FIELD_U32(v6, 6524) )
            goto LABEL_108;
          v31 = v6 + 6560;
          if ( !FIELD_U32(v6, 6560) )
            goto LABEL_108;
          v31 = v6 + 6596;
          if ( !FIELD_U32(v6, 6596)
            || (v31 = v6 + 6632, !FIELD_U32(v6, 6632))
            || (v31 = v6 + 6668, !FIELD_U32(v6, 6668))
            || (v31 = v6 + 6704, !FIELD_U32(v6, 6704))
            || (v31 = v6 + 6740, !FIELD_U32(v6, 6740))
            || (v31 = v6 + 6776, !FIELD_U32(v6, 6776))
            || (v31 = v6 + 6812, !FIELD_U32(v6, 6812))
            || (v31 = v6 + 6848, !FIELD_U32(v6, 6848)) )
          {
LABEL_108:
            *(_DWORD *)v31 = FIELD_U32(v7, 8);
            FIELD_U32(v31, 8) = FIELD_U32(v7, 108);
            FIELD_U32(v31, 12) = FIELD_U32(v7, 112);
            FIELD_U32(v31, 16) = 0;
            FIELD_U32(v31, 32) = 0;
            FIELD_U8(v31, 24) = 1;
            ++FIELD_U32(v6, 6520);
          }
        }
      }
      return;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 140))(v7);
LABEL_123:
    v35 = v6 + 6524;
    if ( FIELD_U32(v6, 6524) )
    {
      v35 = v6 + 6560;
      if ( FIELD_U32(v6, 6560) )
      {
        v35 = v6 + 6596;
        if ( FIELD_U32(v6, 6596) )
        {
          v35 = v6 + 6632;
          if ( FIELD_U32(v6, 6632) )
          {
            v35 = v6 + 6668;
            if ( FIELD_U32(v6, 6668) )
            {
              v35 = v6 + 6704;
              if ( FIELD_U32(v6, 6704) )
              {
                v35 = v6 + 6740;
                if ( FIELD_U32(v6, 6740) )
                {
                  v35 = v6 + 6776;
                  if ( FIELD_U32(v6, 6776) )
                  {
                    v35 = v6 + 6812;
                    if ( FIELD_U32(v6, 6812) )
                    {
                      v37 = FIELD_U32(v6, 6848);
                      v36 = v6 + 6848;
                      if ( v37 )
                        return;
                      v35 = v36;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(_DWORD *)v35 = FIELD_U32(v7, 8);
    FIELD_U32(v35, 8) = FIELD_U32(v7, 108);
    FIELD_U32(v35, 12) = FIELD_U32(v7, 112);
    FIELD_U32(v35, 16) = 0;
    FIELD_U32(v35, 32) = 0;
    FIELD_U8(v35, 24) = 1;
    ++*v28;
    return;
  }
  if ( FIELD_U32(v7, 1320) != 5 && !sub_6075EE0C(FIELD_U32(a2, 64)) && sub_6075EDF8(v7) != 1 )
  {
    v32 = ActiveCollider_getLeft((ActiveCollider *)a2);
    if ( v32 < ActiveCollider_getLeft(a1) )
      return;
    v33 = ActiveCollider_getRight((ActiveCollider *)a2);
    if ( v33 > ActiveCollider_getRight(a1) )
      return;
    goto LABEL_111;
  }
  v18 = FIELD_F32(v7, 108);
  v19 = FIELD_F32(v7, 112);
  if ( v18 <= FIELD_F32(v6, 108) )
  {
    if ( (float)(v18 + -5.0) < ActiveCollider_getLeft(a1) )
      return;
    v25 = ActiveCollider_getRight((ActiveCollider *)a2);
    v21 = a1;
    v22 = v25;
  }
  else
  {
    v20 = ActiveCollider_getLeft((ActiveCollider *)a2);
    if ( v20 < ActiveCollider_getLeft(a1) )
      return;
    v21 = a1;
    v22 = FIELD_F32(v7, 108) + 5.0;
  }
  if ( v22 <= ActiveCollider_getRight(v21)
    && (float)(v19 - FIELD_F32(v6, 112)) < (float)((float)(*(float *)(FIELD_U32(v6, 7232) + 4)
                                                           - FIELD_F32(v6, 6128))
                                                   + -2.0) )
  {
LABEL_111:
    v28 = (_DWORD *)(v6 + 6520);
    if ( FIELD_S32(v6, 6520) > 9 )
      return;
    v34 = FIELD_U32(v7, 8);
    if ( FIELD_U32(v6, 6524) == v34
      || FIELD_U32(v6, 6560) == v34
      || FIELD_U32(v6, 6596) == v34
      || FIELD_U32(v6, 6632) == v34
      || FIELD_U32(v6, 6668) == v34
      || FIELD_U32(v6, 6704) == v34
      || FIELD_U32(v6, 6740) == v34
      || FIELD_U32(v6, 6776) == v34
      || FIELD_U32(v6, 6812) == v34
      || FIELD_U32(v6, 6848) == v34
      || sub_60774AEC(v7, 1) != 1 )
    {
      return;
    }
    goto LABEL_123;
  }
}
