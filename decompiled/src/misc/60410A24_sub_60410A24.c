/* sub_60410A24
 * address: 0x60410A24   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60410A24(int a1)
{
  int result; // r0
  int *v2; // r5
  _DWORD *v3; // r10
  _DWORD **v4; // r4
  _DWORD *v5; // r9
  int v6; // r7
  _DWORD *v7; // r1
  int v8; // [sp+0h] [bp-60h]
  int v10; // [sp+8h] [bp-58h] BYREF
  float32x2_t v11; // [sp+Ch] [bp-54h] BYREF
  int v12; // [sp+14h] [bp-4Ch]
  int v13; // [sp+18h] [bp-48h]
  int v14; // [sp+1Ch] [bp-44h]
  int v15; // [sp+20h] [bp-40h]
  int v16; // [sp+24h] [bp-3Ch]
  int v17; // [sp+28h] [bp-38h]
  int v18; // [sp+2Ch] [bp-34h]
  int v19; // [sp+30h] [bp-30h]
  int v20; // [sp+34h] [bp-2Ch]
  int v21; // [sp+38h] [bp-28h]

  v2 = (int *)(a1 + 4692);
  result = FIELD_U32(a1, 4692);
  if ( result )
  {
    v3 = (_DWORD *)(a1 + 4704);
    v4 = (_DWORD **)(a1 + 4700);
    do
    {
      v5 = (_DWORD *)**v4;
      v6 = v5[10];
      v11.n64_u64[0] = 1065353216;
      v12 = 0;
      v14 = 0;
      v15 = 1065353216;
      v16 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 1065353216;
      v13 = v5[1];
      v17 = v5[2];
      v21 = v5[3];
      Mtx34_rotateY(&v11, v5 + 8);
      Mtx34_rotateX(&v11, v5 + 7);
      Mtx34_rotateZ(&v11, v5 + 9);
      (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v6 + 60))(v6, &v11);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 68))(v6, v5 + 4);
      sub_604373E4(v6);
      sub_604373D8(v6);
      v10 = v6;
      sub_60410F70(a1, *v5, &v10, 1, v8);
      if ( *v2 >= 1 )
      {
        v7 = (_DWORD *)**v4;
        *v7 = *v3;
        *v3 = v7;
      }
      sub_608DEB9C(v2, 0, 1);
      result = *v2;
    }
    while ( *v2 );
  }
  return result;
}
