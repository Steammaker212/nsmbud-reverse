/* sub_60237EA4
 * address: 0x60237EA4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237EA4(int a1)
{
  int v2; // r4
  sead_IDisposer *v3; // r0

  v2 = dword_60C8D9DC;
  if ( !dword_60C8D9DC )
  {
    v2 = operator_new_8DE2C8(0x90Cu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BD95D0;
    dword_60C8D9D8 = v2;
    FIELD_U32(v2, 16) = 0;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 24) = &off_60BD95E0;
    FIELD_U32(v2, 32) = &off_60BD95E0;
    memset((void *)(v2 + 40), 0, 176);
    v3 = (sead_IDisposer *)operator_new(0x70u);
    FIELD_U32(v2, 216) = sub_60237870(v3);
    FIELD_U32(v2, 220) = 0;
    FIELD_U32(v2, 232) = 0;
    FIELD_U32(v2, 228) = v2 + 224;
    FIELD_U32(v2, 224) = v2 + 224;
    FIELD_U32(v2, 236) = 0;
    FIELD_U32(v2, 240) = 0;
    FIELD_U32(v2, 244) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 236), 256, v2 + 248);
    FIELD_U32(v2, 1272) = 0;
    FIELD_U32(v2, 1276) = 0;
    FIELD_U32(v2, 1280) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 1272), 256, v2 + 1284);
    FIELD_U32(v2, 2308) = -1;
    FIELD_U8(v2, 2312) = 0;
    FIELD_U8(v2, 2313) = 0;
    FIELD_U8(v2, 2314) = 1;
    FIELD_U8(v2, 2315) = 0;
    dword_60C8D9DC = v2;
  }
  return v2;
}
