/* sub_601B4788
 * address: 0x601B4788   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601B4788(int a1, unsigned int a2)
{
  int v4; // r5
  signed int result; // r0
  int v6; // r0

  v4 = sub_601DFFE4(a1 + 1032);
  if ( (a2 | 1) == 1 )
  {
    if ( a2 >= 6 )
      a2 = 0;
    result = sub_601C5338(a1, *(_DWORD *)(v4 + 4 * a2 + 48));
  }
  else
  {
    v6 = sub_601DFFE4(a1 + 1044);
    result = sub_608332B0(v4 + 72, v6 + 72);
  }
  FIELD_U32(a1, 192) = result;
  FIELD_U32(a1, 1000) = result;
  return result;
}
