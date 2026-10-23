/* sub_6092D040
 * address: 0x6092D040   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092D040(int a1)
{
  int v2; // r3
  int (**v4)(); // [sp+0h] [bp-20h] BYREF
  const char *v5; // [sp+4h] [bp-1Ch]

  sub_60938DB4();
  sub_6092C164(a1 + 32);
  *(_DWORD *)a1 = off_60C5E1C0;
  FIELD_U32(a1, 824) = 0;
  FIELD_U32(a1, 828) = 0;
  FIELD_U32(a1, 832) = 0;
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 0;
  v4 = &sead__SafeStringBase__vtable;
  v5 = "agldof";
  ((void (__fastcall *)(int, int (***)(), _DWORD, int))param_root_ref)(a1 + 848, &v4, 0, v2);
  *(_DWORD *)a1 = off_60C5E06C;
  FIELD_U32(a1, 848) = off_60C5E088;
  FIELD_U32(a1, 1244) = &off_60C5E0C4;
  FIELD_U32(a1, 1248) = 0;
  agl_TextureSampler_ref(a1 + 1256);
  FIELD_U32(a1, 1600) = 0;
  FIELD_U32(a1, 1604) = 1065353216;
  FIELD_U32(a1, 1608) = 1065353216;
  FIELD_U32(a1, 1612) = 0;
  FIELD_U32(a1, 1616) = 1061158912;
  sub_609394E8(a1 + 1620);
  sub_60913BB4(a1 + 2112);
  FIELD_U32(a1, 2112) = off_60C5E100;
  sub_60913BB4(a1 + 2140);
  FIELD_U32(a1, 2140) = off_60BF9CB0;
  sub_60922344(a1 + 2168);
  sub_60921AE8(a1 + 2440);
  sub_60919C54((_DWORD *)(a1 + 2776));
  sub_60913BB4(a1 + 2856);
  FIELD_U32(a1, 2856) = off_60C5E100;
  sub_60913BB4(a1 + 2884);
  FIELD_U32(a1, 2884) = off_60BF9CB0;
  sub_60922344(a1 + 2912);
  sub_60921AE8(a1 + 3184);
  sub_60919C54((_DWORD *)(a1 + 3520));
  FIELD_U8(a1, 3600) = 1;
  default_ref_9419C8(a1 + 3604);
  FIELD_U32(a1, 3604) = &off_60C5D848;
  v4 = &sead__SafeStringBase__vtable;
  v5 = "vignetting_shape_0";
  ((void (__fastcall *)(int, int, _DWORD, int (***)()))sub_609313BC)(a1 + 3620, a1, 0, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "vignetting_shape_1";
  ((void (__fastcall *)(int, int, int, int (***)()))sub_609313BC)(a1 + 3732, a1, 1, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "Icon=SNAPSHOT";
  sub_60969510(a1 + 1244, &v4);
  return a1;
}
