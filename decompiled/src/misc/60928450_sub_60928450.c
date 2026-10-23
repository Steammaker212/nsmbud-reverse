/* sub_60928450
 * address: 0x60928450   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60928450(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int (**v7)(); // [sp+8h] [bp-38h] BYREF
  const char *v8; // [sp+Ch] [bp-34h]
  int (**v9)(); // [sp+10h] [bp-30h] BYREF
  const char *v10; // [sp+14h] [bp-2Ch]
  int (**v11)(); // [sp+18h] [bp-28h] BYREF
  char *v12; // [sp+1Ch] [bp-24h]

  sub_60922864((int)a1);
  *a1 = off_60C5DD74;
  a1[7] = off_60C5DDD8;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "SkyColor";
  v8 = (const char *)&unk_60AEB251;
  v2 = default_ref_9419C8(a1 + 43);
  a1[43] = &off_60C5DC4C;
  a1[46] = 0;
  a1[47] = 0;
  a1[48] = 0;
  a1[49] = 1065353216;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08(v2, &v9, &v7, &v11, a1);
  a1[46] = 1062668861;
  a1[47] = 1062668861;
  a1[48] = 1064682127;
  a1[49] = 1065353216;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "GroundColor";
  v8 = (const char *)&unk_60AEB270;
  v3 = default_ref_9419C8(a1 + 50);
  a1[50] = &off_60C5DC4C;
  a1[53] = 0;
  a1[54] = 0;
  a1[55] = 0;
  a1[56] = 1065353216;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08(v3, &v9, &v7, &v11, a1);
  a1[53] = 1055957975;
  a1[54] = 1051931443;
  a1[55] = 1048576000;
  a1[56] = 1065353216;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v12 = "Intensity";
  v10 = (const char *)&unk_60AEB226;
  v8 = "Min=0,Max=8";
  v4 = default_ref_9419C8(a1 + 57);
  a1[57] = &off_60C5DC9C;
  sub_60941A08(v4, &v11, &v9, &v7, a1);
  a1[60] = 1065353216;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "Direction";
  v8 = (const char *)&unk_60AEB130;
  v5 = default_ref_9419C8(a1 + 61);
  a1[61] = &off_60C5DBFC;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08(v5, &v9, &v7, &v11, a1);
  a1[64] = 0;
  a1[65] = 1065353216;
  a1[66] = 0;
  a1[61] = &off_60C5DBAC;
  a1[67] = 0;
  a1[68] = 0;
  return a1;
}
