/* sub_609812D4
 * address: 0x609812D4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609812D4(int a1, int a2)
{
  unsigned int result; // r0
  float v5; // s16
  float v6; // s16

  if ( FIELD_U32(a1, 60) == a2 )
  {
    v6 = FIELD_F32(a2, 16);
    if ( v6 == (float)(unsigned int)sub_608502E4(a2) )
      goto LABEL_9;
  }
  result = FIELD_U32(a1, 56);
  if ( result != a2 )
    return result;
  if ( FIELD_F32(a2, 16) == 0.0 )
  {
LABEL_9:
    result = FIELD_U8(a1, 81);
    if ( FIELD_U8(a1, 81) )
    {
      if ( result != 3 )
        return result;
      FIELD_U8(a1, 81) = 0;
    }
    return sub_609810F8(a1, *(_DWORD *)(FIELD_U32(a1, 12) + 12) != 0);
  }
  else
  {
    v5 = FIELD_F32(a2, 16);
    result = sub_608502E4(a2);
    if ( v5 == (float)result )
    {
      result = FIELD_U8(a1, 81);
      if ( result == 1 )
      {
        result = 2;
        FIELD_U8(a1, 81) = 2;
      }
    }
  }
  return result;
}
