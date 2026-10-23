/* sub_6092318C
 * address: 0x6092318C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092318C(int result, int a2)
{
  int v2; // r2

  v2 = FIELD_U8(result, 48);
  if ( FIELD_U8(result, 48) )
    v2 = 1;
  if ( v2 != a2 )
  {
    FIELD_U8(result, 48) = a2;
    result = FIELD_U32(result, 32);
    FIELD_U32(result, 484) |= 1u;
  }
  return result;
}
