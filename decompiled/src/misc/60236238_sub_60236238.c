/* sub_60236238
 * address: 0x60236238   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236238(int a1, float a2)
{
  int result; // r0
  int v4; // r2
  int v5; // t1

  v5 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v4 = v5;
  if ( v5 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v4, 32) )
    {
      result = sub_60881DE8(result);
      if ( FIELD_S32(result, 352) >= 1 )
      {
        if ( result )
        {
          if ( FIELD_U8(result, 8) )
            FIELD_F32(result, 480) = a2;
        }
      }
    }
  }
  return result;
}
