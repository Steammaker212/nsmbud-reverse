/* sub_609313BC
 * address: 0x609313BC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609313BC(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int (**v13)(); // [sp+Ch] [bp-3Ch] BYREF
  void *v14; // [sp+10h] [bp-38h]
  int (**v15)(); // [sp+14h] [bp-34h] BYREF
  const char *v16; // [sp+18h] [bp-30h]
  int (**v17)(); // [sp+1Ch] [bp-2Ch] BYREF
  char *v18; // [sp+20h] [bp-28h]

  sub_60947BCC(a1);
  *a1 = &off_60C5E0D4;
  v15 = &sead__SafeStringBase__vtable;
  v13 = &sead__SafeStringBase__vtable;
  v16 = "type";
  v14 = &unk_60AEB966;
  v7 = default_ref_9419C8(a1 + 7);
  a1[7] = &off_60C5E01C;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60ABC94D;
  sub_60941A08(v7, &v15, &v13, &v17, a1);
  a1[10] = 0;
  v15 = &sead__SafeStringBase__vtable;
  v13 = &sead__SafeStringBase__vtable;
  v16 = "range";
  v14 = &unk_60AEB976;
  v8 = default_ref_9419C8(a1 + 11);
  a1[11] = &off_60C5E120;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60ABC94D;
  sub_60941A08(v8, &v15, &v13, &v17, a1);
  a1[14] = 1048576000;
  a1[15] = 1065353216;
  v15 = &sead__SafeStringBase__vtable;
  v13 = &sead__SafeStringBase__vtable;
  v16 = "scale";
  v14 = &unk_60AEB989;
  v9 = default_ref_9419C8(a1 + 16);
  a1[16] = &off_60C5E120;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60ABC94D;
  sub_60941A08(v9, &v15, &v13, &v17, a1);
  a1[19] = 1065353216;
  a1[20] = 1065353216;
  v15 = &sead__SafeStringBase__vtable;
  v13 = &sead__SafeStringBase__vtable;
  v16 = "trans";
  v14 = &unk_60AEB99F;
  v10 = default_ref_9419C8(a1 + 21);
  a1[21] = &off_60C5E120;
  v17 = &sead__SafeStringBase__vtable;
  v18 = &byte_60ABC94D;
  sub_60941A08(v10, &v15, &v13, &v17, a1);
  a1[24] = 0;
  a1[25] = 0;
  a1[26] = a2;
  a1[27] = a3;
  sub_60947360(a2 + 848, a1, a4);
  return a1;
}
