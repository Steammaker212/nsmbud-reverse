/* sub_604907CC
 * address: 0x604907CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604907CC(int a1)
{
  int v1; // r1

  FIELD_U8(a1, 64) = 1;
  if ( FIELD_S32(a1, 56) > 5 )
  {
    v1 = FIELD_U32(a1, 68);
    if ( FIELD_U32(a1, 48) == FIELD_U32(a1, 84) - 1 )
    {
      FIELD_U32(a1, 60) = 3;
      return sub_60505270(v1);
    }
    else
    {
      FIELD_U32(a1, 60) = 2;
      return sub_6050543C(v1);
    }
  }
  else
  {
    FIELD_U32(a1, 60) = 0;
    return sub_6050543C(FIELD_U32(a1, 68));
  }
}
