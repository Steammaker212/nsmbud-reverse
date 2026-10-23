/* sub_608B0AA0
 * address: 0x608B0AA0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0AA0(int a1, int a2)
{
  int v2; // lr
  int v3; // r3
  int v4; // r12
  int v5; // r2
  int v6; // r0
  int result; // r0
  int v8; // r5
  int v9; // r2
  int v10; // lr
  int v11; // r0
  int v12; // r4
  int v13; // r3
  int v14; // r2

  v2 = FIELD_U32(a1, 12);
  if ( !v2 )
    return 0;
  v3 = FIELD_U32(a1, 8);
  v4 = a1 + 4;
  v5 = 0;
  if ( v3 != a1 + 4 )
  {
    v6 = FIELD_U32(a1, 8);
    do
    {
      v6 = FIELD_U32(v6, 4);
      ++v5;
    }
    while ( v6 != v4 );
  }
  if ( v5 < v2 )
    return 1;
  if ( v3 == v4 )
    return 0;
  v8 = 0;
  v9 = 128;
  do
  {
    v10 = *(_DWORD *)(v3 - 348);
    v11 = 0;
    v12 = *(unsigned __int8 *)(v3 - 224) + v10;
    if ( v12 > 0 )
      v11 = *(unsigned __int8 *)(v3 - 224) + v10;
    if ( v12 > 127 )
      v11 = 127;
    if ( v9 > v11 )
      v8 = v3 - 420;
    v3 = FIELD_U32(v3, 4);
    if ( v9 > v11 )
      v9 = v11;
  }
  while ( v3 != v4 );
  if ( !v8 )
    return 0;
  v13 = 0;
  v14 = FIELD_U8(v8, 196) + FIELD_U32(v8, 72);
  result = 0;
  if ( v14 > 0 )
    v13 = FIELD_U8(v8, 196) + FIELD_U32(v8, 72);
  if ( v14 > 127 )
    v13 = 127;
  if ( v13 <= a2 )
    return 1;
  return result;
}
