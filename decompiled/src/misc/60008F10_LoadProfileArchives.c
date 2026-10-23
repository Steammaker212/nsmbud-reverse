/* LoadProfileArchives
 * address: 0x60008F10   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall LoadProfileArchives(int a1, _DWORD *a2)
{
  unsigned int v2; // r4
  unsigned int result; // r0
  int v6; // r8
  int v7; // r0
  int v8; // r9
  int Area; // r0
  unsigned __int16 *v10; // r7
  bool v11; // zf
  unsigned int profileId; // r6
  Profile *profile; // r0
  int v14; // r0
  unsigned __int16 *v15; // r7
  bool v16; // zf
  unsigned int v17; // r6
  Profile *v18; // r0
  int v19; // r0
  unsigned __int16 *v20; // r7
  bool v21; // zf
  unsigned int v22; // r6
  Profile *v23; // r0
  int v24; // r0
  unsigned __int16 *v25; // r7
  bool v26; // zf
  unsigned int v27; // r6
  Profile *v28; // r0
  unsigned int i; // r7
  Profile *v30; // r0
  _DWORD v31[10]; // [sp+8h] [bp-28h] BYREF

  nn__os__GetSystemTick((nn__os *)v31);
  if ( !a2 || (v2 = (*(int (__fastcall **)(_DWORD *, int))(*a2 + 64))(a2, 4), result = sub_608F61B0(4), v2 >= result) )
  {
    v6 = 1;
    v31[0] = &sead__SafeStringBase__vtable;
    v31[1] = "ActorResLoader";
    v7 = sead__ExpHeap__create(0, (int)v31, a2, 4, 1, 0);
    v8 = v7;
    if ( v7 )
      v6 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v7);
    if ( a1 == 1 )
    {
      Area = Level_getArea(Level_instance, 0);
      if ( Area )
      {
        v10 = *(unsigned __int16 **)(Area + 36);
        v11 = v10 == 0;
        if ( v10 )
        {
          v2 = FIELD_U32(Area, 156);
          v11 = v2 == 0;
        }
        if ( !v11 )
        {
          do
          {
            profileId = SpriteToProfileTable[*v10];
            if ( Profile_getHasResources(profileId) == 1 )
            {
              profile = Profile__get(profileId);
              if ( profile )
                Profile_loadResources(profile, v8);
            }
            --v2;
            v10 += 2;
          }
          while ( v2 );
        }
      }
      v14 = Level_getArea(Level_instance, 1u);
      if ( v14 )
      {
        v15 = *(unsigned __int16 **)(v14 + 36);
        v16 = v15 == 0;
        if ( v15 )
        {
          v2 = FIELD_U32(v14, 156);
          v16 = v2 == 0;
        }
        if ( !v16 )
        {
          do
          {
            v17 = SpriteToProfileTable[*v15];
            if ( Profile_getHasResources(v17) == 1 )
            {
              v18 = Profile__get(v17);
              if ( v18 )
                Profile_loadResources(v18, v8);
            }
            --v2;
            v15 += 2;
          }
          while ( v2 );
        }
      }
      v19 = Level_getArea(Level_instance, 2u);
      if ( v19 )
      {
        v20 = *(unsigned __int16 **)(v19 + 36);
        v21 = v20 == 0;
        if ( v20 )
        {
          v2 = FIELD_U32(v19, 0x9C);
          v21 = v2 == 0;
        }
        if ( !v21 )
        {
          do
          {
            v22 = SpriteToProfileTable[*v20];
            if ( Profile_getHasResources(v22) == 1 )
            {
              v23 = Profile__get(v22);
              if ( v23 )
                Profile_loadResources(v23, v8);
            }
            --v2;
            v20 += 2;
          }
          while ( v2 );
        }
      }
      v24 = Level_getArea(Level_instance, 3u);
      if ( v24 )
      {
        v25 = *(unsigned __int16 **)(v24 + 36);
        v26 = v25 == 0;
        if ( v25 )
        {
          v2 = FIELD_U32(v24, 156);
          v26 = v2 == 0;
        }
        if ( !v26 )
        {
          do
          {
            v27 = SpriteToProfileTable[*v25];
            if ( Profile_getHasResources(v27) == 1 )
            {
              v28 = Profile__get(v27);
              if ( v28 )
                Profile_loadResources(v28, v8);
            }
            --v2;
            v25 += 2;
          }
          while ( v2 );
        }
      }
    }
    else
    {
      for ( i = 0; i != 914; ++i )
      {
        if ( Profile_getHasResources(i) == a1 )
        {
          v30 = Profile__get(i);
          if ( v30 )
            Profile_loadResources(v30, v8);
        }
      }
      if ( !a1 )
        LoadProfileArchives_helper(v8);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
    result = nn__os__GetSystemTick((nn__os *)v31);
    if ( v6 != 1 )
      return sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v6);
  }
  return result;
}
