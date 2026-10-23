/* sub_600C69CC
 * address: 0x600C69CC   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C69CC(_DWORD *a1)
{
  unsigned int v2; // r0
  int v3; // r2
  _BYTE *v4; // r0
  int *v6; // r1
  int v7; // r1
  unsigned int *v8; // r5
  __int64 v9; // kr00_8
  int v10; // r1
  bool v11; // cf
  unsigned int v12; // r1
  int *v13; // r1
  Vec2 v14; // [sp+0h] [bp-18h] BYREF

  if ( (a1[1777] & 0x10) != 0 )
  {
    if ( a1[20] )
      v6 = &dword_60C839B4;
    else
      v6 = &dword_60C83AFC;
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, v6);
  }
  else
  {
    v2 = StageActor__distanceToPlayer((StateActor *)a1, &v14);
    v3 = v14.x < 0.0;
    if ( v2 >= 4 )
      v3 = a1[20];
    v4 = a1 + 1783;
    if ( a1[20] == v3 )
    {
      if ( *v4 )
      {
        *v4 = 0;
        return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C839D4);
      }
      else
      {
        v8 = a1 + 1782;
        v7 = a1[1782];
        if ( v7 < 1 )
        {
          *v4 = 1;
          v12 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30;
          if ( !v12 )
            v12 = 1;
          *v8 = v12;
          v13 = &dword_60C839F4;
        }
        else
        {
          *v8 = v7 - 1;
          *v4 = 1;
          v9 = 100LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v10 = 0;
          if ( *((float *)a1 + 27) >= (float)(FIELD_F32(dword_60CC6484, 116)
                                            + (float)((float)*((int *)&unk_60AF5A08 + a1[20]) * 16.0)) == a1[20] )
          {
            v11 = HIDWORD(v9) >= 0x14;
            if ( HIDWORD(v9) >= 0x14 )
            {
              v10 = 1;
              v11 = HIDWORD(v9) >= 0x32;
            }
            if ( v11 )
            {
              v10 = 3;
              if ( HIDWORD(v9) < 0x5A )
                v10 = 2;
            }
          }
          else if ( HIDWORD(v9) >= 0x32 )
          {
            v10 = 3;
            if ( HIDWORD(v9) < 0x5A )
              v10 = 1;
          }
          v13 = off_60BCA810[v10];
        }
        return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, v13);
      }
    }
    else
    {
      *v4 = 0;
      return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C839B4);
    }
  }
}
