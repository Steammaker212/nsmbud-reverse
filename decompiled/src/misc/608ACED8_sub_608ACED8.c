/* sub_608ACED8
 * address: 0x608ACED8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACED8(int a1, int a2)
{
  int v2; // lr
  int v3; // r3
  int i; // r2
  int v5; // r12
  int v6; // r2
  int v7; // r0
  int v8; // r3
  int v9; // r2

  v2 = FIELD_U32(a1, 32);
  if ( !v2 )
    return 0;
  v3 = FIELD_U32(a1, 4);
  for ( i = 0; v3 != a1; ++i )
    v3 = FIELD_U32(v3, 4);
  v5 = 1;
  if ( i < v2 )
    return v5;
  v6 = FIELD_U32(a1, 12);
  v7 = FIELD_U8(a1, 88);
  v5 = 0;
  v8 = *(unsigned __int8 *)(v6 - 216) + *(_DWORD *)(v6 - 340);
  v9 = 0;
  if ( v8 > 0 )
    v9 = v8;
  if ( v8 > 127 )
    v9 = 127;
  if ( !v7 )
  {
    if ( v9 <= a2 )
      return 1;
    return v5;
  }
  if ( v9 < a2 )
    return 1;
  return v5;
}
