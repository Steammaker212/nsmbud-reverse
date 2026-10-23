/* sub_60727340
 * address: 0x60727340   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60727340(int *a1, int a2)
{
  unsigned int *v3; // r0
  int i; // r2
  unsigned int v5; // r6
  unsigned int v6; // r5
  int *v7; // r7
  int v8; // r6
  int *v9; // r7
  int *v10; // r7
  int v11; // r6
  int *v12; // r7
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r2
  int v16; // r1
  int v17; // r2
  int *v18; // r3
  int v19; // r6
  int result; // r0
  __int16 *v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r2
  __int16 v25; // r2
  int v26; // r1
  _WORD *v27; // r0
  int v28; // r6
  __int16 v29; // r6
  int v30; // r5
  __int16 *v31; // r1
  int v32; // r2
  int v33; // r2
  __int16 v34; // r2
  _WORD *j; // r1
  int v36; // r7
  __int16 v37; // r6
  int v38; // r7

  if ( a2 )
  {
    v3 = (unsigned int *)(a2 + 4);
    for ( i = 0; i != 15; ++i )
    {
      v5 = *(_DWORD *)((char *)&unk_60B0A0BC + i * 4);
      v6 = *v3 - 4;
      if ( *v3 <= 4 )
        v6 = *v3;
      if ( i != 7 )
        v6 = *v3;
      if ( v6 % v5 || v5 > v6 )
      {
        v9 = &a1[i];
        v8 = 0;
        v9[1] = 0;
        v9[16] = 0;
      }
      else
      {
        v7 = &a1[i];
        v7[1] = *(v3 - 1) + a2;
        v8 = *v3 / v5;
        v7[16] = *v3;
      }
      v10 = &a1[i];
      v3 += 2;
      v10[31] = v8;
    }
    v12 = a1 + 38;
    v11 = a1[38];
    memset(a1 + 46, 0, 768);
    if ( v11 )
    {
      v13 = a1[8];
      v14 = 16;
      do
      {
        v15 = *(unsigned __int8 *)(v13 + v14);
        if ( v15 <= 0x3F )
          ++a1[v15 + 110];
        v14 += 24;
        --v11;
      }
      while ( v11 );
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = &a1[v16++];
        v18[46] = v13;
        v19 = v18[110];
        v18[174] = v17;
        v17 += v19;
        v13 += 24 * v19;
      }
      while ( v16 != 64 );
    }
  }
  else
  {
    memset(a1 + 1, 0, 180);
    memset(a1 + 46, 0, 768);
    v12 = a1 + 38;
  }
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    return result;
  v21 = (__int16 *)a1[9];
  if ( v21 )
  {
    v22 = a1[39];
    if ( v22 >= 1 )
    {
      v23 = 0;
      if ( (v22 & 1) == 0 )
        goto LABEL_31;
      v24 = (unsigned __int16)*v21;
      if ( v24 == 557 )
      {
        v25 = 689;
      }
      else
      {
        if ( v24 != 423 )
        {
LABEL_30:
          v21 += 2;
          v23 = 1;
LABEL_31:
          if ( v22 != 1 )
          {
            v26 = v22 - v23;
            v27 = v21 + 2;
            while ( 1 )
            {
              v28 = (unsigned __int16)*(v27 - 2);
              if ( v28 == 557 )
                break;
              if ( v28 == 423 )
              {
                v29 = 670;
LABEL_37:
                *(v27 - 2) = v29;
              }
              v30 = (unsigned __int16)*v27;
              if ( v30 == 423 )
              {
                *v27 = 670;
              }
              else if ( v30 == 557 )
              {
                *v27 = 689;
              }
              v27 += 4;
              v26 -= 2;
              if ( !v26 )
                goto LABEL_44;
            }
            v29 = 689;
            goto LABEL_37;
          }
          goto LABEL_44;
        }
        v25 = 670;
      }
      *v21 = v25;
      goto LABEL_30;
    }
  }
LABEL_44:
  result = *v12;
  if ( *v12 < 1 )
    return result;
  v31 = (__int16 *)a1[8];
  if ( !v31 )
    return result;
  v32 = 0;
  if ( (result & 1) == 0 )
    goto LABEL_53;
  v33 = (unsigned __int16)*v31;
  if ( v33 == 557 )
  {
    v34 = 689;
    goto LABEL_51;
  }
  if ( v33 == 423 )
  {
    v34 = 670;
LABEL_51:
    *v31 = v34;
  }
  v31 += 12;
  v32 = 1;
LABEL_53:
  if ( result != 1 )
  {
    result -= v32;
    for ( j = v31 + 12; ; j += 24 )
    {
      v36 = (unsigned __int16)*(j - 12);
      if ( v36 == 557 )
        break;
      if ( v36 == 423 )
      {
        v37 = 670;
LABEL_59:
        *(j - 12) = v37;
      }
      v38 = (unsigned __int16)*j;
      if ( v38 == 423 )
      {
        *j = 670;
      }
      else if ( v38 == 557 )
      {
        *j = 689;
      }
      result -= 2;
      if ( !result )
        return result;
    }
    v37 = 689;
    goto LABEL_59;
  }
  return result;
}
