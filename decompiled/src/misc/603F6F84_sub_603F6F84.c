/* sub_603F6F84
 * address: 0x603F6F84   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F6F84(unsigned __int8 *a1)
{
  unsigned int v2; // r8
  int v3; // r10
  int v4; // r0
  int v5; // r7
  int v6; // r9
  int v7; // r0
  int v8; // r1
  unsigned __int8 *v9; // r3
  unsigned int v10; // r2
  unsigned __int8 v11; // r5
  int v12; // r3
  int v13; // r6
  int v14; // r5
  unsigned int v15; // r7
  unsigned __int8 *v16; // r0
  unsigned int v17; // r0
  int v18; // r1
  int v19; // r3

  v2 = 0;
  while ( 1 )
  {
    v3 = (unsigned __int8)v2;
    v4 = sub_6040E5B0((unsigned __int8)v2++, 0, 0);
    v5 = v4;
    v6 = sub_6040E5B0((unsigned __int8)v2, 0, 0);
    v7 = sub_6040E54C(v3);
    if ( v7 >= 1 )
      break;
LABEL_23:
    v14 = v7 + v5 + sub_6040E560(v3);
    v15 = v14 + sub_6040E574(v3);
    if ( sub_6040E59C(v3) )
      ++v15;
    while ( (int)v15 < v6 )
    {
      v16 = a1;
      if ( v15 < 0x7B )
        v16 = &a1[v15];
      v17 = *v16;
      if ( (v17 & 0x40) != 0 )
      {
        v18 = 3;
        if ( (v17 & 4) == 0 )
          v18 = 5 - ((v17 >> 4) & 1);
        if ( (v17 & 0x80u) != 0 )
        {
LABEL_41:
          v19 = 3;
          if ( (v17 & 8) == 0 )
            v19 = 5 - ((v17 >> 5) & 1);
          goto LABEL_43;
        }
      }
      else
      {
        v18 = 2;
        if ( (v17 & 2) == 0 )
          v18 = v17 & 1;
        if ( (v17 & 0x80u) != 0 )
          goto LABEL_41;
      }
      v19 = 2;
      if ( (v17 & 2) == 0 )
        v19 = v17 & 1;
LABEL_43:
      if ( v18 > v19 )
        v19 = v18;
      if ( v19 < 5 )
        return 0;
      ++v15;
    }
    if ( v2 >= 8 )
      return 1;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = a1;
    if ( (unsigned int)(v5 + v8) < 0x7B )
      v9 = &a1[v5 + v8];
    v10 = *v9;
    v11 = *v9;
    if ( (v10 & 0x40) != 0 )
    {
      v12 = 3;
      if ( (v11 & 4) == 0 )
        v12 = 5 - ((v10 >> 4) & 1);
      if ( (v10 & 0x80u) != 0 )
      {
LABEL_17:
        v13 = 3;
        if ( (v11 & 8) == 0 )
          v13 = 5 - ((v10 >> 5) & 1);
        goto LABEL_19;
      }
    }
    else
    {
      v12 = 2;
      if ( (v11 & 2) == 0 )
        v12 = v10 & 1;
      if ( (v10 & 0x80u) != 0 )
        goto LABEL_17;
    }
    v13 = 2;
    if ( (v11 & 2) == 0 )
      v13 = v10 & 1;
LABEL_19:
    if ( v12 > v13 )
      v13 = v12;
    if ( v13 < 5 )
      return 0;
    if ( ++v8 >= v7 )
      goto LABEL_23;
  }
}
