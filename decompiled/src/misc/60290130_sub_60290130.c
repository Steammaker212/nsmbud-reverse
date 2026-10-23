/* sub_60290130
 * address: 0x60290130   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60290130(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  unsigned int v5; // [sp+0h] [bp-50h] BYREF
  unsigned int v6; // [sp+4h] [bp-4Ch] BYREF
  unsigned int v7; // [sp+8h] [bp-48h] BYREF
  float32x2_t v8; // [sp+10h] [bp-40h] BYREF
  int v9; // [sp+18h] [bp-38h]
  int v10; // [sp+1Ch] [bp-34h]
  int v11; // [sp+20h] [bp-30h]
  int v12; // [sp+24h] [bp-2Ch]
  int v13; // [sp+28h] [bp-28h]
  int v14; // [sp+2Ch] [bp-24h]
  int v15; // [sp+30h] [bp-20h]
  int v16; // [sp+34h] [bp-1Ch]
  int v17; // [sp+38h] [bp-18h]
  int v18; // [sp+3Ch] [bp-14h]

  v2 = FIELD_U32(a1, 80);
  v3 = FIELD_U32(a1, 84);
  v5 = FIELD_U32(a1, 76);
  v6 = v2;
  v7 = v3;
  v8.n64_u64[0] = 1065353216;
  v9 = 0;
  v11 = 0;
  v12 = 1065353216;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1065353216;
  v10 = FIELD_U32(a1, 52);
  v14 = FIELD_U32(a1, 56);
  v18 = FIELD_U32(a1, 60);
  Mtx34_rotateY(&v8, &v6);
  Mtx34_rotateX(&v8, &v5);
  Mtx34_rotateZ(&v8, &v7);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 40) + 60))(**(_DWORD **)(a1 + 40), &v8);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 40) + 68))(**(_DWORD **)(a1 + 40), a1 + 88);
  sub_604218E0(*(_DWORD **)(a1 + 40));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 40) + 52))(**(_DWORD **)(a1 + 40));
  sub_60290260(a1);
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 40) + 56))(**(_DWORD **)(a1 + 40));
}
