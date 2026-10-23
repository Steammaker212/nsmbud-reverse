/* sub_609A8CD4
 * address: 0x609A8CD4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A8CD4(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int (**v7)(); // [sp+8h] [bp-30h] BYREF
  void *v8; // [sp+Ch] [bp-2Ch]
  int (**v9)(); // [sp+10h] [bp-28h] BYREF
  const char *v10; // [sp+14h] [bp-24h]
  int (**v11)(); // [sp+18h] [bp-20h] BYREF
  char *v12; // [sp+1Ch] [bp-1Ch]

  sub_609A76A8((int)a1, 2, a2);
  *a1 = off_60C60F84;
  a1[5] = off_60C60FB4;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "blur_type";
  v8 = &unk_60AF1ACD;
  v3 = default_ref_9419C8(a1 + 37);
  a1[37] = &off_60C5E01C;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08((int)v3, (int *)&v9, (int)&v7, (int)&v11, (int)(a1 + 14));
  a1[40] = 4;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "blur_num";
  v8 = &unk_60AF1AE9;
  v4 = default_ref_9419C8(a1 + 41);
  a1[41] = &off_60C5E01C;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08((int)v4, (int *)&v9, (int)&v7, (int)&v11, (int)(a1 + 14));
  a1[44] = 1;
  v9 = &sead__SafeStringBase__vtable;
  v7 = &sead__SafeStringBase__vtable;
  v10 = "gaussian_kernel";
  v8 = &unk_60AF1B0F;
  v5 = default_ref_9419C8(a1 + 45);
  a1[45] = &off_60C5E01C;
  v11 = &sead__SafeStringBase__vtable;
  v12 = &byte_60ABC94D;
  sub_60941A08((int)v5, (int *)&v9, (int)&v7, (int)&v11, (int)(a1 + 14));
  a1[48] = 9;
  return a1;
}
