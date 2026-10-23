/* sub_601906A4
 * address: 0x601906A4   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601906A4(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  _DWORD *v5; // r6
  int v6; // r0
  int *v7; // r5
  Actor *v8; // r0
  unsigned int ProfileId; // r0
  int *v10; // r5
  Actor *v11; // r0
  unsigned int v12; // r0
  _DWORD *v13; // r9
  int i; // r6
  Actor *v15; // r0
  int *v16; // r4
  unsigned int v17; // r0

  result = 0;
  if ( !a1[324] )
  {
    v3 = -1;
    v4 = 0;
    v5 = 0;
    do
    {
      if ( a1[v4 + 4] && a1[v4 + 5] > v3 )
      {
        v5 = &a1[v4 + 4];
        v3 = a1[v4 + 5];
      }
      v4 += 20;
    }
    while ( v4 != 320 );
    if ( v5 )
    {
      a1[324] = *v5;
      qmemcpy(a1 + 325, v5 + 1, 0x4Cu);
      *v5 = 0;
      v5[1] = 255;
      v7 = &dword_60C89980;
      v6 = dword_60C89970;
      v5[2] = dword_60C89970;
      v5[3] = v6;
      v5[4] = v6;
      v5[5] = v6;
      v5[6] = v6;
      v5[7] = v6;
      v5[8] = v6;
      v5[9] = v6;
      v5[10] = v6;
      v5[11] = v6;
      v5[12] = v6;
      v5[13] = v6;
      v5[14] = v6;
      v5[15] = v6;
      v5[16] = v6;
      v5[17] = v6;
      v5[18] = v6;
      v5[19] = v6;
      v8 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[326]);
      if ( v8 )
      {
        ProfileId = Actor__getProfileId(v8);
        v7 = (int *)&off_60C5CB30;
        if ( !Profile__get(ProfileId) )
          v7 = &dword_60C89980;
      }
      (*(void (__fastcall **)(int *))(*v7 + 12))(v7);
      (*(void (__fastcall **)(int *))(*v7 + 12))(v7);
      v10 = &dword_60C89980;
      (*(void (__fastcall **)(int *))(dword_60C89980 + 12))(&dword_60C89980);
      v11 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[327]);
      if ( v11 )
      {
        v12 = Actor__getProfileId(v11);
        v10 = (int *)&off_60C5CB30;
        if ( !Profile__get(v12) )
          v10 = &dword_60C89980;
      }
      (*(void (__fastcall **)(int *))(*v10 + 12))(v10);
      (*(void (__fastcall **)(int *))(*v10 + 12))(v10);
      (*(void (__fastcall **)(int *))(dword_60C89980 + 12))(&dword_60C89980);
      v13 = a1 + 328;
      for ( i = 0; i != 16; ++i )
      {
        v15 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v13[i]);
        v16 = &dword_60C89980;
        if ( v15 )
        {
          v17 = Actor__getProfileId(v15);
          v16 = (int *)&off_60C5CB30;
          if ( !Profile__get(v17) )
            v16 = &dword_60C89980;
        }
        (*(void (__fastcall **)(int *))(*v16 + 12))(v16);
        (*(void (__fastcall **)(int *))(*v16 + 12))(v16);
        (*(void (__fastcall **)(int *))(dword_60C89980 + 12))(&dword_60C89980);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
