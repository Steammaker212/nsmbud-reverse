/* sub_6052B07C
 * address: 0x6052B07C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052B07C(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CAA450;
  if ( !dword_60CAA450 )
  {
    v2 = operator_new_8DE2C8(0xCA0u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C000B0;
    dword_60CAA44C = (int)v3;
    sub_6052B328(v2);
    dword_60CAA450 = v2;
  }
  return v2;
}
