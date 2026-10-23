/* sub_6098D450
 * address: 0x6098D450   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098D450(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CD0C84;
  if ( !dword_60CD0C84 )
  {
    v2 = operator_new_8DE2C8(0x368u, (int)a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C600E4;
    dword_60CD0C80 = (int)v3;
    *(_DWORD *)v2 = off_60C600F4;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 28) = 0;
    FIELD_U32(v2, 32) = 0;
    FIELD_U32(v2, 36) = 0;
    sub_60854FF8(v2 + 40);
    FIELD_U32(v2, 832) = &off_60C5D53C;
    FIELD_U32(v2, 836) = 0;
    FIELD_U32(v2, 840) = 0;
    FIELD_U32(v2, 844) = 1065353216;
    sub_6098D9A0(v2 + 848);
    FIELD_U32(v2, 852) = 0;
    FIELD_U32(v2, 856) = 0;
    FIELD_U8(v2, 862) = 0;
    FIELD_U32(v2, 864) = 0;
    FIELD_U8(v2, 860) = 1;
    FIELD_U8(v2, 861) = 1;
    dword_60CD0C84 = v2;
  }
  return v2;
}
