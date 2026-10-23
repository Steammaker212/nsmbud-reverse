/* sub_60401BB8
 * address: 0x60401BB8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60401BB8(int a1)
{
  int v2; // r4

  v2 = dword_60C99E68;
  if ( !dword_60C99E68 )
  {
    v2 = operator_new_8DE2C8(0x2BD44u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BF9A28;
    dword_60C99E64 = v2;
    sub_60401C6C(v2 + 16);
    sub_60401DA0(v2 + 89816);
    FIELD_U32(v2, 179516) = 0;
    FIELD_U8(v2, 179520) = 1;
    dword_60C99E68 = v2;
  }
  return v2;
}
