/* sub_608C780C
 * address: 0x608C780C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C780C(int result, int a2)
{
  int v2; // r1

  v2 = FIELD_U32(result, 296) + a2;
  if ( v2 > FIELD_U32(result, 300) )
    v2 = FIELD_U32(result, 300);
  FIELD_U32(result, 296) = v2;
  return result;
}
