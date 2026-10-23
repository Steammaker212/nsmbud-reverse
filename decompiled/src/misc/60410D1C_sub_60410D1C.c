/* sub_60410D1C
 * address: 0x60410D1C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60410D1C(int a1)
{
  int result; // r0
  int *v2; // r5
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r6
  _DWORD *v6; // r1
  int v7; // [sp+0h] [bp-110h]
  _DWORD *v8; // [sp+4h] [bp-10Ch]
  int *v9; // [sp+Ch] [bp-104h]
  _DWORD **v11; // [sp+14h] [bp-FCh]
  _DWORD v12[36]; // [sp+18h] [bp-F8h] BYREF
  _DWORD v13[3]; // [sp+A8h] [bp-68h] BYREF
  _DWORD v14[2]; // [sp+B4h] [bp-5Ch] BYREF
  float32x2_t v15; // [sp+BCh] [bp-54h] BYREF
  int v16; // [sp+C4h] [bp-4Ch]
  int v17; // [sp+C8h] [bp-48h]
  int v18; // [sp+CCh] [bp-44h]
  int v19; // [sp+D0h] [bp-40h]
  int v20; // [sp+D4h] [bp-3Ch]
  int v21; // [sp+D8h] [bp-38h]
  int v22; // [sp+DCh] [bp-34h]
  int v23; // [sp+E0h] [bp-30h]
  int v24; // [sp+E4h] [bp-2Ch]
  int v25; // [sp+E8h] [bp-28h]

  v2 = (int *)(a1 + 9916);
  result = FIELD_U32(a1, 9916);
  if ( result )
  {
    v8 = (_DWORD *)(a1 + 9928);
    v11 = (_DWORD **)(a1 + 9924);
    result = *v2;
    v9 = v2;
    do
    {
      v3 = 0;
      if ( result )
        v3 = (_DWORD *)**v11;
      v4 = v3[10];
      v15.n64_u64[0] = 1065353216;
      v16 = 0;
      v18 = 0;
      v19 = 1065353216;
      v20 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 1065353216;
      v17 = v3[1];
      v21 = v3[2];
      v25 = v3[3];
      Mtx34_rotateY(&v15, v3 + 8);
      Mtx34_rotateX(&v15, v3 + 7);
      Mtx34_rotateZ(&v15, v3 + 9);
      (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v4 + 60))(v4, &v15);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v4 + 68))(v4, v3 + 4);
      sub_604373E4(v4);
      sub_604373D8(v4);
      v14[0] = v4;
      v5 = v3[11];
      v13[0] = 0;
      v13[1] = 0;
      v13[2] = 1112014848;
      sub_6042C000(v5, v13);
      v12[0] = -1082130432;
      v12[1] = 1065353216;
      memset(&v12[2], 0, 28);
      v12[9] = 1065353216;
      v12[10] = 1065353216;
      v12[11] = 0;
      v12[18] = 1065353216;
      v12[27] = -1082130432;
      v12[28] = -1082130432;
      v12[29] = 0;
      v12[12] = 1065353216;
      memset(&v12[13], 0, 20);
      v12[19] = -1082130432;
      v12[20] = 0;
      v12[21] = 1065353216;
      v12[22] = 1065353216;
      v12[30] = 0;
      v12[31] = 1065353216;
      memset(&v12[23], 0, 16);
      memset(&v12[32], 0, 16);
      sub_6042BCAC(v5, v12, 4);
      v14[1] = v5;
      sub_60410F70(a1, *v3, v14, 2, v7);
      if ( *v9 >= 1 )
      {
        v6 = (_DWORD *)**v11;
        *v6 = *v8;
        *v8 = v6;
      }
      sub_608DEB9C(v9, 0, 1);
      result = *v9;
    }
    while ( *v9 );
  }
  return result;
}
