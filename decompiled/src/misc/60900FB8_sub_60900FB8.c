/* sub_60900FB8
 * address: 0x60900FB8   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60900FB8(float *a1, _DWORD *a2)
{
  int v4; // r1
  char *v5; // r0
  bool v6; // cc
  int v7; // r0
  float v8; // s18
  float v9; // s16
  char v10; // r10
  int v11; // r5
  int v12; // r6
  int v13; // r1
  char *v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r1
  char *v19; // r1
  int v20; // r0
  unsigned int v21; // r1
  int v22; // r0
  float v23; // s0
  int v24; // r0
  int v25; // r1
  char *v26; // r1
  float v27; // s22
  float v28; // s20
  float v29; // s18
  int v30; // r2
  char *v31; // r2
  int v32; // r1
  unsigned int v33; // r2
  int v34; // r1

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = 0;
  v5 = (char *)a2[1];
  while ( v5[v4] )
  {
    if ( !v5[v4 + 1] )
    {
      ++v4;
      break;
    }
    if ( !v5[v4 + 2] )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 <= 0x7FFFF;
    v4 += 3;
    if ( !v6 )
    {
      v4 = 0;
      break;
    }
  }
  if ( v4 < 0 )
    v5 = &byte_60B3BA34;
  v7 = (unsigned __int8)*v5;
  if ( v7 == 43 )
  {
    v11 = 1;
  }
  else
  {
    if ( v7 == 45 )
    {
      v8 = 0.0;
      v9 = -1.0;
      v10 = 0;
      v11 = 1;
      v12 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v17 = a2[1];
        v13 = 0;
        while ( *(_BYTE *)(v17 + v13) )
        {
          if ( !*(_BYTE *)(v17 + v13 + 1) )
          {
            ++v13;
            break;
          }
          if ( !*(_BYTE *)(v17 + v13 + 2) )
          {
            v13 += 2;
            break;
          }
          v6 = v13 + 2 <= 0x7FFFF;
          v13 += 3;
          if ( !v6 )
          {
            v13 = 0;
            break;
          }
        }
        v14 = (char *)(v17 + v11);
        if ( v13 < v11 )
          v14 = &byte_60B3BA34;
        v15 = (unsigned __int8)*v14;
        v16 = -1;
        if ( v15 < 0x3A )
          v16 = v15 - 48;
        if ( v16 >= 0 )
        {
          if ( v8 >= -3.4028e37 && v8 <= 3.4028e37 && (float)(v8 * 10.0) >= (float)((float)v16 + -3.4028e38) )
          {
            ++v11;
            v10 = 1;
            v8 = (float)(v8 * 10.0) + (float)-v16;
            continue;
          }
          return v12;
        }
        break;
      }
LABEL_53:
      v12 = 0;
      if ( (v10 & 1) != 0 )
      {
        if ( a1 )
          *a1 = v8;
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v24 = a2[1];
        v25 = 0;
        while ( *(_BYTE *)(v24 + v25) )
        {
          if ( !*(_BYTE *)(v24 + v25 + 1) )
          {
            ++v25;
            break;
          }
          if ( !*(_BYTE *)(v24 + v25 + 2) )
          {
            v25 += 2;
            break;
          }
          v6 = v25 + 2 <= 0x7FFFF;
          v25 += 3;
          if ( !v6 )
          {
            v25 = 0;
            break;
          }
        }
        v6 = v25 < v11;
        v12 = 1;
        v26 = &byte_60B3BA34;
        if ( !v6 )
          v26 = (char *)(v24 + v11);
        if ( v11 < 0 )
          v26 = &byte_60B3BA34;
        if ( *v26 == 46 )
        {
          v27 = 0.0;
          v28 = *a1;
          v29 = 1.0;
          while ( 2 )
          {
            (*(void (__fastcall **)(_DWORD *, float))(*a2 + 12))(a2, v23);
            v34 = a2[1];
            v30 = 0;
            while ( *(_BYTE *)(v34 + v30) )
            {
              if ( !*(_BYTE *)(v34 + v30 + 1) )
              {
                ++v30;
                break;
              }
              if ( !*(_BYTE *)(v34 + v30 + 2) )
              {
                v30 += 2;
                break;
              }
              v6 = v30 + 2 <= 0x7FFFF;
              v30 += 3;
              if ( !v6 )
              {
                v30 = 0;
                break;
              }
            }
            v6 = v30 <= v11;
            v31 = &byte_60B3BA34;
            if ( !v6 )
              v31 = (char *)(v34 + v11 + 1);
            v32 = -1;
            if ( v11 < -1 )
              v31 = &byte_60B3BA34;
            v33 = (unsigned __int8)*v31;
            if ( v33 < 0x3A )
              v32 = v33 - 48;
            if ( v32 >= 0 )
            {
              v29 = v29 * 10.0;
              ++v11;
              v23 = (float)(v9 * (float)v32) + (float)(v27 * 10.0);
              v27 = v23;
              continue;
            }
            break;
          }
          if ( a1 )
            *a1 = v28 + (float)(v27 / v29);
        }
      }
      return v12;
    }
    v11 = 0;
  }
  v8 = 0.0;
  v9 = 1.0;
  v10 = 0;
  v12 = 0;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v22 = a2[1];
    v18 = 0;
    while ( *(_BYTE *)(v22 + v18) )
    {
      if ( !*(_BYTE *)(v22 + v18 + 1) )
      {
        ++v18;
        break;
      }
      if ( !*(_BYTE *)(v22 + v18 + 2) )
      {
        v18 += 2;
        break;
      }
      v6 = v18 + 2 <= 0x7FFFF;
      v18 += 3;
      if ( !v6 )
      {
        v18 = 0;
        break;
      }
    }
    v6 = v18 < v11;
    v19 = &byte_60B3BA34;
    if ( !v6 )
      v19 = (char *)(v22 + v11);
    v20 = -1;
    if ( v11 < 0 )
      v19 = &byte_60B3BA34;
    v21 = (unsigned __int8)*v19;
    if ( v21 < 0x3A )
      v20 = v21 - 48;
    if ( v20 < 0 )
      goto LABEL_53;
    if ( v8 >= -3.4028e37 && v8 <= 3.4028e37 )
    {
      ++v11;
      v10 = 1;
      v8 = (float)(v8 * 10.0) + (float)v20;
      continue;
    }
    return v12;
  }
}
