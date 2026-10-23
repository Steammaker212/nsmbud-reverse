/* sub_609954E0
 * address: 0x609954E0   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609954E0(int a1)
{
  float v2; // s22
  float v3; // s20
  float v4; // s18
  float v5; // s16
  int v6; // r5
  void (__fastcall *v7)(int, float); // r6
  int v8; // r0
  int v9; // r5
  void (__fastcall *v10)(int, float); // r6
  int v11; // r0
  int v12; // r5
  void (__fastcall *v13)(int, float); // r6
  float v14; // s0
  int v15; // r5
  void (__fastcall *v16)(int, float); // r6
  int v17; // r0
  int result; // r0

  v2 = FIELD_F32(a1, 44);
  v3 = FIELD_F32(a1, 40);
  v4 = 1.0 - (float)(v2 / 100.0);
  v5 = 1.0 - (float)(v3 / 100.0);
  if ( v3 > v2 )
  {
    v6 = FIELD_U32(a1, 20);
    v7 = *(void (__fastcall **)(int, float))(*(_DWORD *)v6 + 96);
    v8 = sub_608502E4(v6);
    v7(v6, v5 * (float)(unsigned int)v8);
    v9 = FIELD_U32(a1, 24);
    v10 = *(void (__fastcall **)(int, float))(*(_DWORD *)v9 + 96);
    v11 = sub_608502E4(v9);
    v10(v9, v4 * (float)(unsigned int)v11);
    goto LABEL_7;
  }
  v12 = FIELD_U32(a1, 20);
  v13 = *(void (__fastcall **)(int, float))(*(_DWORD *)v12 + 96);
  v14 = (float)(unsigned int)sub_608502E4(v12);
  if ( v3 >= v2 )
  {
    v13(v12, v5 * v14);
    (*(void (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 24) + 96))(FIELD_U32(a1, 24), 0.0);
LABEL_7:
    result = FIELD_U32(a1, 28);
    if ( result )
      return (*(int (__fastcall **)(float))(*(_DWORD *)result + 96))(1.0);
    return result;
  }
  v13(v12, v4 * v14);
  v15 = FIELD_U32(a1, 24);
  v16 = *(void (__fastcall **)(int, float))(*(_DWORD *)v15 + 96);
  v17 = sub_608502E4(v15);
  v16(v15, v5 * (float)(unsigned int)v17);
  result = FIELD_U32(a1, 28);
  if ( result )
    return (*(int (__fastcall **)(float))(*(_DWORD *)result + 96))(0.0);
  return result;
}
