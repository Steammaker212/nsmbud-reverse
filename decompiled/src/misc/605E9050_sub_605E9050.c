/* sub_605E9050
 * address: 0x605E9050   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9050(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // lr
  int v5; // r3
  int result; // r0
  int v7; // r5
  int v8; // r5

  v2 = a1[9];
  if ( !v2 )
    return 0;
  v3 = a1[6];
  v4 = a1[7];
  v5 = a1[8];
  result = 0;
  do
  {
    v7 = v4;
    if ( v5 < v4 )
      v7 = 0;
    v8 = *(_DWORD *)(v3 - 4 * v7 + 4 * v5++);
    if ( FIELD_U32(v8, 6252) == a2 )
      ++result;
    --v2;
  }
  while ( v2 );
  return result;
}
