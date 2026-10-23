/* sub_6091000C
 * address: 0x6091000C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091000C(int result)
{
  int v1; // r1
  int v2; // r1
  float v3; // s0

  v1 = FIELD_U32(result, 16);
  if ( v1 )
  {
    v2 = v1 - 1;
    FIELD_U32(result, 16) = v2;
    if ( v2 )
    {
      v3 = FIELD_F32(result, 4) - FIELD_F32(result, 12);
      FIELD_F32(result, 4) = v3;
    }
    else
    {
      v3 = FIELD_F32(result, 8);
      FIELD_F32(result, 4) = v3;
      FIELD_U32(result, 12) = 0;
    }
    result = FIELD_U32(result, 20);
    if ( result )
      return (**(int (__fastcall ***)(int, float))result)(result, v3);
  }
  return result;
}
