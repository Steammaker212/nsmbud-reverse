/* sub_604108F8
 * address: 0x604108F8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604108F8(int a1)
{
  int result; // r0
  int *v3; // r10
  _DWORD *v4; // r6
  int v5; // r7
  _DWORD *v6; // r0
  int v7; // [sp+0h] [bp-58h] BYREF
  float32x2_t v8; // [sp+4h] [bp-54h] BYREF
  int v9; // [sp+Ch] [bp-4Ch]
  int v10; // [sp+10h] [bp-48h]
  int v11; // [sp+14h] [bp-44h]
  int v12; // [sp+18h] [bp-40h]
  int v13; // [sp+1Ch] [bp-3Ch]
  int v14; // [sp+20h] [bp-38h]
  int v15; // [sp+24h] [bp-34h]
  int v16; // [sp+28h] [bp-30h]
  int v17; // [sp+2Ch] [bp-2Ch]
  int v18; // [sp+30h] [bp-28h]

  v3 = (int *)(a1 + 2080);
  result = FIELD_U32(a1, 2080);
  if ( result )
  {
    do
    {
      v4 = **(_DWORD ***)(a1 + 2088);
      v5 = v4[10];
      v8.n64_u64[0] = 1065353216;
      v9 = 0;
      v11 = 0;
      v12 = 1065353216;
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 1065353216;
      v10 = v4[1];
      v14 = v4[2];
      v18 = v4[3];
      Mtx34_rotateY(&v8, v4 + 8);
      Mtx34_rotateX(&v8, v4 + 7);
      Mtx34_rotateZ(&v8, v4 + 9);
      (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 60))(v5, &v8);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 68))(v5, v4 + 4);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 56))(v5);
      v7 = v5;
      ((void (__fastcall *)(int, _DWORD, int *, int))sub_60410F70)(a1, *v4, &v7, 1);
      if ( FIELD_S32(a1, 2080) >= 1 )
      {
        v6 = **(_DWORD ***)(a1 + 2088);
        *v6 = FIELD_U32(a1, 2092);
        FIELD_U32(a1, 2092) = v6;
      }
      sub_608DEB9C(v3, 0, 1);
      result = *v3;
    }
    while ( *v3 );
  }
  return result;
}
