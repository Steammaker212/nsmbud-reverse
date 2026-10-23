/* sub_600E371C
 * address: 0x600E371C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E371C(int a1, char a2)
{
  int result; // r0

  if ( (FIELD_U8(a1, 6528) & 0x20) != 0 || (result = a1 + 6520, FIELD_F32(a1, 6520) == 0.0) )
  {
    sub_6041838C((ModelAnimation *)(a1 + 6504));
    FIELD_U32(a1, 6524) = 1065353216;
    FIELD_U8(a1, 6532) = a2;
    return 6532;
  }
  return result;
}
