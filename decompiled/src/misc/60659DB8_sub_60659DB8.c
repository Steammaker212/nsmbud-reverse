/* sub_60659DB8
 * address: 0x60659DB8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60659DB8(int result)
{
  int *v1; // r1
  float v2; // s0
  float v3; // s2

  FIELD_U32(result, 6140) = 0;
  FIELD_U32(result, 6104) = sub_6065C404;
  FIELD_U32(result, 6108) = 0;
  if ( FIELD_U32(result, 6148) == 1 )
  {
    FIELD_U32(result, 6152) = 0;
    v1 = (int *)(result + 6152);
    v2 = FIELD_F32(result, 6136);
    v3 = FIELD_F32(result, 6124);
    if ( v2 != v3 )
    {
      FIELD_U32(result, 6144) = 0;
      result = 2;
      if ( v2 > v3 )
        result = 1;
      *v1 = result;
    }
  }
  return result;
}
