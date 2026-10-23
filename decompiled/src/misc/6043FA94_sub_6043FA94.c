/* sub_6043FA94
 * address: 0x6043FA94   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043FA94(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C9CC80;
  if ( !dword_60C9CC80 )
  {
    v2 = operator_new_8DE2C8(0x9400u, a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60BFAB24;
    dword_60C9CC7C = (int)v3;
    sub_6043FB1C(v2);
    dword_60C9CC80 = v2;
  }
  return v2;
}
