/* sub_60191160
 * address: 0x60191160   size: 1228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60191160(_DWORD *a1, _DWORD *a2)
{
  const void *v3; // r1
  int v4; // t1
  int v5; // r3
  _DWORD *v6; // r7
  int v7; // r3
  unsigned int *v8; // r6
  Actor *v9; // r0
  unsigned int ProfileId; // r0
  int *v11; // r4
  int *v12; // r4
  Actor *v13; // r0
  unsigned int v14; // r0
  unsigned int *v15; // r9
  int i; // r6
  Actor *v17; // r0
  int *v18; // r4
  unsigned int v19; // r0
  int j; // r8
  void (__fastcall ***v21)(_DWORD, int *); // r5
  char v22; // r12
  char v23; // r12
  unsigned int *v25; // [sp+4h] [bp-4Ch]

  v4 = a2[1];
  v3 = a2 + 1;
  v5 = 0;
  if ( v4 != 255 )
  {
    v6 = a1 + 4;
    if ( a1[4] )
    {
      v6 = a1 + 24;
      if ( a1[24] )
      {
        v6 = a1 + 44;
        if ( a1[44] )
        {
          v6 = a1 + 64;
          if ( a1[64] )
          {
            v6 = a1 + 84;
            if ( a1[84] )
            {
              v6 = a1 + 104;
              if ( a1[104] )
              {
                v6 = a1 + 124;
                if ( a1[124] )
                {
                  v6 = a1 + 144;
                  if ( a1[144] )
                  {
                    v6 = a1 + 164;
                    if ( a1[164] )
                    {
                      v6 = a1 + 184;
                      if ( a1[184] )
                      {
                        v6 = a1 + 204;
                        if ( a1[204] )
                        {
                          v6 = a1 + 224;
                          if ( a1[224] )
                          {
                            v6 = a1 + 244;
                            if ( a1[244] )
                            {
                              v6 = a1 + 264;
                              if ( a1[264] )
                              {
                                v6 = a1 + 284;
                                if ( a1[284] )
                                {
                                  v5 = 0;
                                  v6 = a1 + 304;
                                  if ( a1[304] )
                                    return v5;
                                  v7 = 15;
                                }
                                else
                                {
                                  v7 = 14;
                                }
                              }
                              else
                              {
                                v7 = 13;
                              }
                            }
                            else
                            {
                              v7 = 12;
                            }
                          }
                          else
                          {
                            v7 = 11;
                          }
                        }
                        else
                        {
                          v7 = 10;
                        }
                      }
                      else
                      {
                        v7 = 9;
                      }
                    }
                    else
                    {
                      v7 = 8;
                    }
                  }
                  else
                  {
                    v7 = 7;
                  }
                }
                else
                {
                  v7 = 6;
                }
              }
              else
              {
                v7 = 5;
              }
            }
            else
            {
              v7 = 4;
            }
          }
          else
          {
            v7 = 3;
          }
        }
        else
        {
          v7 = 2;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    else
    {
      v7 = 0;
    }
    *v6 = *a2;
    v8 = &a1[20 * v7];
    qmemcpy(v8 + 5, v3, 0x4Cu);
    v9 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v8[6]);
    if ( v9 )
    {
      ProfileId = Actor__getProfileId(v9);
      v11 = (int *)&off_60C5CB30;
      if ( !Profile__get(ProfileId) )
        v11 = &dword_60C89980;
    }
    else
    {
      v11 = &dword_60C89980;
    }
    (*(void (__fastcall **)(int *))(*v11 + 12))(v11);
    (*(void (__fastcall **)(int *))(*v11 + 12))(v11);
    v12 = &dword_60C89980;
    (*(void (__fastcall **)(int *))(dword_60C89980 + 12))(&dword_60C89980);
    v13 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v8[7]);
    if ( v13 )
    {
      v14 = Actor__getProfileId(v13);
      v12 = (int *)&off_60C5CB30;
      if ( !Profile__get(v14) )
        v12 = &dword_60C89980;
    }
    (*(void (__fastcall **)(int *))(*v12 + 12))(v12);
    (*(void (__fastcall **)(int *))(*v12 + 12))(v12);
    (*(void (__fastcall **)(int *))(dword_60C89980 + 12))(&dword_60C89980);
    v25 = v8;
    v15 = v8 + 8;
    for ( i = 0; i != 16; ++i )
    {
      v17 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v15[i]);
      v18 = &dword_60C89980;
      if ( v17 )
      {
        v19 = Actor__getProfileId(v17);
        v18 = (int *)&off_60C5CB30;
        if ( !Profile__get(v19) )
          v18 = &dword_60C89980;
      }
      (*(void (__fastcall **)(int *))(*v18 + 12))(v18);
      (*(void (__fastcall **)(int *))(*v18 + 12))(v18);
      (*(void (__fastcall **)(int *))(dword_60C89980 + 12))(&dword_60C89980);
    }
    for ( j = 6; j != 24; ++j )
    {
      v21 = (void (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v25[j]);
      if ( ((unsigned int)&dword_60C88A90 & ~(1612256636 << v22) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A90) )
      {
        dword_60C88A8C = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C88A90);
      }
      if ( v21 && ((int (__fastcall *)(_DWORD, int *))**v21)(v21, &dword_60C88A8C) == 1 )
      {
        if ( ((unsigned int)&dword_60C88AA0 & ~(1612256724 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
        {
          dword_60C88A9C = (int)&off_60BD4BB0;
          _cxa_guard_release(&dword_60C88AA0);
        }
        (**v21)(v21, &dword_60C88A9C);
      }
    }
    return 1;
  }
  return v5;
}
