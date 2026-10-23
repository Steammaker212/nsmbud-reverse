/* sub_6016A024
 * address: 0x6016A024   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016A024(int a1)
{
  int v2; // r4

  v2 = dword_60C88AC0;
  if ( !dword_60C88AC0 )
  {
    v2 = operator_new_8DE2C8(0x6C0u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BD4BC8;
    dword_60C88ABC = v2;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 16) = 0;
    FIELD_U32(v2, 28) = v2 + 36;
    FIELD_U32(v2, 36) = v2 + 160;
    FIELD_U32(v2, 160) = v2 + 284;
    FIELD_U32(v2, 284) = v2 + 408;
    FIELD_U32(v2, 408) = v2 + 532;
    FIELD_U32(v2, 532) = v2 + 656;
    FIELD_U32(v2, 656) = v2 + 780;
    FIELD_U32(v2, 780) = v2 + 904;
    FIELD_U32(v2, 904) = v2 + 1028;
    FIELD_U32(v2, 1028) = v2 + 1152;
    FIELD_U32(v2, 1152) = v2 + 1276;
    FIELD_U32(v2, 1276) = v2 + 1400;
    FIELD_U32(v2, 1400) = v2 + 1524;
    FIELD_U32(v2, 1524) = 0;
    FIELD_U32(v2, 32) = v2 + 36;
    sub_608DEB0C((_DWORD *)(v2 + 16), 13, v2 + 1648);
    FIELD_U32(v2, 1700) = 0;
    FIELD_U8(v2, 1704) = 0;
    FIELD_U32(v2, 1708) = 0;
    FIELD_U32(v2, 1712) = 0;
    FIELD_U32(v2, 1716) = 0;
    FIELD_U32(v2, 1720) = 0;
    FIELD_U32(v2, 1724) = 0;
    dword_60C88AC0 = v2;
  }
  return v2;
}
