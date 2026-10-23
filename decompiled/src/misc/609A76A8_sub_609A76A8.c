/* sub_609A76A8
 * address: 0x609A76A8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A76A8(int a1, int a2, int a3)
{
  _DWORD *v6; // r10
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int (**v11)(); // [sp+4h] [bp-3Ch] BYREF
  const char *v12; // [sp+8h] [bp-38h]
  int (**v13)(); // [sp+Ch] [bp-34h] BYREF
  const char *v14; // [sp+10h] [bp-30h]
  int (**v15)(); // [sp+14h] [bp-2Ch] BYREF
  char *v16; // [sp+18h] [bp-28h]

  FIELD_U32(a1, 20) = off_60C60EA0;
  v6 = (_DWORD *)(a1 + 20);
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  *(_DWORD *)a1 = &off_60C5D53C;
  sub_609472C0((_DWORD *)(a1 + 20));
  *(_DWORD *)a1 = off_60C60E70;
  *v6 = off_60C60EA0;
  sub_60947BCC((_DWORD *)(a1 + 56));
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = a2;
  FIELD_U32(a1, 96) = ((a2 << 8) + 256) | (a3 + 1);
  v13 = &sead__SafeStringBase__vtable;
  v11 = &sead__SafeStringBase__vtable;
  v14 = "enable";
  v12 = (const char *)&unk_60AEAF58;
  v7 = default_ref_9419C8((_DWORD *)(a1 + 100));
  FIELD_U32(a1, 100) = &off_60C5D848;
  v15 = &sead__SafeStringBase__vtable;
  v16 = &byte_60ABC94D;
  sub_60941A08((int)v7, (int *)&v13, (int)&v11, (int)&v15, a1 + 56);
  FIELD_U8(a1, 112) = 0;
  v13 = &sead__SafeStringBase__vtable;
  v11 = &sead__SafeStringBase__vtable;
  v14 = "active";
  v12 = "active";
  v8 = default_ref_9419C8((_DWORD *)(a1 + 116));
  FIELD_U32(a1, 116) = &off_60C5D848;
  v15 = &sead__SafeStringBase__vtable;
  v16 = &byte_60ABC94D;
  sub_60941A08((int)v8, (int *)&v13, (int)&v11, (int)&v15, a1 + 56);
  FIELD_U8(a1, 128) = 0;
  v13 = &sead__SafeStringBase__vtable;
  v11 = &sead__SafeStringBase__vtable;
  v14 = "save_index";
  v12 = "save_index";
  v9 = default_ref_9419C8((_DWORD *)(a1 + 132));
  FIELD_U32(a1, 132) = &off_60C5E01C;
  v15 = &sead__SafeStringBase__vtable;
  v16 = &byte_60ABC94D;
  sub_60941A08((int)v9, (int *)&v13, (int)&v11, (int)&v15, a1 + 56);
  FIELD_U32(a1, 144) = -1;
  v15 = &sead__SafeStringBase__vtable;
  v16 = "param_array";
  sub_60947360((int)v6, a1 + 56, (int *)&v15);
  return a1;
}
