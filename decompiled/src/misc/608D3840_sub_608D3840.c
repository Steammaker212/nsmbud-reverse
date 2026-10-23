/* sub_608D3840
 * address: 0x608D3840   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3840(int a1)
{
  int result; // r0
  bool v3; // zf
  int *v4; // r0

  result = FIELD_U32(a1, 1508);
  if ( !result )
  {
    result = FIELD_U8(a1, 36);
    v3 = result == 0;
    if ( FIELD_U8(a1, 36) )
    {
      result = FIELD_U8(a1, 37);
      v3 = result == 0;
    }
    if ( !v3 )
    {
      result = FIELD_U8(a1, 38);
      if ( !FIELD_U8(a1, 38) )
      {
        result = sub_608D348C(a1);
        if ( result == 1 )
        {
          FIELD_U8(a1, 39) = 1;
          if ( FIELD_U8(a1, 1518) )
          {
            v4 = sub_608C3C60();
            sub_608C411C((int)v4, a1 + 164);
            FIELD_U8(a1, 1518) = 0;
          }
          result = FIELD_U8(a1, 37);
          if ( FIELD_U8(a1, 37) )
          {
            FIELD_U8(a1, 37) = 0;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
