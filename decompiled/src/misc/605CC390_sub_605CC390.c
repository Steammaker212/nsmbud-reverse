/* sub_605CC390
 * address: 0x605CC390   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CC390(int a1)
{
  char v2; // r2
  int result; // r0
  int v4; // r1

  v2 = FIELD_U8(a1, 6124);
  result = 0;
  if ( (v2 & 4) != 0 )
  {
    v4 = FIELD_S8(a1, 84);
    if ( (unsigned __int8)v4 != 255 )
    {
      if ( (unsigned __int8)v4 >= 4u )
        v4 = 0;
      return *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 48);
    }
  }
  return result;
}
