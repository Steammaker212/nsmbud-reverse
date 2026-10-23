/* agl_Debug_xml_ref
 * address: 0x60946B1C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_Debug_xml_ref(int a1, int a2, int a3)
{
  _DWORD *v6; // r2
  int v7; // r6
  _DWORD *v8; // r7
  int v9; // r4
  int v10; // r0
  int v11; // r4
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const char *v15; // [sp+14h] [bp-24h]

  v6 = *(_DWORD **)(dword_60CD0B50 + 60);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "agl__Debug__xml";
  v7 = sead__ExpHeap__create(a3 + 1024, (int)&v14, v6, 4, 1, 0);
  v8 = sub_609A4754(0, v7, 0, a3);
  v9 = v8[1];
  sub_60946C34(a1, v9, v7);
  v14 = &sead__SafeStringBase__vtable;
  v13[0] = &sead__SafeStringBase__vtable;
  v15 = "data";
  v13[1] = &byte_60ABC94D;
  v10 = sub_609A66E8(v9, &v14, v13, v7);
  param_list_ref_2(a1, v10, v7);
  v11 = sub_60946EA0(a1, a2, v8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 16))(v7);
  return v11;
}
