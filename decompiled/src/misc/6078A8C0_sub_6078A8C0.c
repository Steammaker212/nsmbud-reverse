/* sub_6078A8C0
 * address: 0x6078A8C0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A8C0(int result)
{
  __int16 v1; // r1
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r2

  v1 = FIELD_U16(result, 164);
  if ( (v1 & 1) != 0 )
  {
    v2 = FIELD_U32(result, 32);
    if ( !v2 || FIELD_S32(v2, 11400) <= 59 )
    {
      v3 = FIELD_U32(result, 36);
      if ( !v3 || FIELD_S32(v3, 11400) <= 59 )
      {
        v4 = FIELD_U32(result, 40);
        if ( !v4 || FIELD_S32(v4, 11400) <= 59 )
        {
          v5 = FIELD_U32(result, 44);
          if ( !v5 || FIELD_S32(v5, 11400) <= 59 )
          {
            FIELD_U16(result, 164) = v1 & 0xFFFE;
            return sub_60816F60(dword_60CC6B68, 4);
          }
        }
      }
    }
  }
  return result;
}
