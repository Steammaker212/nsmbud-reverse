/* sub_609AA2F0
 * address: 0x609AA2F0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609AA2F0(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  int (**v6)(); // [sp+8h] [bp-30h] BYREF
  void *v7; // [sp+Ch] [bp-2Ch]
  int (**v8)(); // [sp+10h] [bp-28h] BYREF
  const char *v9; // [sp+14h] [bp-24h]
  int (**v10)(); // [sp+18h] [bp-20h] BYREF
  char *v11; // [sp+1Ch] [bp-1Ch]

  sub_609A76A8((int)a1, 6, a2);
  *a1 = off_60C610F4;
  a1[5] = off_60C61124;
  v8 = &sead__SafeStringBase__vtable;
  v6 = &sead__SafeStringBase__vtable;
  v9 = "trim_center";
  v7 = &unk_60AF1BFD;
  v3 = default_ref_9419C8(a1 + 37);
  a1[37] = &off_60C5E120;
  v10 = &sead__SafeStringBase__vtable;
  v11 = &byte_60ABC94D;
  sub_60941A08((int)v3, (int *)&v8, (int)&v6, (int)&v10, (int)(a1 + 14));
  a1[40] = 0;
  a1[41] = 0;
  v8 = &sead__SafeStringBase__vtable;
  v6 = &sead__SafeStringBase__vtable;
  v9 = "trim_scale";
  v7 = &unk_60AEB989;
  v4 = default_ref_9419C8(a1 + 42);
  a1[42] = &off_60C5E120;
  v10 = &sead__SafeStringBase__vtable;
  v11 = &byte_60ABC94D;
  sub_60941A08((int)v4, (int *)&v8, (int)&v6, (int)&v10, (int)(a1 + 14));
  a1[45] = 1056964608;
  a1[46] = 1056964608;
  return a1;
}
