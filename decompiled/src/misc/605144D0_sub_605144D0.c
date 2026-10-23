/* sub_605144D0
 * address: 0x605144D0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605144D0(int result)
{
  int v1; // r1
  int v2; // r1

  FIELD_U8(result, 4650) = 1;
  v1 = FIELD_U32(result, 14980);
  if ( (unsigned int)(v1 - 1) >= 4 )
    v1 = 1;
  v2 = result + 4 * v1;
  FIELD_U32(result, 4624) = FIELD_U32(v2, 12892);
  FIELD_U32(result, 4628) = FIELD_U32(v2, 12892);
  FIELD_U8(result, 4639) = 0;
  FIELD_U8(result, 4636) = 1;
  return result;
}
