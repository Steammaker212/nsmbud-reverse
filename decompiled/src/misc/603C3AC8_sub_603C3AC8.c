/* sub_603C3AC8
 * address: 0x603C3AC8   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C3AC8(int a1)
{
  _DWORD **v2; // r6
  float v3; // s4
  float v4; // s2
  int (__fastcall ***v5)(_DWORD, int *); // r5
  char v6; // r12
  int v7; // r7
  int v8; // r0
  int v9; // r2
  int v10; // r1
  float v12; // [sp+0h] [bp-58h] BYREF
  float v13; // [sp+4h] [bp-54h]
  float v14; // [sp+8h] [bp-50h]
  float32x2_t v15; // [sp+10h] [bp-48h] BYREF
  int v16; // [sp+18h] [bp-40h]
  int v17; // [sp+1Ch] [bp-3Ch]
  int v18; // [sp+20h] [bp-38h]
  int v19; // [sp+24h] [bp-34h]
  int v20; // [sp+28h] [bp-30h]
  int v21; // [sp+2Ch] [bp-2Ch]
  int v22; // [sp+30h] [bp-28h]
  int v23; // [sp+34h] [bp-24h]
  int v24; // [sp+38h] [bp-20h]
  int v25; // [sp+3Ch] [bp-1Ch]

  v15.n64_u64[0] = 1065353216;
  v16 = 0;
  v18 = 0;
  v19 = 1065353216;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 1065353216;
  v17 = FIELD_U32(a1, 108);
  v21 = FIELD_U32(a1, 112);
  v25 = FIELD_U32(a1, 116);
  Mtx34_rotateY(&v15, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v15, (unsigned int *)(a1 + 164));
  v2 = (_DWORD **)(a1 + 14956);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 14956));
  sub_604218E0(*(_DWORD **)(a1 + 14956));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v2 + 60))(**v2, &v15);
  v14 = FIELD_F32(a1, 152);
  v13 = FIELD_F32(a1, 148);
  v12 = FIELD_F32(a1, 144);
  v3 = FIELD_F32(a1, 14516) - FIELD_F32(a1, 148);
  v4 = FIELD_F32(a1, 14520) - FIELD_F32(a1, 152);
  v12 = v12 + (float)((float)(FIELD_F32(a1, 14512) - FIELD_F32(a1, 144)) * 0.5);
  v13 = v13 + (float)(v3 * 0.5);
  v14 = v14 + (float)(v4 * 0.5);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v2 + 68))(**v2, &v12);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 52))(**v2);
  v5 = **(int (__fastcall *****)(_DWORD, int *))(a1 + 14956);
  if ( ((unsigned int)&dword_60C80400 & ~(1614560328 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  v7 = (int)(v5 + 17);
  if ( !(**v5)(v5, &dword_60C803FC) )
    v7 = 68;
  v8 = *(_DWORD *)v7;
  *(_DWORD *)(*(_DWORD *)v7 + 44) = a1 + 6300;
  v9 = FIELD_U32(a1, 26836);
  LOWORD(v10) = -1;
  if ( v9 >= 0 && FIELD_U16(v8, 40) > v9 )
    v10 = FIELD_U32(a1, 26836);
  FIELD_U16(v8, 42) = v10;
  FIELD_U32(a1, 26972) = 1;
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
}
