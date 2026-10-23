/* sub_606734DC
 * address: 0x606734DC   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606734DC(_WORD *a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5
  __int16 v3; // lr
  __int16 v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r12
  unsigned int v7; // r1
  unsigned int v8; // r3
  unsigned int v9; // r6
  int v10; // r7
  unsigned int v11; // r7
  unsigned int v12; // r6
  int v13; // r7
  unsigned int v14; // r7
  unsigned int v15; // r4
  unsigned int v16; // r5
  int v17; // r0
  bool v18; // zf
  unsigned int v19; // r0
  int result; // r0

  v1 = (unsigned __int16)a1[3808];
  v2 = (unsigned __int16)a1[3807];
  v3 = a1[3806];
  v4 = a1[3805];
  if ( (v4 & 1) != 0 )
  {
    v8 = 0;
    v7 = ((v1 | v2) & 1) == 0;
LABEL_8:
    v5 = 0;
    v6 = 0;
    goto LABEL_9;
  }
  v5 = v2 & 1;
  if ( (v3 & 1) != 0 )
  {
    v7 = 0;
    v8 = (v1 & 1 | v5) == 0;
    goto LABEL_8;
  }
  v6 = v1 & 1;
  v7 = 0;
  v8 = 0;
  if ( (v2 & 1) != 0 )
    v6 = 0;
LABEL_9:
  v9 = v1 >> 1;
  if ( (v4 & 2) != 0 )
  {
    v7 += (v1 & 2) == 0 && (v2 & 2) == 0;
  }
  else
  {
    v10 = (v2 >> 1) & 1;
    if ( (v3 & 2) != 0 )
    {
      v18 = v10 == 0;
      v11 = v8;
      if ( v18 )
        v11 = v8 + 1;
      if ( (v1 & 2) == 0 )
        v8 = v11;
    }
    else
    {
      if ( v10 )
        ++v5;
      else
        v9 = (v1 & 2) != 0;
      if ( !v10 )
        v6 += v9;
    }
  }
  v12 = v1 >> 2;
  if ( (v4 & 4) != 0 )
  {
    v7 += (v1 & 4) == 0 && (v2 & 4) == 0;
  }
  else
  {
    v13 = (v2 >> 2) & 1;
    if ( (v3 & 4) != 0 )
    {
      v18 = v13 == 0;
      v14 = v8;
      if ( v18 )
        v14 = v8 + 1;
      if ( (v1 & 4) == 0 )
        v8 = v14;
    }
    else
    {
      if ( v13 )
        ++v5;
      else
        v12 = (v1 & 4) != 0;
      if ( !v13 )
        v6 += v12;
    }
  }
  v15 = v1 >> 3;
  v16 = v2 >> 3;
  if ( (v4 & 8) != 0 )
  {
    v7 += ((v15 | v16) & 1) == 0;
    if ( !(v6 | v5) )
    {
LABEL_54:
      if ( !(v8 | v7) )
        return 0;
      result = -1;
      if ( v7 > v8 )
        return 1;
      return result;
    }
  }
  else
  {
    v17 = v16 & 1;
    if ( (v3 & 8) != 0 )
    {
      v18 = v17 == 0;
      v19 = v8;
      if ( v18 )
        v19 = v8 + 1;
      if ( (v15 & 1) == 0 )
        v8 = v19;
      if ( !(v6 | v5) )
        goto LABEL_54;
    }
    else
    {
      v18 = v17 == 0;
      if ( (v16 & 1) != 0 )
        ++v5;
      else
        v17 = v15 & 1;
      if ( v18 )
        v6 += v17;
      if ( !(v6 | v5) )
        goto LABEL_54;
    }
  }
  result = -2;
  if ( v5 > v6 )
    return 2;
  return result;
}
