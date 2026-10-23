/* sub_6045C5A8
 * address: 0x6045C5A8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045C5A8(int a1)
{
  _DWORD **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  char v5; // r0
  int v6; // r2
  int result; // r0
  int v8; // [sp+4h] [bp-44h] BYREF
  int v9; // [sp+8h] [bp-40h]
  int v10; // [sp+Ch] [bp-3Ch]
  _DWORD v11[14]; // [sp+10h] [bp-38h] BYREF

  v2 = *(int **)(a1 + 6104);
  v1 = (_DWORD **)(a1 + 6104);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "eff";
  v5 = v4(v3, v11);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v11);
  v8 = v11[3];
  v9 = v11[7];
  v10 = v11[11];
  sub_60833074((float *)&v8);
  v6 = v9;
  result = dword_60CC62E4 + 116;
  FIELD_U32(dword_60CC62E4, 116) = v8;
  FIELD_U32(result, 4) = v6;
  FIELD_U32(result, 8) = 0;
  v1[55] = 0;
  return result;
}
