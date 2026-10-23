/* sub_601B0D38
 * address: 0x601B0D38   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B0D38(int a1)
{
  int result; // r0
  bool v3; // zf

  result = sub_6021EE50(3, 0);
  if ( result != -1 )
  {
    result = *(_DWORD *)(sub_60186FEC(dword_60CC6D78 + 984, 3u, 0) + 12);
    v3 = result == 0;
    if ( !result )
    {
      result = FIELD_U8(a1, 18);
      v3 = result == 0;
    }
    if ( v3 )
    {
      if ( FIELD_U16(a1, 16) )
      {
        result = FIELD_U16(a1, 16) - 1;
        FIELD_U16(a1, 16) = result;
      }
      else
      {
        return sub_601B0DB0(a1, 0);
      }
    }
  }
  return result;
}
