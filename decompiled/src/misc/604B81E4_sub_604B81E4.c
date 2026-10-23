/* sub_604B81E4
 * address: 0x604B81E4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B81E4(int a1)
{
  int v1; // r8
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int i; // r4
  int j; // r6

  v1 = 0;
  v2 = dword_60CA24B4;
  v3 = dword_60CA24DC;
  v4 = sub_6047482C(a1 + 4, 0);
  if ( v4 )
  {
    v5 = FIELD_U32(v4, 56);
    if ( v2 == v5 )
      return FIELD_U8(v4, 51) & 1;
    for ( i = 1; *(unsigned __int8 *)(v2 + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v2 + i - 1) )
        return FIELD_U8(v4, 51) & 1;
      if ( i >= 524289 || *(unsigned __int8 *)(v2 + i) != *(unsigned __int8 *)(v5 + i) )
        break;
      if ( !*(_BYTE *)(v2 + i) )
        return FIELD_U8(v4, 51) & 1;
    }
    if ( v3 == v5 )
    {
      return FIELD_U8(v4, 51) & 1;
    }
    else
    {
      for ( j = 1; *(unsigned __int8 *)(v3 + j - 1) == *(unsigned __int8 *)(v5 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(v3 + j - 1) )
          return FIELD_U8(v4, 51) & 1;
        if ( j >= 524289 || *(unsigned __int8 *)(v3 + j) != *(unsigned __int8 *)(v5 + j) )
          break;
        if ( !*(_BYTE *)(v3 + j) )
          return FIELD_U8(v4, 51) & 1;
      }
    }
  }
  return v1;
}
