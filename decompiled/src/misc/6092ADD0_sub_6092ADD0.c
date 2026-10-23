/* sub_6092ADD0
 * address: 0x6092ADD0   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6092ADD0(void *a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r0
  int (**v5)(); // [sp+8h] [bp-28h] BYREF
  const char *v6; // [sp+Ch] [bp-24h]
  int (**v7)(); // [sp+10h] [bp-20h] BYREF
  const char *v8; // [sp+14h] [bp-1Ch]
  int (**v9)(); // [sp+18h] [bp-18h] BYREF
  char *v10; // [sp+1Ch] [bp-14h]

  v1 = (_DWORD *)operator_new_8DE25C(0xD8u, a1, 4);
  sub_60922864((int)v1);
  *v1 = off_60C5DCEC;
  v1[7] = off_60C5DD50;
  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  v8 = "Color";
  v6 = (const char *)&unk_60AEB200;
  v2 = default_ref_9419C8(v1 + 43);
  v1[43] = &off_60C5DC4C;
  v1[46] = 0;
  v1[47] = 0;
  v1[48] = 0;
  v1[49] = 1065353216;
  v9 = &sead__SafeStringBase__vtable;
  v10 = &byte_60ABC94D;
  sub_60941A08(v2, &v7, &v5, &v9, v1);
  v1[46] = 0;
  v1[47] = 0;
  v1[48] = 0;
  v1[49] = 1065353216;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v5 = &sead__SafeStringBase__vtable;
  v10 = "Intensity";
  v8 = (const char *)&unk_60AEB226;
  v6 = "Min=0,Max=8";
  v3 = default_ref_9419C8(v1 + 50);
  v1[50] = &off_60C5DC9C;
  sub_60941A08(v3, &v9, &v7, &v5, v1);
  v1[53] = 1065353216;
  return v1;
}
