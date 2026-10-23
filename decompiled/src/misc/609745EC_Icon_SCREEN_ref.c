/* Icon_SCREEN_ref
 * address: 0x609745EC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Icon_SCREEN_ref(int a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  *(_DWORD *)a1 = off_60C5F3CC;
  FIELD_U8(a1, 4) = 0;
  FIELD_U8(a1, 5) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  agl_TextureData_ref(a1 + 24);
  agl_TextureData_ref(a1 + 296);
  sub_6091ABEC((_DWORD *)(a1 + 568));
  sub_6091AC40((_DWORD *)(a1 + 912));
  sub_6091ABEC((_DWORD *)(a1 + 1256));
  sub_60919E88((_DWORD *)(a1 + 1600));
  FIELD_U32(a1, 1664) = 0;
  agl_TextureData_ref(a1 + 1672);
  sub_6091ABEC((_DWORD *)(a1 + 1944));
  FIELD_U32(a1, 2288) = 0;
  FIELD_U32(a1, 2292) = 0;
  FIELD_U32(a1, 2296) = 0;
  FIELD_U32(a1, 2300) = 0;
  sub_6090E38C((_DWORD *)(a1 + 2304));
  sub_6090E38C((_DWORD *)(a1 + 2328));
  FIELD_U32(a1, 2352) = 2696;
  FIELD_U32(a1, 2372) = 0;
  FIELD_U32(a1, 2368) = 0;
  FIELD_U32(a1, 2364) = 0;
  FIELD_U32(a1, 2360) = 0;
  FIELD_U32(a1, 2356) = 0;
  FIELD_U32(a1, 2376) = 3;
  FIELD_U32(a1, 2380) = 1050253722;
  FIELD_U32(a1, 2384) = 1050253722;
  FIELD_U32(a1, 2388) = 1065353216;
  FIELD_U32(a1, 2392) = 0;
  FIELD_U32(a1, 2396) = 1065353216;
  FIELD_U32(a1, 2400) = 0;
  FIELD_U8(a1, 2404) = 0;
  FIELD_U32(a1, 2408) = 0;
  FIELD_U32(a1, 2412) = 0;
  untitled_ref(a1 + 2416);
  untitled_ref(a1 + 3000);
  FIELD_U32(a1, 3584) = 0;
  FIELD_U32(a1, 3600) = 0;
  FIELD_U32(a1, 3596) = 0;
  FIELD_U32(a1, 3592) = 0;
  FIELD_U32(a1, 3588) = 0;
  FIELD_U32(a1, 3604) = 0;
  FIELD_U32(a1, 3608) = 0;
  FIELD_U32(a1, 3612) = 0;
  FIELD_U32(a1, 3616) = 0;
  FIELD_U32(a1, 3620) = 0;
  FIELD_U32(a1, 3624) = 0;
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "Icon = SCREEN";
  sub_60969510(a1, v3);
  FIELD_U32(a1, 2352) &= ~0x800u;
  FIELD_U8(a1, 5) = 1;
  return a1;
}
