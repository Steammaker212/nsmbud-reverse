/* sub_604785EC
 * address: 0x604785EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604785EC(int a1)
{
  int v1; // r1
  bool v2; // zf
  int result; // r0

  v1 = FIELD_U32(a1, 64);
  v2 = (FIELD_U8(a1, 8) & 0x10) == 0;
  if ( (FIELD_U8(a1, 8) & 0x10) == 0 )
    v2 = FIELD_U8(a1, 168) == 0;
  if ( v2 )
    return 0;
  result = 0;
  if ( FIELD_U8(v1, 66) )
  {
    while ( (FIELD_U8(v1, 64) & 1) != 0 )
    {
      v1 = FIELD_U32(v1, 12);
      if ( !v1 )
        return 1;
    }
  }
  return result;
}
