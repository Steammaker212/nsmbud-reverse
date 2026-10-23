/* sub_6092CE60
 * address: 0x6092CE60   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092CE60(_DWORD *a1, const char **a2, int a3)
{
  int result; // r0
  int (**v7)(); // [sp+8h] [bp-60h] BYREF
  void *v8; // [sp+Ch] [bp-5Ch]
  _DWORD v9[11]; // [sp+10h] [bp-58h] BYREF
  int (**v10)(); // [sp+3Ch] [bp-2Ch] BYREF
  char *v11; // [sp+40h] [bp-28h]

  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  sub_6017D524(v9, "%s_type", a2[1]);
  v7 = &sead__SafeStringBase__vtable;
  v10 = &sead__SafeStringBase__vtable;
  v8 = &unk_60AEB966;
  v11 = &byte_60ABC94D;
  sub_60941A08(a1, v9, &v7, &v10, a3);
  a1[3] = 0;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  sub_6017D524(v9, "%s_range", a2[1]);
  v7 = &sead__SafeStringBase__vtable;
  v10 = &sead__SafeStringBase__vtable;
  v11 = &byte_60ABC94D;
  v8 = &unk_60AEB976;
  sub_60941A08(a1 + 4, v9, &v7, &v10, a3);
  a1[7] = 1048576000;
  a1[8] = 1065353216;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  sub_6017D524(v9, "%s_scale", a2[1]);
  v7 = &sead__SafeStringBase__vtable;
  v10 = &sead__SafeStringBase__vtable;
  v11 = &byte_60ABC94D;
  v8 = &unk_60AEB989;
  sub_60941A08(a1 + 9, v9, &v7, &v10, a3);
  a1[12] = 1065353216;
  a1[13] = 1065353216;
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  sub_6017D524(v9, "%s_trans", a2[1]);
  v7 = &sead__SafeStringBase__vtable;
  v10 = &sead__SafeStringBase__vtable;
  v11 = &byte_60ABC94D;
  v8 = &unk_60AEB99F;
  result = sub_60941A08(a1 + 14, v9, &v7, &v10, a3);
  a1[17] = 0;
  a1[18] = 0;
  return result;
}
