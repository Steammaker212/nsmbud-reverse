/* sub_604E6204
 * address: 0x604E6204   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E6204(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r0
  bool v12; // zf
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf

  v1 = 0;
  if ( *(_DWORD *)(sub_60834614(a1) + 492) != 2 )
    return v1;
  v2 = sub_60834614(2);
  v3 = sub_60834614(v2);
  if ( !FIELD_U8(v3, 20) )
    return v1;
  v4 = FIELD_U32(v3, 40);
  v5 = sub_60834614(v3);
  if ( !FIELD_U8(v5, 92) )
    return v1;
  v6 = FIELD_U32(v5, 112);
  v7 = sub_60834614(v5);
  if ( !FIELD_U8(v7, 164) )
    return v1;
  v8 = FIELD_U32(v7, 184);
  v9 = v6 == 0;
  if ( !v4 )
    ++v9;
  if ( !v8 )
    ++v9;
  if ( v6 != 1 )
    v6 = 0;
  if ( v4 == 1 )
    ++v6;
  if ( v8 == 1 )
    ++v6;
  v10 = sub_60834614(v8);
  if ( FIELD_U8(v10, 236) )
  {
    v11 = FIELD_U32(v10, 256);
    if ( !v11 )
      ++v9;
    if ( v11 == 1 )
      ++v6;
    v10 = *(unsigned __int8 *)(sub_60834614(v11) + 308);
    if ( v10 )
      v10 = sub_60834614(v10);
    v12 = v6 == 3;
    if ( v6 == 3 )
    {
      v10 = 2;
      v12 = v9 == 1;
    }
    if ( !v12 )
    {
      v13 = v6 == 2;
      if ( v6 == 2 )
      {
        v10 = 4;
        v13 = v9 == 2;
      }
      if ( !v13 )
      {
        v14 = v6 == 1;
        v1 = 0;
        if ( v6 == 1 )
        {
          v10 = 5;
          v14 = v9 == 3;
        }
        if ( !v14 )
          return v1;
      }
    }
    return v10;
  }
  v15 = v6 == 2;
  if ( v6 == 2 )
  {
    v10 = 1;
    v15 = v9 == 1;
  }
  if ( v15 )
    return v10;
  v1 = 0;
  if ( v6 == 1 && v9 == 2 )
    return 3;
  return v1;
}
