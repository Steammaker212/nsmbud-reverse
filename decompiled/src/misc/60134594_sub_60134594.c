/* sub_60134594
 * address: 0x60134594   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60134594(int result, int a2)
{
  unsigned __int8 *v2; // r2
  unsigned __int8 *v3; // r4
  int v4; // r3
  bool v5; // zf

  if ( FIELD_U32(a2, 140) == 19 )
  {
    v2 = *(unsigned __int8 **)(a2 + 64);
    v3 = *(unsigned __int8 **)(result + 64);
    v4 = v2[533];
    v5 = v4 == 2;
    if ( v4 != 2 )
      v5 = v4 == 1;
    if ( v5 )
    {
      if ( v3[84] == v2[84] )
        return result;
    }
    else if ( (v2[568] & 0x80) != 0 )
    {
      return result;
    }
    FIELD_U8(result, 110) |= 2u;
    (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v3 + 328))(v3);
    return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v3 + 332))(v3);
  }
  return result;
}
