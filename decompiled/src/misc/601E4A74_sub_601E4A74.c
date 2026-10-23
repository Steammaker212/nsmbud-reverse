/* sub_601E4A74
 * address: 0x601E4A74   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4A74(int result, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r6

  if ( a2 <= 0x13 )
  {
    if ( a3 >= 8 )
      a3 = 0;
    v4 = *(_DWORD *)(result + 4 * a3 + 16);
    FIELD_U32(v4, 312) = sub_600243A0(a4);
    JUMPOUT(0x60814A1C);
  }
  return result;
}
