/* sub_609A986C
 * address: 0x609A986C   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A986C(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int (**v9)(); // [sp+8h] [bp-38h] BYREF
  __int16 *v10; // [sp+Ch] [bp-34h]
  int (**v11)(); // [sp+10h] [bp-30h] BYREF
  const char *v12; // [sp+14h] [bp-2Ch]
  int (**v13)(); // [sp+18h] [bp-28h] BYREF
  char *v14; // [sp+1Ch] [bp-24h]

  sub_609A76A8((int)a1, 4, a2);
  *a1 = off_60C6103C;
  a1[5] = off_60C6106C;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "format";
  v10 = (__int16 *)&unk_60AF1B6C;
  v3 = default_ref_9419C8(a1 + 37);
  a1[37] = &off_60C5E01C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08((int)v3, (int *)&v11, (int)&v9, (int)&v13, (int)(a1 + 14));
  a1[40] = 4;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "comp_sel_r";
  v10 = (__int16 *)"R";
  v4 = default_ref_9419C8(a1 + 41);
  a1[41] = &off_60C5E01C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08((int)v4, (int *)&v11, (int)&v9, (int)&v13, (int)(a1 + 14));
  a1[44] = 0;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "comp_sel_g";
  v10 = &aDefghij[3];
  v5 = default_ref_9419C8(a1 + 45);
  a1[45] = &off_60C5E01C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08((int)v5, (int *)&v11, (int)&v9, (int)&v13, (int)(a1 + 14));
  a1[48] = 1;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "comp_sel_b";
  v10 = (__int16 *)"B";
  v6 = default_ref_9419C8(a1 + 49);
  a1[49] = &off_60C5E01C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08((int)v6, (int *)&v11, (int)&v9, (int)&v13, (int)(a1 + 14));
  a1[52] = 2;
  v11 = &sead__SafeStringBase__vtable;
  v9 = &sead__SafeStringBase__vtable;
  v12 = "comp_sel_a";
  v10 = aAxswc;
  v7 = default_ref_9419C8(a1 + 53);
  a1[53] = &off_60C5E01C;
  v13 = &sead__SafeStringBase__vtable;
  v14 = &byte_60ABC94D;
  sub_60941A08((int)v7, (int *)&v11, (int)&v9, (int)&v13, (int)(a1 + 14));
  a1[56] = 5;
  return a1;
}
