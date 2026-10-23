/* sub_608B03B0
 * address: 0x608B03B0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B03B0(int a1, int a2, float a3)
{
  int result; // r0
  int v7; // r5

  if ( a2 >= 4 )
  {
    result = FIELD_U32(a1, 388);
    if ( result )
    {
      result = sub_608B0F28();
      if ( result == 1 )
      {
        v7 = a2 - 4;
        result = sub_608B0EE4(FIELD_U32(a1, 388));
        if ( FIELD_U32(result, 4) > v7 )
        {
          result = *(_DWORD *)result + 4 * v7;
          *(float *)result = a3;
        }
      }
    }
  }
  else
  {
    result = a1 + 4 * a2;
    FIELD_F32(result, 292) = a3;
  }
  return result;
}
