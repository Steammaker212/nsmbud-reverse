/* sub_602EEFE4
 * address: 0x602EEFE4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EEFE4(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int result; // r0
  bool v7; // zf

  v4 = FIELD_U32(a2, 64);
  v5 = FIELD_U32(a1, 64);
  result = Actor__getProfileId((Actor *)v4);
  if ( result != 392 )
  {
    result = FIELD_U8(v5, 7525);
    if ( !FIELD_U8(v5, 7525) )
    {
      result = FIELD_U32(v5, 7368);
      v7 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 74);
        v7 = result == 0;
      }
      if ( v7 )
      {
        result = FIELD_U32(a2, 140);
        if ( result == 4 )
        {
          sub_602EE7D8(v5, FIELD_F32(v5, 108) <= FIELD_F32(v4, 108), 0xFFFFFFFF, 0);
          result = FIELD_U8(a1, 110) | 2;
          FIELD_U8(a1, 110) = result;
        }
      }
    }
  }
  return result;
}
