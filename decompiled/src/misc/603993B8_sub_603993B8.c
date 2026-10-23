/* sub_603993B8
 * address: 0x603993B8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603993B8(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  _DWORD **v4; // r5
  unsigned int v6; // [sp+0h] [bp-50h] BYREF
  unsigned int v7; // [sp+4h] [bp-4Ch] BYREF
  unsigned int v8; // [sp+8h] [bp-48h] BYREF
  float32x2_t v9; // [sp+10h] [bp-40h] BYREF
  int v10; // [sp+18h] [bp-38h]
  int v11; // [sp+1Ch] [bp-34h]
  int v12; // [sp+20h] [bp-30h]
  int v13; // [sp+24h] [bp-2Ch]
  int v14; // [sp+28h] [bp-28h]
  int v15; // [sp+2Ch] [bp-24h]
  int v16; // [sp+30h] [bp-20h]
  int v17; // [sp+34h] [bp-1Ch]
  int v18; // [sp+38h] [bp-18h]
  int v19; // [sp+3Ch] [bp-14h]

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v6 = FIELD_U32(a1, 156);
  v7 = v2;
  v8 = v3;
  v9.n64_u64[0] = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 1065353216;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v11 = FIELD_U32(a1, 108);
  v15 = FIELD_U32(a1, 112);
  v19 = FIELD_U32(a1, 116);
  Mtx34_rotateY(&v9, &v7);
  Mtx34_rotateX(&v9, &v6);
  Mtx34_rotateZ(&v9, &v8);
  v4 = (_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v9);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v4 + 68))(**v4, a1 + 144);
  sub_604218E0(*(_DWORD **)(a1 + 6304));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 52))(**v4);
  sub_60399F2C(a1);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 56))(**v4);
}
