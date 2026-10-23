/* sub_606B9E9C
 * address: 0x606B9E9C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B9E9C(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int **v8; // r6
  char v9; // r12
  int v11; // r5
  int v12; // r0
  int v13; // r2
  int v14; // r1
  unsigned int v15; // [sp+0h] [bp-58h] BYREF
  unsigned int v16; // [sp+4h] [bp-54h] BYREF
  unsigned int v17; // [sp+8h] [bp-50h] BYREF
  float32x2_t v18; // [sp+10h] [bp-48h] BYREF
  int v19; // [sp+18h] [bp-40h]
  int v20; // [sp+1Ch] [bp-3Ch]
  int v21; // [sp+20h] [bp-38h]
  int v22; // [sp+24h] [bp-34h]
  int v23; // [sp+28h] [bp-30h]
  int v24; // [sp+2Ch] [bp-2Ch]
  int v25; // [sp+30h] [bp-28h]
  int v26; // [sp+34h] [bp-24h]
  int v27; // [sp+38h] [bp-20h]
  int v28; // [sp+3Ch] [bp-1Ch]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_U32(a1, 112);
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_U32(a1, 108);
  v17 = v4;
  v15 = v2;
  v16 = v3;
  v18.n64_u64[0] = 1065353216;
  v19 = 0;
  v21 = 0;
  v22 = 1065353216;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 1065353216;
  v20 = v7;
  v24 = v5;
  v28 = v6;
  Mtx34_rotateX(&v18, &v15);
  Mtx34_rotateY(&v18, &v16);
  Mtx34_rotateZ(&v18, &v17);
  v8 = (int **)(a1 + 6112);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6112) + 60))(**(_DWORD **)(a1 + 6112), &v18);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v8 + 68))(**v8, a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6112));
  (*(void (__fastcall **)(int))(*(_DWORD *)**v8 + 52))(**v8);
  if ( !FIELD_U32(a1, 6128) )
  {
    v11 = **v8;
    if ( ((unsigned int)&dword_60C80400 & ~(1617665996 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C803FC) == 1 )
    {
      v12 = FIELD_U32(v11, 68);
      FIELD_U32(v12, 44) = a1 + 6104;
      v13 = FIELD_U32(a1, 71800);
      LOWORD(v14) = -1;
      if ( v13 >= 0 && FIELD_U16(v12, 40) > v13 )
        v14 = FIELD_U32(a1, 71800);
      FIELD_U16(v12, 42) = v14;
    }
  }
  FIELD_U32(a1, 6124) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)**v8 + 56))(**v8);
}
