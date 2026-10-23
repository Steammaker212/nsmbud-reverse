/* sub_603F6C14
 * address: 0x603F6C14   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F6C14(unsigned __int8 *a1, int a2)
{
  int v4; // r5
  int v5; // r11
  int v6; // r9
  int v7; // r12
  unsigned int v8; // r0
  int v9; // r1
  unsigned __int8 *v10; // r2
  unsigned int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r6
  int v15; // r2
  int v16; // r6
  int v17; // r7
  int v18; // r11
  int v19; // r4
  int v20; // r8
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r12
  unsigned __int8 *v24; // r2
  unsigned int v25; // r2
  int v26; // r7
  int v27; // r4
  int v28; // r6
  int v29; // r7
  int v30; // r6
  int v31; // r2
  int v33; // [sp+0h] [bp-28h]

  v4 = 0;
  v5 = sub_6040E5B0(a2, 0, 0);
  v6 = 123;
  if ( (unsigned int)(a2 + 1) <= 8 )
    v6 = sub_6040E5B0((unsigned __int8)(a2 + 1), 0, 0);
  v7 = sub_6040E54C(a2);
  if ( v7 >= 1 )
  {
    v4 = 0;
    v8 = v5;
    v9 = v7;
    do
    {
      v10 = a1;
      if ( v8 < 0x7B )
        v10 = &a1[v8];
      v11 = *v10;
      if ( (v11 & 0x40) != 0 )
      {
        v12 = 3;
        if ( (v11 & 4) == 0 )
          v12 = 5 - ((v11 >> 4) & 1);
      }
      else
      {
        v12 = 2;
        if ( (v11 & 2) == 0 )
          v12 = v11 & 1;
      }
      v13 = v12 > 3;
      if ( (v11 & 0x80u) != 0 )
      {
        v14 = 3;
        if ( (v11 & 8) == 0 )
          v14 = 5 - ((v11 >> 5) & 1);
      }
      else
      {
        v14 = 2;
        if ( (v11 & 2) == 0 )
          v14 = v11 & 1;
      }
      v15 = 1;
      ++v8;
      if ( v12 > 3 )
        v15 = 2;
      if ( v14 > 3 )
        v13 = v15;
      --v9;
      v4 += v13;
    }
    while ( v9 );
  }
  v16 = v7;
  v17 = v5;
  v18 = sub_6040E560(a2);
  v19 = sub_6040E574(a2);
  v33 = a2;
  v20 = sub_6040E59C(a2);
  v21 = sub_6040E5B0(5, 22, 0);
  v22 = v16 + v17 + v18 + v19;
  if ( v20 )
    ++v22;
  if ( (int)v22 < v6 )
  {
    v23 = v33;
    while ( 1 )
    {
      v24 = a1;
      if ( v22 < 0x7B )
        v24 = &a1[v22];
      v25 = *v24;
      if ( v21 != v22 )
      {
        if ( (v25 & 0x40) != 0 )
        {
          v27 = 3;
          if ( (v25 & 4) == 0 )
            v27 = 5 - ((v25 >> 4) & 1);
        }
        else
        {
          v27 = 2;
          if ( (v25 & 2) == 0 )
            v27 = v25 & 1;
        }
        v29 = v27 > 3;
        if ( (v25 & 0x80u) != 0 )
        {
          v30 = 3;
          if ( (v25 & 8) == 0 )
            v30 = 5 - ((v25 >> 5) & 1);
        }
        else
        {
          v30 = 2;
          if ( (v25 & 2) == 0 )
            v30 = v25 & 1;
        }
        v31 = 1;
        if ( v27 > 3 )
          v31 = 2;
        if ( v30 > 3 )
          v29 = v31;
        goto LABEL_63;
      }
      if ( (v25 & 0x40) != 0 )
      {
        v26 = 3;
        if ( (v25 & 4) == 0 )
          v26 = 5 - ((v25 >> 4) & 1);
        if ( (v25 & 0x80u) == 0 )
        {
LABEL_43:
          v28 = 2;
          if ( (v25 & 2) == 0 )
            v28 = v25 & 1;
          goto LABEL_54;
        }
      }
      else
      {
        v26 = 2;
        if ( (v25 & 2) == 0 )
          v26 = v25 & 1;
        if ( (v25 & 0x80u) == 0 )
          goto LABEL_43;
      }
      v28 = 3;
      if ( (v25 & 8) == 0 )
        v28 = 5 - ((v25 >> 5) & 1);
LABEL_54:
      if ( v26 > v28 )
        v28 = v26;
      v29 = v28 > 3;
LABEL_63:
      ++v22;
      v4 += v29;
      if ( v6 == v22 )
        goto LABEL_66;
    }
  }
  v23 = v33;
LABEL_66:
  sub_6040E588(v23);
  return v4;
}
