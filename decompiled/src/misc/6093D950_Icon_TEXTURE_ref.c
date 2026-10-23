/* Icon_TEXTURE_ref
 * address: 0x6093D950   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Icon_TEXTURE_ref(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v2 = dword_60CD09F8;
  if ( !dword_60CD09F8 )
  {
    v2 = operator_new_8DE2C8(0xA10u, (int)a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5E324;
    dword_60CD09F4 = (int)v3;
    *(_DWORD *)v2 = off_60C5E334;
    FIELD_U32(v2, 20) = 64;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 28) = 0;
    untitled_ref(v2 + 32);
    FIELD_U32(v2, 624) = 0;
    FIELD_U32(v2, 632) = 0;
    FIELD_U32(v2, 636) = 0;
    untitled_ref(v2 + 640);
    FIELD_U32(v2, 1232) = 0;
    FIELD_U32(v2, 1240) = 0;
    FIELD_U32(v2, 1244) = 0;
    untitled_ref(v2 + 1248);
    FIELD_U32(v2, 1840) = 0;
    FIELD_U32(v2, 1848) = 0;
    FIELD_U32(v2, 1852) = 0;
    untitled_ref(v2 + 1856);
    FIELD_U32(v2, 2448) = 0;
    FIELD_U32(v2, 2456) = 0;
    FIELD_U32(v2, 2460) = 0;
    sead__CriticalSection__ctor((sead_IDisposer *)(v2 + 2464));
    sead__CriticalSection__ctor((sead_IDisposer *)(v2 + 2500));
    FIELD_U32(v2, 2564) = 0;
    FIELD_U32(v2, 2568) = 0;
    FIELD_U16(v2, 2572) = 0;
    FIELD_U16(v2, 2560) = 0;
    FIELD_U32(v2, 2556) = 0;
    FIELD_U32(v2, 2552) = 0;
    FIELD_U32(v2, 2548) = 0;
    FIELD_U32(v2, 2544) = 0;
    FIELD_U32(v2, 2540) = 0;
    FIELD_U32(v2, 2536) = 0;
    FIELD_U32(v2, 20) |= 0x200u;
    v5[0] = &sead__SafeStringBase__vtable;
    v5[1] = "Icon=TEXTURE";
    sub_60969510(v2, v5);
    dword_60CD09F8 = v2;
  }
  return v2;
}
