/* sub_6091FE5C
 * address: 0x6091FE5C   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091FE5C(int a1)
{
  unsigned int v2; // r9
  int result; // r0
  unsigned int v4; // r10
  unsigned int v5; // r3
  int v6; // r11
  unsigned int v7; // r7
  char v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  unsigned int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r7
  int v16; // r5
  char v17; // r6
  int v18; // r4
  int v19; // r2
  int v20; // r1
  unsigned int v21; // r1
  unsigned int v22; // r2
  char v23; // r7
  int v24; // r1
  int v25; // r2
  int v26; // r1
  int v27; // r2
  unsigned int v28; // r6
  int v29; // r4
  int v30; // r5

  sub_60972434(a1 + 24);
  v2 = FIELD_U16(a1, 34);
  result = 1;
  if ( v2 - 5 >= 2 )
  {
    v4 = FIELD_U16(a1, 26);
    v5 = FIELD_U16(a1, 24);
    v6 = 1;
    result = 1;
    if ( v2 == 3 )
      v6 = FIELD_U16(a1, 26);
    if ( v2 == 4 )
    {
      v15 = FIELD_U16(a1, 28);
      while ( 1 )
      {
        v16 = 1;
        v17 = result - 1;
        if ( (int)(v5 >> result) > 1 )
          v16 = v5 >> result;
        v18 = 1;
        if ( (int)(v5 >> (result - 1)) > 1 )
          v18 = v5 >> v17;
        if ( v16 == v18 )
        {
          v19 = v6;
          v20 = v6;
          if ( v6 <= (int)(v4 >> v17) )
            v19 = v4 >> v17;
          if ( v6 <= (int)(v4 >> result) )
            v20 = v4 >> result;
          if ( v20 == v19 )
          {
            v21 = FIELD_U16(a1, 28);
            v22 = v21;
            if ( (int)v15 <= (int)(v15 >> v17) )
              v21 = v15 >> v17;
            if ( (int)v15 <= (int)(v15 >> result) )
              v22 = v15 >> result;
            if ( v22 == v21 )
              break;
          }
        }
        ++result;
      }
    }
    else if ( v2 == 8 )
    {
      v7 = FIELD_U16(a1, 28);
      for ( result = 1; ; ++result )
      {
        v8 = result - 1;
        v9 = 1;
        if ( (int)(v5 >> result) > 1 )
          v9 = v5 >> result;
        v10 = 1;
        if ( (int)(v5 >> (result - 1)) > 1 )
          v10 = v5 >> v8;
        if ( v9 == v10 )
        {
          v11 = v6;
          v12 = v6;
          if ( v6 <= (int)(v4 >> v8) )
            v11 = v4 >> v8;
          if ( v6 <= (int)(v4 >> result) )
            v12 = v4 >> result;
          if ( v12 == v11 )
          {
            v13 = FIELD_U16(a1, 28);
            v14 = v13;
            if ( (int)v7 <= (int)(v7 >> v8) )
              v13 = v7 >> v8;
            if ( (int)v7 <= (int)(v7 >> result) )
              v14 = v7 >> result;
            if ( v14 == v13 )
              break;
          }
        }
      }
    }
    else
    {
      for ( result = 1; ; ++result )
      {
        v23 = result - 1;
        v24 = 1;
        if ( (int)(v5 >> result) > 1 )
          v24 = v5 >> result;
        v25 = 1;
        if ( (int)(v5 >> (result - 1)) > 1 )
          v25 = v5 >> v23;
        if ( v24 == v25 )
        {
          v26 = v6;
          v27 = v6;
          if ( v6 <= (int)(v4 >> v23) )
            v26 = v4 >> v23;
          if ( v6 <= (int)(v4 >> result) )
            v27 = v4 >> result;
          if ( v27 == v26 )
          {
            if ( v2 <= 8 && ((1 << v2) & 0x150) != 0 )
            {
              v28 = FIELD_U16(a1, 28);
              v29 = v28;
            }
            else
            {
              v28 = FIELD_U16(a1, 28);
              v29 = 1;
            }
            v30 = 1;
            if ( v29 <= (int)(v28 >> result) )
              v29 = v28 >> result;
            if ( v2 <= 8 && ((1 << v2) & 0x150) != 0 )
              v30 = v28;
            if ( v30 <= (int)(v28 >> v23) )
              v30 = v28 >> v23;
            if ( v29 == v30 )
              break;
          }
        }
      }
    }
  }
  FIELD_U8(a1, 62) = result;
  return result;
}
