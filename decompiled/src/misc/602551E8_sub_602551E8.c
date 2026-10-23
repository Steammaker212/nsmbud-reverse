/* sub_602551E8
 * address: 0x602551E8   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602551E8(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, float32x2_t *); // r2
  int v4; // r5
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  int v7; // r5
  int v9; // [sp+4h] [bp-4Ch] BYREF
  float32x2_t v10[9]; // [sp+8h] [bp-48h] BYREF

  v2 = **(_DWORD **)(a1 + 4);
  v3 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v2 + 84);
  v10[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v10[0].n64_u32[1] = (unsigned __int32)"foot_L";
  v4 = v3(v2, v10);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 108))(**(_DWORD **)(a1 + 4), v4, v10);
  v9 = -FIELD_U32(a1, 52);
  Mtx34_rotateZ(v10, (unsigned int *)&v9);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 104))(**(_DWORD **)(a1 + 4), v4, v10);
  v5 = **(_DWORD **)(a1 + 4);
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 84);
  v10[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v10[0].n64_u32[1] = (unsigned __int32)"foot_R";
  v7 = v6(v5, v10);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 108))(**(_DWORD **)(a1 + 4), v7, v10);
  v9 = -FIELD_U32(a1, 52);
  Mtx34_rotateZ(v10, (unsigned int *)&v9);
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 104))(
           **(_DWORD **)(a1 + 4),
           v7,
           v10);
}
