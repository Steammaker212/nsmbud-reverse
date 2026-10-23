/* sub_60667FC4
 * address: 0x60667FC4   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60667FC4(int a1, _DWORD *a2)
{
  int *v2; // r5
  int v3; // r10
  unsigned int v4; // r7
  _DWORD *i; // r9
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  char v9; // r1
  bool v10; // cf
  char v11; // r0
  int v12; // r6
  int result; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  char v17; // r6
  bool v18; // zf
  unsigned int v20; // [sp+8h] [bp-40h]
  char v21; // [sp+Ch] [bp-3Ch]
  char v22; // [sp+Dh] [bp-3Bh]
  char v23; // [sp+Eh] [bp-3Ah]
  char v24; // [sp+Fh] [bp-39h]
  _BYTE v25[16]; // [sp+10h] [bp-38h] BYREF
  int v26; // [sp+14h] [bp-34h] BYREF
  int v27; // [sp+18h] [bp-30h] BYREF
  int v28; // [sp+1Ch] [bp-2Ch] BYREF
  char v29; // [sp+20h] [bp-28h]
  char v30; // [sp+21h] [bp-27h]
  char v31; // [sp+22h] [bp-26h]
  char v32; // [sp+23h] [bp-25h]

  v2 = (int *)v25;
  v3 = 0;
  v20 = a1 + 8056;
  v4 = a1 + 6104;
  do
  {
    *(&v29 + v3) = 0;
    *(_DWORD *)&v25[4 * v3] = 0;
    *(&v21 + v3) = 0;
    for ( i = *(_DWORD **)(v4 + 272); i; i = (_DWORD *)i[1] )
    {
      v6 = *(_DWORD *)(*i + 2196);
      v7 = FIELD_U8(v6, 533);
      if ( (unsigned int)(v7 - 1) < 2 || v7 == 3 && Actor__getProfileId((Actor *)v6) == 611 )
      {
        v8 = FIELD_U32(v4, 480);
        v9 = 1;
        *(&v29 + v3) = 1;
        *(_DWORD *)&v25[4 * v3] = v8;
        if ( v8 >= 0x35560000 )
        {
          v9 = 0;
          v10 = v8 >= 0x4AAA0000;
          if ( v8 >= 0x4AAA0000 )
          {
            v9 = -1;
            v10 = v8 >= 0xB5560000;
          }
          if ( v10 )
            v9 = v8 > 0xCAA9FFFF;
        }
        *(&v21 + v3) = v9;
      }
    }
    v4 += 488;
    ++v3;
  }
  while ( v4 < v20 );
  v11 = v29;
  if ( v29 )
    v11 = 1;
  if ( v30 )
    ++v11;
  if ( v31 )
    ++v11;
  if ( v32 )
    ++v11;
  v12 = v11 & 0xF;
  result = 0;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v14 = 0;
      v15 = v29 == 0;
      if ( !v29 )
      {
        v14 = 1;
        v15 = v30 == 0;
      }
      if ( v15 )
      {
        v14 = 2;
        v18 = v31 == 0;
        if ( !v31 )
        {
          v14 = 3;
          v18 = v32 == 0;
        }
        if ( v18 )
          return 0;
      }
      v16 = *(_DWORD *)&v25[4 * v14];
      goto LABEL_65;
    }
    v17 = v21;
    if ( !v29 )
      v17 = 0;
    if ( v30 )
      v17 += v22;
    if ( v31 )
      v17 += v23;
    if ( v32 )
      v17 += v24;
    if ( v17 )
    {
      if ( v17 < 0 )
      {
        if ( v29 && v21 < 0 )
          goto LABEL_64;
        if ( !v30 || v22 >= 0 )
        {
          if ( !v31 || v23 >= 0 )
          {
            v16 = 0;
            if ( !v32 || v24 >= 0 )
              goto LABEL_65;
LABEL_56:
            v2 = &v28;
LABEL_64:
            v16 = *v2;
LABEL_65:
            *a2 = v16;
            return 1;
          }
LABEL_63:
          v2 = &v27;
          goto LABEL_64;
        }
      }
      else
      {
        if ( v29 && v21 > 0 )
          goto LABEL_64;
        if ( !v30 || v22 <= 0 )
        {
          if ( !v31 || v23 <= 0 )
          {
            v16 = 0;
            if ( !v32 || v24 <= 0 )
              goto LABEL_65;
            goto LABEL_56;
          }
          goto LABEL_63;
        }
      }
      v2 = &v26;
      goto LABEL_64;
    }
  }
  return result;
}
