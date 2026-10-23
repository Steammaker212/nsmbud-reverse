/* sub_6042AC08
 * address: 0x6042AC08   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6042AC08(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r0
  unsigned int v6; // r4
  int v8; // r11
  _DWORD *v9; // r3
  int v10; // r10
  unsigned int result; // r0
  int v12; // r6
  void *v13; // r0
  _DWORD *v14; // r8
  int v15; // r4
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r10
  unsigned int i; // r9
  _DWORD *v22; // r1
  _DWORD *v23; // r1
  _BYTE *v24; // r0
  _DWORD *v25; // [sp+8h] [bp-40h]
  unsigned int *v26; // [sp+Ch] [bp-3Ch]
  _BYTE **v27; // [sp+10h] [bp-38h]
  unsigned int v28; // [sp+18h] [bp-30h]

  v4 = 0;
  v6 = 0;
  v8 = 9 * a3;
  if ( a2 < 6 )
    v4 = a2;
  v9 = &a1[14 * v4];
  v10 = v9[184];
  result = v9[183];
  if ( result > a3 )
    v10 += 72 * a3;
  v12 = FIELD_U32(v10, 4);
  if ( v12 )
  {
    v25 = v9;
    v26 = v9 + 183;
    v27 = (_BYTE **)(v9 + 184);
    v13 = (void *)sub_604201A4(FIELD_U32(v10, 4));
    operator_delete(v13);
    if ( a2 < 6 )
      v6 = a2;
    v14 = &a1[14 * v6];
    v15 = v14[184];
    v28 = a3;
    if ( v14[183] > a3 )
      v15 += 8 * v8;
    v16 = FIELD_U32(v15, 12);
    if ( v16 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 16))(v16);
      FIELD_U32(v15, 12) = 0;
    }
    v17 = 0;
    v18 = FIELD_U32(v15, 8);
    if ( v18 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 44))(v18);
      v17 = FIELD_U32(v15, 8);
    }
    FIELD_U32(v15, 12) = sub_608F8808(v14[186], v15 + 44, v17, 4, 1, 0);
    FIELD_U32(v10, 4) = 0;
    v19 = a1[268];
    if ( v19 >= 1 )
    {
      v20 = 0;
      for ( i = 0; (int)i < v19; ++i )
      {
        v22 = (_DWORD *)a1[269];
        if ( v19 > i )
          v22 = (_DWORD *)((char *)v22 + v20);
        if ( v12 == *v22 )
        {
          *v22 = 0;
          v23 = (_DWORD *)a1[267];
          if ( a1[266] > i )
            v23 = (_DWORD *)((char *)v23 + v20);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v23 + 44))(*v23);
          sead__CriticalSection__lock((int)(a1 + 270));
          a1[279] &= ~(1 << i);
          sead__CriticalSection__unlock((int)(a1 + 270));
          v19 = a1[268];
        }
        v20 += 4;
      }
    }
    sead__CriticalSection__lock((int)(v25 + 187));
    v24 = *v27;
    if ( *v26 > v28 )
      v24 += 8 * v8;
    *v24 = 0;
    return sead__CriticalSection__unlock((int)(v25 + 187));
  }
  return result;
}
