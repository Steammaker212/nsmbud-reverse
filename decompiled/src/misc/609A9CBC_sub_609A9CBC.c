/* sub_609A9CBC
 * address: 0x609A9CBC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A9CBC(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int (**v7)(); // [sp+8h] [bp-38h] BYREF
  void *v8; // [sp+Ch] [bp-34h]
  int (**v9)(); // [sp+10h] [bp-30h] BYREF
  const char *v10; // [sp+14h] [bp-2Ch]
  int (**v11)(); // [sp+18h] [bp-28h] BYREF
  char *v12; // [sp+1Ch] [bp-24h]

  sub_609A76A8((int)a1, 5, a2);
  *a1 = off_60C61098;
  a1[5] = off_60C610C8;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "drift_r";
  v8 = &unk_60AF1BB3;
  v3 = default_ref_9419C8(a1 + 37);
  a1[37] = &off_60C5E120;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08((int)v3, (int *)&v9, (int)&v7, (int)&v11, (int)(a1 + 14));
  a1[40] = 0;
  a1[41] = 0;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "drift_g";
  v8 = &unk_60AF1BC3;
  v4 = default_ref_9419C8(a1 + 42);
  a1[42] = &off_60C5E120;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08((int)v4, (int *)&v9, (int)&v7, (int)&v11, (int)(a1 + 14));
  a1[45] = 0;
  a1[46] = 0;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "drift_b";
  v8 = &unk_60AF1BD3;
  v5 = default_ref_9419C8(a1 + 47);
  a1[47] = &off_60C5E120;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08((int)v5, (int *)&v9, (int)&v7, (int)&v11, (int)(a1 + 14));
  a1[50] = 0;
  a1[51] = 0;
  return a1;
}
