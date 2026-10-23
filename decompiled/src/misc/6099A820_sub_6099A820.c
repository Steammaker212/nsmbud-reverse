/* sub_6099A820
 * address: 0x6099A820   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6099A820(int a1, int a2)
{
  int v2; // r12
  _DWORD *v3; // r0
  int v4; // r3

  v2 = FIELD_U16(a1, 16);
  if ( !FIELD_U16(a1, 16) )
    return 0;
  v3 = (_DWORD *)(a1 + FIELD_U16(a1, 6));
  v4 = 0;
  while ( *v3 != a2 )
  {
    ++v4;
    v3 = (_DWORD *)((char *)v3 + v3[1]);
    if ( v4 >= v2 )
      return 0;
  }
  return v3 + 2;
}
