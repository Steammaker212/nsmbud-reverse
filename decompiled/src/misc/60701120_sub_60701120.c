/* sub_60701120
 * address: 0x60701120   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60701120(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r0
  int v5; // r1

  v2 = sub_60700A2C(a1);
  result = 2;
  if ( v2 != 2 )
  {
    LOWORD(v4) = 0;
    LOWORD(v5) = 0;
    if ( (FIELD_U8(a1, 26) & 1) != 0 )
    {
      HIWORD(v4) = 17216;
      HIWORD(v5) = 17280;
      FIELD_U32(a1, 500) = v4;
      FIELD_U32(a1, 504) = v5;
      FIELD_U32(a1, 508) = 1115684864;
      FIELD_U32(a1, 512) = v5;
    }
    else
    {
      HIWORD(v4) = 17024;
      HIWORD(v5) = 17280;
      FIELD_U32(a1, 500) = v4;
      FIELD_U32(a1, 504) = v5;
      FIELD_U32(a1, 508) = v4;
      FIELD_U32(a1, 512) = v5;
      FIELD_U32(a1, 7992) = 1111490560;
      FIELD_U32(a1, 7996) = 1140850688;
    }
    return 1;
  }
  return result;
}
