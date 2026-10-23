/* sub_60910068
 * address: 0x60910068   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60910068(int result, unsigned int a2, float a3)
{
  float v3; // s2

  v3 = FIELD_F32(result, 4);
  if ( v3 == a3 )
  {
    FIELD_U32(result, 16) = 0;
  }
  else
  {
    FIELD_F32(result, 8) = a3;
    FIELD_U32(result, 16) = a2;
    if ( a2 )
    {
      FIELD_F32(result, 12) = (float)(v3 - a3) / (float)a2;
    }
    else
    {
      FIELD_F32(result, 4) = a3;
      FIELD_U32(result, 12) = 0;
      result = FIELD_U32(result, 20);
      if ( result )
        return (**(int (__fastcall ***)(int))result)(result);
    }
  }
  return result;
}
