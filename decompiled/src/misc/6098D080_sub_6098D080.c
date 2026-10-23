/* sub_6098D080
 * address: 0x6098D080   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098D080(_DWORD *a1, int *a2, int a3)
{
  int v6; // r6
  const char *v7; // r0
  int v8; // r0
  _DWORD *v9; // r6
  int v10; // r7
  char v12[4]; // [sp+18h] [bp-48h] BYREF
  _BYTE v13[8]; // [sp+1Ch] [bp-44h] BYREF
  const char *v14[3]; // [sp+24h] [bp-3Ch] BYREF
  _BYTE v15[48]; // [sp+30h] [bp-30h] BYREF

  sub_60992E58(v15, a1[7], a1 + 8, a1 + 10);
  v6 = *(_DWORD *)(a1[5] + 852);
  v7 = (const char *)(*(int (__fastcall **)(_DWORD *))(*a1 + 60))(a1);
  v14[0] = (const char *)&sead__SafeStringBase__vtable;
  v14[1] = v7;
  v8 = LayoutMsg_s_msbt_ref(v6, v14);
  sub_609897B0(v14, v8, a1[14]);
  v9 = (_DWORD *)a1[6];
  v10 = FIELD_U32(dword_60CCF464, 36);
  v12[0] = 0;
  (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
  return sub_60855E14(v9, (int)v13, v10, a3, (int)v15, (int)v14, v12, a2[1], 0);
}
