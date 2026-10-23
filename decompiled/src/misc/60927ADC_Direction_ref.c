/* Direction_ref
 * address: 0x60927ADC   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Direction_ref(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int (**v8)(); // [sp+8h] [bp-30h] BYREF
  void *v9; // [sp+Ch] [bp-2Ch]
  int (**v10)(); // [sp+10h] [bp-28h] BYREF
  const char *v11; // [sp+14h] [bp-24h]
  int (**v12)(); // [sp+18h] [bp-20h] BYREF
  char *v13; // [sp+1Ch] [bp-1Ch]

  sub_60922864((int)a1);
  *a1 = off_60C5DB24;
  a1[7] = off_60C5DB88;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &sead__SafeStringBase__vtable;
  v11 = "Start";
  v9 = &unk_60AEB0FE;
  v2 = default_ref_9419C8(a1 + 43);
  a1[43] = &off_60C5DC9C;
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60ABC94D;
  sub_60941A08(v2, &v10, &v8, &v12, a1);
  a1[46] = 1148846080;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &sead__SafeStringBase__vtable;
  v11 = (const char *)&unk_60AEB105;
  v9 = &unk_60AEB109;
  v3 = default_ref_9419C8(a1 + 47);
  a1[47] = &off_60C5DC9C;
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60ABC94D;
  sub_60941A08(v3, &v10, &v8, &v12, a1);
  a1[50] = 1176256512;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &sead__SafeStringBase__vtable;
  v11 = "Damp";
  v9 = &unk_60AEB115;
  v4 = default_ref_9419C8(a1 + 51);
  a1[51] = &off_60C5DC9C;
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60ABC94D;
  sub_60941A08(v4, &v10, &v8, &v12, a1);
  a1[54] = 1065353216;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &sead__SafeStringBase__vtable;
  v11 = "Color";
  v9 = &unk_60AEB11C;
  v5 = default_ref_9419C8(a1 + 55);
  a1[55] = &off_60C5DC4C;
  a1[58] = 0;
  a1[59] = 0;
  a1[60] = 0;
  a1[61] = 1065353216;
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60ABC94D;
  sub_60941A08(v5, &v10, &v8, &v12, a1);
  a1[58] = 1065353216;
  a1[59] = 1065353216;
  a1[60] = 1065353216;
  a1[61] = 1065353216;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &sead__SafeStringBase__vtable;
  v11 = "Direction";
  v9 = &unk_60AEB130;
  v6 = default_ref_9419C8(a1 + 62);
  a1[62] = &off_60C5DBFC;
  v12 = &sead__SafeStringBase__vtable;
  v13 = &byte_60ABC94D;
  sub_60941A08(v6, &v10, &v8, &v12, a1);
  a1[65] = 0;
  a1[66] = 0;
  a1[67] = -1082130432;
  a1[62] = &off_60C5DBAC;
  return a1;
}
