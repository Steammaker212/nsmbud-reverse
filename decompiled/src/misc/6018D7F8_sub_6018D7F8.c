/* sub_6018D7F8
 * address: 0x6018D7F8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6018D7F8(int a1, int a2)
{
  unsigned int result; // r0
  int v5; // r2

  result = FIELD_U8(a1, 349);
  if ( !result )
  {
    result = sub_6019ABC0() - 2;
    if ( result <= 5 )
    {
      result = FIELD_U32(dword_60CC6D78, 36);
      if ( result )
      {
        if ( result != 1 )
          return result;
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      sub_6018D8A0(a1, a2, v5);
      result = FIELD_U32(dword_60CC6D78, 500);
      if ( result - 1 <= 1 )
      {
        if ( result == 2 )
          FIELD_U32(a1, 324) = 0;
        return sub_6018D8A0(a1, a2, 1);
      }
    }
  }
  return result;
}
