/* sub_608523F8
 * address: 0x608523F8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608523F8(int a1, int a2, float a3)
{
  _BOOL4 v6; // r0
  bool v7; // zf
  int result; // r0

  if ( (float)-(float)(unsigned int)sub_608502E4(a1) > a3 || (float)(unsigned int)sub_608502E4(a1) < a3 )
  {
    v6 = sub_60850310(a1);
    v7 = a2 == 0;
    if ( !a2 )
      v7 = v6;
    if ( !v7 )
      return sub_60850310(a1);
  }
  FIELD_U32(a1, 40) = a2;
  FIELD_F32(a1, 36) = a3;
  FIELD_U32(a1, 44) &= 0xFFFFFFF8;
  if ( a3 >= 0.0 )
  {
    FIELD_U32(a1, 16) = 0;
    return 0;
  }
  else
  {
    result = sub_608502E4(a1);
    FIELD_F32(a1, 16) = (float)(unsigned int)result;
  }
  return result;
}
