/* sub_603F056C
 * address: 0x603F056C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603F056C(int a1, int a2)
{
  int v2; // r2

  if ( !FIELD_U8(a1, 5762) || (v2 = 1, FIELD_U32(a1, 5740) != a2) )
  {
    if ( !FIELD_U8(a1, 11514) || (v2 = 1, FIELD_U32(a1, 11492) != a2) )
    {
      if ( !FIELD_U8(a1, 17266) || (v2 = 1, FIELD_U32(a1, 17244) != a2) )
      {
        if ( !FIELD_U8(a1, 23018) || (v2 = 1, FIELD_U32(a1, 22996) != a2) )
        {
          if ( !FIELD_U8(a1, 28770) || (v2 = 1, FIELD_U32(a1, 28748) != a2) )
          {
            if ( FIELD_U8(a1, 34522) )
              return FIELD_U32(a1, 34500) == a2;
            return 0;
          }
        }
      }
    }
  }
  return v2;
}
