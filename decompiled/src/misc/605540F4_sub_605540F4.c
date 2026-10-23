/* sub_605540F4
 * address: 0x605540F4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605540F4(_DWORD *a1)
{
  int v1; // r6
  int v2; // r7
  _DWORD *v4; // r4
  int v5; // r0
  bool v6; // zf
  int result; // r0
  bool v8; // zf
  int *v9; // r1
  float v10; // s0
  int *v11; // r1
  float v12; // s0

  v4 = a1 + 11;
  v5 = sub_6047482C((int)(a1 + 11), 2u);
  v6 = v5 == 0;
  if ( v5 )
  {
    v1 = 0;
    v6 = FIELD_U8(v5, 20) == 0;
  }
  if ( v6 )
  {
    v1 = 1;
    sub_604742D0(v4, 2u, &dword_60CAD020, a1[17563], 1.0, 1);
  }
  result = sub_6047482C((int)v4, 3u);
  v8 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 20);
    v2 = 0;
    v8 = result == 0;
  }
  if ( v8 )
  {
    v2 = 1;
    result = sub_604742D0(v4, 3u, &dword_60CAD020, a1[17564], 1.0, 1);
  }
  if ( v1 == 1 )
  {
    v9 = (int *)a1[889];
    if ( a1[888] > 3u )
      v9 += 15;
    result = *v9;
    if ( *(float *)(*v9 + 44) != 0.0 )
    {
      v10 = sub_6047457C((int)v4, 3u);
      result = sub_6047455C((int)v4, 2u, v10);
    }
  }
  if ( v2 == 1 )
  {
    v11 = (int *)a1[889];
    if ( a1[888] > 2u )
      v11 += 10;
    result = *v11;
    if ( *(float *)(*v11 + 44) != 0.0 )
    {
      v12 = sub_6047457C((int)v4, 2u);
      return sub_6047455C((int)v4, 3u, v12);
    }
  }
  return result;
}
