/* sub_60236074
 * address: 0x60236074   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236074(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // t1

  v4 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v3 = v4;
  if ( v4 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v3, 32) )
    {
      result = sub_60881DE8(result);
      if ( FIELD_S32(result, 352) >= 1 )
      {
        if ( FIELD_U8(result, 8) )
          return EffectData_init_helper();
      }
    }
  }
  return result;
}
