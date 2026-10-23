/* BoomBoomW1__vf500
 * address: 0x6004E094   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomW1__vf500(int a1, int a2)
{
  _DWORD **v3; // r5
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  int v7; // r0
  unsigned int v8; // r0
  float v9; // s0
  float v10; // s2
  unsigned int v12; // [sp+4h] [bp-44h] BYREF
  float32x2_t v13; // [sp+8h] [bp-40h] BYREF
  float v14; // [sp+14h] [bp-34h]
  float v15; // [sp+24h] [bp-24h]
  float v16; // [sp+34h] [bp-14h]

  v4 = *(int **)(a1 + 7204);
  v3 = (_DWORD **)(a1 + 7204);
  v5 = *v4;
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v4 + 84);
  v13.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v13.n64_u32[1] = (unsigned __int32)"larry_all_root";
  v7 = v6(v5, &v13);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, v7, &v13);
  if ( a2 )
  {
    v8 = -1073741824;
    v9 = v14 + -22.0;
    v10 = 22.0;
  }
  else
  {
    v10 = 22.0;
    v8 = 0x40000000;
    v9 = v14 + 22.0;
  }
  v14 = v9;
  v15 = v15 + v10;
  v16 = v16 + 4500.0;
  v12 = v8;
  Mtx34_rotateZ(&v13, &v12);
  return sub_60236DF4(390, &v13, 0);
}
