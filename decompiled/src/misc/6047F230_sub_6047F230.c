/* sub_6047F230
 * address: 0x6047F230   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047F230(int a1)
{
  int v1; // r0
  int v2; // r0

  v2 = FIELD_U32(a1, 28);
  if ( !v2 || FIELD_U8(v2, 168) )
    return 1;
  if ( FIELD_U8(v2, 160) )
  {
    v1 = FIELD_U32(v2, 116);
    if ( !v1 )
      return 1;
  }
  else
  {
    v1 = FIELD_U32(v2, 132);
    if ( !v1 )
      return 0;
  }
  return FIELD_U8(v1, 51) & 1;
}
