/* sub_60344DF4
 * address: 0x60344DF4   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60344DF4(int a1)
{
  float v2; // s0
  int v3; // r1
  int v4; // r2
  float v5; // s2
  int **v6; // r6
  char v7; // r12
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, _DWORD *); // r2
  int v11; // r0
  int result; // r0
  _DWORD v13[11]; // [sp+0h] [bp-70h] BYREF
  int v14; // [sp+2Ch] [bp-44h]
  float32x2_t v15; // [sp+30h] [bp-40h] BYREF
  int v16; // [sp+38h] [bp-38h]
  int v17; // [sp+3Ch] [bp-34h]
  int v18; // [sp+40h] [bp-30h]
  int v19; // [sp+44h] [bp-2Ch]
  int v20; // [sp+48h] [bp-28h]
  float v21; // [sp+4Ch] [bp-24h]
  int v22; // [sp+50h] [bp-20h]
  int v23; // [sp+54h] [bp-1Ch]
  int v24; // [sp+58h] [bp-18h]
  int v25; // [sp+5Ch] [bp-14h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 108);
  v5 = FIELD_F32(a1, 7080);
  v15.n64_u64[0] = 1065353216;
  v16 = 0;
  v18 = 0;
  v19 = 1065353216;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 1065353216;
  v17 = v4;
  v21 = v2 + v5;
  v25 = v3;
  Mtx34_rotateY(&v15, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v15, (unsigned int *)(a1 + 164));
  v6 = (int **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v15);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v6 + 68))(**v6, a1 + 12860);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v6 + 52))(**v6);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v6 + 56))(**v6);
  if ( ((unsigned int)&dword_60C94884[1] & ~(1614040820 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C94884[1]) )
  {
    dword_60C948A0 = (int)&sead__SafeStringBase__vtable;
    dword_60C948A4 = (int)"arm_spanner_right";
    dword_60C948A8 = (int)&sead__SafeStringBase__vtable;
    dword_60C948AC = (int)"arm_spanner_left";
    sub_60000288();
    _cxa_guard_release(&dword_60C94884[1]);
  }
  v8 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)**v6 + 84))(**v6, &byte_60C94880[8 * FIELD_U32(a1, 80) + 32]);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)**v6 + 108))(**v6, v8, a1 + 6980);
  FIELD_U32(a1, 7040) = FIELD_U32(a1, 6992);
  FIELD_U32(a1, 7044) = FIELD_U32(a1, 7008);
  FIELD_U32(a1, 7048) = FIELD_U32(a1, 7024);
  v9 = **v6;
  v10 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 84);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "manhole";
  v11 = v10(v9, v13);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v6 + 108))(**v6, v11, v13);
  FIELD_U32(a1, 7052) = v13[3];
  FIELD_U32(a1, 7056) = v13[7];
  result = v14;
  FIELD_U32(a1, 7060) = v14;
  return result;
}
