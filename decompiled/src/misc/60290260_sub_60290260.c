/* sub_60290260
 * address: 0x60290260   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60290260(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, float32x2_t *); // r2
  int v4; // r5
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  int v7; // r5
  int v9; // [sp+4h] [bp-74h] BYREF
  float32x2_t v10[6]; // [sp+8h] [bp-70h] BYREF
  int v11; // [sp+38h] [bp-40h] BYREF
  int v12; // [sp+3Ch] [bp-3Ch]
  int v13; // [sp+40h] [bp-38h]

  v11 = 1065353216;
  v12 = 1065353216;
  v13 = 1065353216;
  v2 = **(_DWORD **)(a1 + 40);
  v3 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v2 + 84);
  v10[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v10[0].n64_u32[1] = (unsigned __int32)"spine";
  v4 = v3(v2, v10);
  sub_604302C8(**(_DWORD **)(a1 + 40), v4, v10);
  v9 = (int)(float)((float)(FIELD_F32(a1, 128) * 2147500000.0) / 180.0);
  Mtx34_rotateX(v10, (unsigned int *)&v9);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 40) + 96))(
    **(_DWORD **)(a1 + 40),
    v4,
    v10,
    &v11);
  v11 = 1065353216;
  v12 = 1065353216;
  v13 = 1065353216;
  v5 = **(_DWORD **)(a1 + 40);
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 84);
  v10[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v10[0].n64_u32[1] = (unsigned __int32)"head";
  v7 = v6(v5, v10);
  sub_604302C8(**(_DWORD **)(a1 + 40), v7, v10);
  v9 = (int)(float)((float)(FIELD_F32(a1, 132) * 2147500000.0) / 180.0);
  Mtx34_rotateX(v10, (unsigned int *)&v9);
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *, int *))(***(_DWORD ***)(a1 + 40) + 96))(
           **(_DWORD **)(a1 + 40),
           v7,
           v10,
           &v11);
}
