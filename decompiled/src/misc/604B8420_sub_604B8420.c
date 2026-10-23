/* sub_604B8420
 * address: 0x604B8420   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B8420(int a1)
{
  int v1; // r5
  int v2; // r8
  int v3; // r6
  int v4; // r0
  int v5; // r1
  int i; // r3
  int v7; // r1
  int j; // r3

  v1 = a1 + 4;
  v2 = 0;
  v3 = dword_60CA24E4;
  v4 = sub_6047482C(a1 + 4, 0);
  if ( v4 )
  {
    v5 = FIELD_U32(v4, 56);
    if ( v3 == v5 )
      return (FIELD_U8(v4, 51) >> 2) & 1;
    for ( i = 1; *(unsigned __int8 *)(v3 + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v3 + i - 1) )
        return (FIELD_U8(v4, 51) >> 2) & 1;
      if ( i >= 524289 || *(unsigned __int8 *)(v3 + i) != *(unsigned __int8 *)(v5 + i) )
        break;
      if ( !*(_BYTE *)(v3 + i) )
        return (FIELD_U8(v4, 51) >> 2) & 1;
    }
  }
  v4 = sub_6047482C(v1, 1u);
  if ( !v4 )
    return v2;
  v7 = FIELD_U32(v4, 56);
  if ( v3 == v7 )
    return (FIELD_U8(v4, 51) >> 2) & 1;
  for ( j = 1; *(unsigned __int8 *)(v3 + j - 1) == *(unsigned __int8 *)(v7 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(v3 + j - 1) )
      return (FIELD_U8(v4, 51) >> 2) & 1;
    if ( j >= 524289 || *(unsigned __int8 *)(v3 + j) != *(unsigned __int8 *)(v7 + j) )
      break;
    if ( !*(_BYTE *)(v3 + j) )
      return (FIELD_U8(v4, 51) >> 2) & 1;
  }
  return v2;
}
