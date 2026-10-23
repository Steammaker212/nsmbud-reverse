/* sub_608CF3DC
 * address: 0x608CF3DC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF3DC(int a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r4
  int result; // r0

  v2 = FIELD_U32(a1, 4);
  if ( v2 == a1 )
    return 0;
  v3 = FIELD_U32(a1, 4);
  while ( 1 )
  {
    v2 = FIELD_U32(v2, 4);
    if ( FIELD_U32(v3, 8) <= a2 && FIELD_U32(v3, 12) > a2 )
      break;
    v3 = v2;
    if ( v2 == a1 )
      return 0;
  }
  result = sub_608CF3DC(v3 + 20);
  if ( !result )
    return v3;
  return result;
}
