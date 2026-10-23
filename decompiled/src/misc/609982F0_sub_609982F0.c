/* sub_609982F0
 * address: 0x609982F0   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609982F0(unsigned __int16 *a1, int a2, int a3)
{
  int result; // r0
  unsigned __int16 v5; // r12
  unsigned __int16 *v6; // r1
  int v7; // r5
  __int16 v8; // r6
  unsigned int v9; // r3
  bool v10; // cc
  int v11; // r3
  unsigned int v12; // r1
  char v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r1

  result = 0;
  v5 = 0;
  if ( a2 >= 1 )
  {
    v6 = &a1[a2];
    v5 = 0;
LABEL_3:
    while ( 2 )
    {
      v7 = *a1;
      v8 = v7 | 1;
      while ( v8 == 15 )
      {
        if ( v7 == 15 )
        {
          a1 += 3;
          if ( a1 < v6 )
            goto LABEL_3;
          goto LABEL_17;
        }
        v8 = 15;
        if ( v7 == 14 )
        {
          a1 = (unsigned __int16 *)((char *)a1 + a1[3] + 8);
          if ( a1 < v6 )
            goto LABEL_3;
          goto LABEL_17;
        }
      }
      if ( (unsigned int)(v7 - 10) <= 0x16 && ((1 << (v7 - 10)) & 0x400009) != 0 || v7 == 12288 )
      {
        if ( ++a1 < v6 )
          continue;
      }
      else
      {
        v5 = *a1++;
        if ( a1 < v6 )
          continue;
      }
      break;
    }
  }
LABEL_17:
  if ( v5 )
  {
    if ( (unsigned __int16)(v5 + 21504) <= 0x2BA3u )
      return ((v5 - 44032) % 28 != 0) & (((v5 - 44032) % 28 != 8) | a3 ^ 1);
    v9 = (unsigned __int16)(v5 - 48);
    v10 = v9 > 0xA;
    if ( v9 >= 0xA )
      v10 = (unsigned __int16)(v5 + 240) > 9u;
    if ( v10 )
      return 1;
    v11 = -65296;
    if ( v5 < 0x3Au )
      v11 = -48;
    v12 = v11 + v5;
    if ( a3 == 1 )
    {
      if ( v12 >= 7 )
        return result;
      v13 = (v11 + v5) & 0x7F;
      v14 = 73;
    }
    else
    {
      v15 = v12 - 2;
      result = 1;
      if ( v15 >= 8 )
        return result;
      v13 = v15;
      v14 = 114;
    }
    return (v14 >> v13) & 1;
  }
  return result;
}
