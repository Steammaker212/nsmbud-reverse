/* sub_604E6A14
 * address: 0x604E6A14   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E6A14(int a1)
{
  unsigned int v1; // r4
  int v2; // r6
  unsigned int v3; // r0
  unsigned int *v4; // r5
  int v5; // r0
  unsigned int v6; // r2
  int v7; // r0
  int result; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r1

  v1 = 0;
  v2 = 0;
  v4 = (unsigned int *)(a1 + 62856);
  v3 = FIELD_U32(a1, 62856);
  if ( v3 <= 3 )
  {
    v5 = sub_60834614(v3);
    v6 = 0;
    v2 = 0;
    v1 = 0;
    if ( *v4 < 6 )
      v6 = *v4;
    v3 = v5 + 72 * v6;
    if ( FIELD_U8(v3, 20) )
    {
      v2 = FIELD_U32(v3, 72);
      v1 = *v4;
    }
  }
  v7 = sub_60834614(v3);
  result = sub_60834614(v7);
  if ( FIELD_U8(result, 20) )
  {
    v9 = FIELD_U32(result, 72);
    if ( v2 < v9 )
    {
      v1 = 0;
      v2 = v9;
    }
    result = sub_60834614(v9);
    if ( FIELD_U8(result, 92) )
    {
      v10 = FIELD_U32(result, 144);
      if ( v2 < v10 )
      {
        v1 = 1;
        v2 = v10;
      }
      result = sub_60834614(v10);
      if ( FIELD_U8(result, 164) )
      {
        v11 = FIELD_U32(result, 216);
        if ( v2 < v11 )
        {
          v1 = 2;
          v2 = v11;
        }
        result = sub_60834614(v11);
        if ( FIELD_U8(result, 236) )
        {
          v12 = FIELD_U32(result, 288);
          if ( v2 < v12 )
          {
            v1 = 3;
            v2 = v12;
          }
          result = sub_60834614(v12);
          if ( FIELD_U8(result, 308) )
          {
            v13 = FIELD_U32(result, 360);
            if ( v2 < v13 )
            {
              v1 = 4;
              v2 = v13;
            }
            result = sub_60834614(v13);
            if ( FIELD_U8(result, 380) )
            {
              result = FIELD_U32(result, 432);
              if ( v2 < result )
              {
                v1 = 5;
                v2 = result;
              }
            }
          }
        }
      }
    }
  }
  if ( v2 >= 2 )
  {
    result = *v4;
    if ( *v4 != v1 )
    {
      *v4 = v1;
      result = PlayerMgr_instance;
      if ( PlayerMgr_instance )
      {
        v14 = v1;
        if ( v1 >= 4 )
          v14 = 0;
        result = PlayerMgr_instance + 4 * v14;
        v15 = FIELD_U32(result, 32);
        if ( v15 )
        {
          result = dword_60C9A1E8;
          if ( dword_60C9A1E8 )
            return sub_60407E74(dword_60C9A1E8, v15 + 108, 0x20u, v1, 0, FIELD_U32(v15, 8));
        }
      }
    }
  }
  return result;
}
