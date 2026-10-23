/* sub_6042B378
 * address: 0x6042B378   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042B378(_DWORD *a1)
{
  unsigned int i; // r6
  _DWORD *v2; // r1
  int v3; // r0
  int *v4; // r5
  int *v5; // r4
  int v6; // r7
  unsigned int v7; // r8
  int v8; // r9
  int *v9; // r0
  _DWORD *v10; // r0
  void *v11; // r0
  unsigned int v12; // r0
  _DWORD *v13; // r11
  int v14; // r10
  int v15; // r0
  int v16; // r0
  int v17; // r2
  _BYTE *v18; // r0
  int result; // r0
  int v20; // r7
  unsigned int v21; // r4
  int v22; // r5
  _DWORD *v23; // r1
  bool v24; // zf
  _DWORD *v25; // r1
  int *v26; // [sp+Ch] [bp-3Ch]
  int *v27; // [sp+10h] [bp-38h]
  int v28; // [sp+14h] [bp-34h]
  unsigned int v29; // [sp+18h] [bp-30h]

  for ( i = 0; i != 6; ++i )
  {
    v2 = &a1[14 * i];
    v4 = v2 + 183;
    v3 = v2[183];
    if ( v3 >= 1 )
    {
      v5 = v2 + 184;
      v6 = 0;
      v7 = 0;
      v29 = i;
      v26 = v2 + 183;
      v28 = (int)(v2 + 187);
      v27 = v2 + 184;
      do
      {
        v8 = *v5;
        if ( v3 > v7 )
          v8 += v6;
        v9 = *(int **)(v8 + 4);
        if ( v9 )
        {
          sub_60420214(v9);
          v10 = *(_DWORD **)(v8 + 4);
          if ( *v10 == 3 )
          {
            if ( v10 )
            {
              v11 = (void *)sub_604201A4((int)v10);
              operator_delete(v11);
            }
            v12 = i;
            if ( i >= 6 )
              v12 = 0;
            v13 = &a1[14 * v12];
            v14 = v13[184];
            if ( v13[183] > v7 )
              v14 += v6;
            v15 = FIELD_U32(v14, 12);
            if ( v15 )
            {
              (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 16))(v15);
              FIELD_U32(v14, 12) = 0;
            }
            v16 = FIELD_U32(v14, 8);
            if ( v16 )
            {
              (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 44))(v16);
              v17 = FIELD_U32(v14, 8);
            }
            else
            {
              v17 = 0;
            }
            FIELD_U32(v14, 12) = sub_608F8808(v13[186], v14 + 44, v17, 4, 1, 0);
            FIELD_U32(v8, 4) = 0;
            sead__CriticalSection__lock(v28);
            v4 = v26;
            v5 = v27;
            v18 = (_BYTE *)*v27;
            if ( *v26 > v7 )
              v18 += v6;
            *v18 = 0;
            sead__CriticalSection__unlock(v28);
            i = v29;
          }
        }
        v3 = *v4;
        ++v7;
        v6 += 72;
      }
      while ( (int)v7 < *v4 );
    }
  }
  result = a1[268];
  if ( result >= 1 )
  {
    v20 = 0;
    v21 = 0;
    v22 = (int)(a1 + 270);
    do
    {
      v23 = (_DWORD *)a1[269];
      if ( result > v21 )
        v23 = (_DWORD *)((char *)v23 + v20);
      v24 = *v23 == 0;
      if ( *v23 )
        v24 = *(_DWORD *)*v23 == 0;
      if ( !v24 )
      {
        *v23 = 0;
        v25 = (_DWORD *)a1[267];
        if ( a1[266] > v21 )
          v25 = (_DWORD *)((char *)v25 + v20);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v25 + 44))(*v25);
        sead__CriticalSection__lock(v22);
        a1[279] &= ~(1 << v21);
        sead__CriticalSection__unlock(v22);
        result = a1[268];
      }
      ++v21;
      v20 += 4;
    }
    while ( (int)v21 < result );
  }
  return result;
}
