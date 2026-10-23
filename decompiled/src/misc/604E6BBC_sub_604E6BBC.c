/* sub_604E6BBC
 * address: 0x604E6BBC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E6BBC(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r9
  int v5; // r8
  int v6; // r10
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r1
  int v10; // r1
  _DWORD *v11; // r1

  result = sub_60834614(a1);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    result = sub_60834614(result) + v3;
    if ( !FIELD_U8(result, 20) )
      break;
    v7 = FIELD_U32(result, 40);
    if ( v7 )
    {
      if ( v7 == 1 && v4 <= 2 )
      {
        v8 = 0;
        result = FIELD_U32(result, 32);
        if ( (unsigned int)v4 < 3 )
          v8 = v4;
        v9 = (_DWORD *)(a1 + 3620 * v8);
        if ( result == 6 || v9[1146] != result )
        {
          v9[1146] = result;
          result = (int)(v9 + 1145);
          v9[1145] |= 1u;
        }
        if ( (unsigned int)v5 <= 3 )
        {
          result = (int)(v9 + 1147);
          if ( v5 != v9[1147] )
          {
            *(_DWORD *)result = v5;
            result = v9[1145] | 1;
            v9[1145] = result;
          }
        }
        ++v4;
      }
    }
    else
    {
      if ( v6 <= 2 )
      {
        v10 = 0;
        result = FIELD_U32(result, 32);
        if ( (unsigned int)v6 < 3 )
          v10 = v6;
        v11 = (_DWORD *)(a1 + 3620 * v10);
        if ( result == 6 || v11[3861] != result )
        {
          v11[3861] = result;
          result = (int)(v11 + 3860);
          v11[3860] |= 1u;
        }
        if ( (unsigned int)v5 <= 3 )
        {
          result = (int)(v11 + 3862);
          if ( v5 != v11[3862] )
          {
            *(_DWORD *)result = v5;
            result = v11[3860] | 1;
            v11[3860] = result;
          }
        }
      }
      ++v6;
    }
    ++v5;
    v3 += 72;
  }
  while ( v5 < 6 );
  return result;
}
