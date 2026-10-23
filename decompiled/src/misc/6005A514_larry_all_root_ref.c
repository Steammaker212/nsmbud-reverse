/* larry_all_root_ref
 * address: 0x6005A514   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall larry_all_root_ref(int a1, int a2)
{
  _DWORD **v3; // r5
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  int v7; // r0
  float v8; // s2
  unsigned int v9; // r0
  unsigned int v11; // [sp+4h] [bp-44h] BYREF
  float32x2_t v12; // [sp+8h] [bp-40h] BYREF
  float v13; // [sp+14h] [bp-34h]
  float v14; // [sp+24h] [bp-24h]
  float v15; // [sp+34h] [bp-14h]

  v4 = *(int **)(a1 + 7204);
  v3 = (_DWORD **)(a1 + 7204);
  v5 = *v4;
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v4 + 84);
  v12.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v12.n64_u32[1] = (unsigned __int32)"larry_all_root";
  v7 = v6(v5, &v12);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, v7, &v12);
  if ( a2 )
  {
    v8 = -36.0;
    v9 = -1073741824;
  }
  else
  {
    v8 = 36.0;
    v9 = 0x40000000;
  }
  v13 = v13 + v8;
  v14 = v14 + 22.0;
  v15 = v15 + 4500.0;
  v11 = v9;
  Mtx34_rotateZ(&v12, &v11);
  return sub_60236DF4(1196, &v12, 0);
}
