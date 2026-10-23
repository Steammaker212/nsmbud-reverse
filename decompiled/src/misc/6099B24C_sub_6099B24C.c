/* sub_6099B24C
 * address: 0x6099B24C   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_6099B24C(
        unsigned __int16 *a1,
        unsigned int a2,
        int (__fastcall ***a3)(_DWORD, unsigned __int16 *, unsigned int))
{
  unsigned __int16 *v4; // r5
  unsigned int v5; // r12
  int v6; // r0
  int v7; // r3
  int v8; // r7
  unsigned int v9; // r4
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r2
  int v14; // r2
  char v15; // r6
  int v16; // r4
  char v17; // r2
  int v18; // r2
  unsigned __int16 *result; // r0
  int v20; // r10
  unsigned int v21; // r6
  int v22; // r1
  int v23; // r2
  int v24; // r4
  unsigned int v25; // r12
  int v26; // r1
  unsigned __int16 *v27; // r1
  int v28; // r1
  int v29; // [sp+8h] [bp-30h]
  unsigned int v30; // [sp+Ch] [bp-2Ch]
  unsigned int v31; // [sp+10h] [bp-28h]

  v4 = a1;
  if ( a1 == (unsigned __int16 *)a2 )
    return v4;
  v5 = *a1;
  v6 = 1986;
  v7 = 0;
  while ( 1 )
  {
    v8 = v7 + (v6 - v7) / 2;
    v9 = *((unsigned __int16 *)&unk_60B73450 + 2 * v8);
    if ( (unsigned int)(v6 - v7 + 1) <= 2 )
      break;
    if ( v9 > v5 )
      v6 = v7 + (v6 - v7) / 2;
    else
      v7 += (v6 - v7) / 2;
    if ( v6 <= v7 )
    {
      v10 = 14;
      goto LABEL_11;
    }
  }
  v10 = 14;
  if ( *((unsigned __int8 *)&unk_60B73450 + 4 * v8 + 2) + v9 >= v5 )
    v10 = *((unsigned __int8 *)&unk_60B73450 + 4 * v8 + 3);
LABEL_11:
  if ( (unsigned int)(v10 - 33) < 3 )
    v10 = 30;
  if ( v10 == 32 )
    v10 = 5;
  if ( v10 == 29 )
    v10 = 12;
  if ( v10 == 36 )
    v10 = 12;
  if ( v10 == 37 )
    v10 = 12;
  if ( v10 == 31 )
    v10 = 14;
  if ( v10 == 30 )
    return v4;
  v11 = 22;
  if ( v10 != 38 )
    v11 = v10;
  v29 = v11;
  v12 = (**a3)(a3, v4, a2) - 2;
  v30 = a2;
  if ( v12 <= (unsigned int)v4 )
    v12 = (unsigned int)v4;
  v31 = v12;
  while ( 2 )
  {
    while ( 2 )
    {
      v18 = 0;
      do
      {
        result = v4;
        v20 = v18;
        if ( ++v4 == (unsigned __int16 *)a2 )
        {
          v13 = v31;
          v28 = 0;
          if ( v31 + 2 <= a2 )
            result = (unsigned __int16 *)v31;
          else
            v28 = 1;
          if ( ((v28 | v20) & 1) != 0 )
            return result;
          goto LABEL_78;
        }
        v21 = *v4;
        v22 = 1986;
        v23 = 0;
        while ( 1 )
        {
          v24 = v23 + (v22 - v23) / 2;
          v25 = *((unsigned __int16 *)&unk_60B73450 + 2 * v24);
          if ( (unsigned int)(v22 - v23 + 1) <= 2 )
            break;
          if ( v25 > v21 )
            v22 = v23 + (v22 - v23) / 2;
          else
            v23 += (v22 - v23) / 2;
          if ( v22 <= v23 )
          {
            v26 = 14;
            goto LABEL_49;
          }
        }
        v26 = 14;
        if ( *((unsigned __int8 *)&unk_60B73450 + 4 * v24 + 2) + v25 >= v21 )
          v26 = *((unsigned __int8 *)&unk_60B73450 + 4 * v24 + 3);
LABEL_49:
        v18 = 1;
        if ( (unsigned int)(v26 - 33) < 3 )
          v26 = 30;
        if ( v26 == 32 )
          v26 = 5;
        if ( v26 == 29 )
          v26 = 12;
        if ( v26 == 36 )
          v26 = 12;
        if ( v26 == 37 )
          v26 = 12;
        if ( v26 == 31 )
          v26 = 14;
      }
      while ( v26 == 38 );
      if ( v26 == 30 )
      {
        v26 = 30;
        v16 = 1;
        v17 = 1;
        v15 = 1;
      }
      else
      {
        v14 = dword_60B7272C[29 * v29 + v26];
        if ( (unsigned int)(v14 - 1) >= 2 )
        {
          if ( v14 )
          {
            v13 = v31;
            v29 = v26;
            if ( v31 > (unsigned int)result )
              continue;
            goto LABEL_78;
          }
          v17 = 1;
          v16 = 0;
          v29 = v26;
          v15 = 0;
          goto LABEL_65;
        }
        v15 = 1;
        v16 = 0;
        v17 = v20;
      }
      break;
    }
    v29 = v26;
LABEL_65:
    v27 = (unsigned __int16 *)v30;
    if ( (v17 & 1) != 0 )
      v27 = result;
    v30 = (unsigned int)v27;
    if ( v31 <= (unsigned int)result && (v17 & 1) != 0 )
    {
      if ( !(v15 & 1 | ((v20 & 1) == 0)) )
        return (unsigned __int16 *)v31;
      if ( result == (unsigned __int16 *)a2 )
        return (unsigned __int16 *)v31;
      return result;
    }
    if ( v16 )
      return v4;
    v13 = v31;
    if ( v31 > (unsigned int)result )
      continue;
    break;
  }
LABEL_78:
  if ( v30 != a2 )
    return (unsigned __int16 *)v30;
  return (unsigned __int16 *)v13;
}
