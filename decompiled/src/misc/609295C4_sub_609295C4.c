/* sub_609295C4
 * address: 0x609295C4   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609295C4(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int (**v9)(); // [sp+8h] [bp-38h] BYREF
  const char *v10; // [sp+Ch] [bp-34h]
  int (**v11)(); // [sp+10h] [bp-30h] BYREF
  const char *v12; // [sp+14h] [bp-2Ch]
  int (**v13)(); // [sp+18h] [bp-28h] BYREF
  char *v14; // [sp+1Ch] [bp-24h]

  sub_60922864((int)a1);
  *a1 = off_60C5DE84;
  a1[7] = off_60C5DEE8;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "DiffuseColor";
  v10 = (const char *)&unk_60AEB296;
  v2 = default_ref_9419C8(a1 + 43);
  a1[43] = &off_60C5DC4C;
  a1[46] = 0;
  a1[47] = 0;
  a1[48] = 0;
  a1[49] = 1065353216;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08(v2, &v11, &v9, &v13, a1);
  a1[46] = 1065353216;
  a1[47] = 1065353216;
  a1[48] = 1065353216;
  a1[49] = 1065353216;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "SpecularColor";
  v10 = (const char *)&unk_60AEB2C0;
  v3 = default_ref_9419C8(a1 + 50);
  a1[50] = &off_60C5DC4C;
  a1[53] = 0;
  a1[54] = 0;
  a1[55] = 0;
  a1[56] = 1065353216;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08(v3, &v11, &v9, &v13, a1);
  a1[53] = 1065353216;
  a1[54] = 1065353216;
  a1[55] = 1065353216;
  a1[56] = 1065353216;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "Position";
  v10 = (const char *)&unk_60AEB335;
  v4 = default_ref_9419C8(a1 + 57);
  a1[57] = &off_60C5DBFC;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08(v4, &v11, &v9, &v13, a1);
  a1[60] = 0;
  a1[61] = 0;
  a1[62] = 0;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "Radius";
  v10 = (const char *)&unk_60AEB343;
  v5 = default_ref_9419C8(a1 + 63);
  a1[63] = &off_60C5DC9C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08(v5, &v11, &v9, &v13, a1);
  a1[66] = 1065353216;
  v13 = &sead__SafeStringBase__vtable;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v14 = "Intensity";
  v12 = (const char *)&unk_60AEB226;
  v10 = "Min=0,Max=8";
  v6 = default_ref_9419C8(a1 + 67);
  a1[67] = &off_60C5DC9C;
  sub_60941A08(v6, &v13, &v11, &v9, a1);
  a1[70] = 1065353216;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "DampParam";
  v10 = (const char *)&unk_60AEB115;
  v7 = default_ref_9419C8(a1 + 71);
  a1[71] = &off_60C5DC9C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08(v7, &v11, &v9, &v13, a1);
  a1[74] = 1065353216;
  a1[75] = 0;
  a1[76] = 0;
  return a1;
}
