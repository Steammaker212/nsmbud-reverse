/* sub_6038017C
 * address: 0x6038017C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038017C(int a1)
{
  int v2; // r0
  float *v3; // r5
  int v4; // r2
  int v5; // r3
  float v6; // s1
  int result; // r0
  int v8; // r4
  int *v9; // r5

  v3 = (float *)(a1 + 6304);
  v2 = FIELD_U32(a1, 6304);
  v4 = *((char *)v3 - 180);
  if ( v4 >= 0 )
  {
    v5 = *((char *)v3 - 172);
    v6 = (float)(*(float *)(*(_DWORD *)v2 + 76) - *(v3 - 1548)) + 8.0;
    if ( (unsigned __int8)v5 > 3u )
    {
      if ( (unsigned __int8)v5 == 4 )
        sub_600229B0(8.0, v6, dword_60C7F52C, a1, v4);
    }
    else
    {
      sub_60022760(8.0, v6, dword_60C7F52C, a1, v4, v5);
    }
  }
  result = 6300;
  v8 = FIELD_U32(a1, 6300);
  if ( v8 )
  {
    v9 = *(int **)v3;
    do
    {
      result = *v9;
      if ( *(_BYTE *)(*v9 + 128) )
        result = sub_60386654(result + 12, 4);
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
