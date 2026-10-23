/* sub_6051BD84
 * address: 0x6051BD84   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051BD84(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r5
  int v4; // r7
  int i; // r2

  v1 = 0;
  v2 = sub_6047482C(FIELD_U32(a1, 4), 0);
  v3 = v2;
  if ( v2 )
  {
    v4 = FIELD_U32(v2, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8BF0 + 12))(&dword_60CA8BF0);
    (*(void (__fastcall **)(int *))(dword_60CA8BF0 + 12))(&dword_60CA8BF0);
    if ( dword_60CA8BF4 == v4 )
    {
      return FIELD_U8(v3, 51) & 1;
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA8BF4 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA8BF4 + i - 1) )
          return FIELD_U8(v3, 51) & 1;
        if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA8BF4 + i) != *(unsigned __int8 *)(v4 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA8BF4 + i) )
          return FIELD_U8(v3, 51) & 1;
      }
    }
  }
  return v1;
}
