/* sub_60656AF4
 * address: 0x60656AF4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60656AF4(int a1, int a2)
{
  int v4; // r8
  int v5; // r10
  _DWORD *v6; // r7
  __int64 v7; // d17
  __int64 v8; // d17
  __int64 v9; // d17
  float v10; // s2
  unsigned int v12; // [sp+8h] [bp-78h] BYREF
  unsigned int v13; // [sp+Ch] [bp-74h]
  unsigned int v14; // [sp+10h] [bp-70h]
  float32x2_t v15; // [sp+14h] [bp-6Ch] BYREF
  __int64 v16; // [sp+1Ch] [bp-64h]
  __int64 v17; // [sp+24h] [bp-5Ch]
  __int64 v18; // [sp+2Ch] [bp-54h]
  __int64 v19; // [sp+34h] [bp-4Ch]
  __int64 v20; // [sp+3Ch] [bp-44h]
  unsigned int v21[15]; // [sp+44h] [bp-3Ch] BYREF

  v4 = 0;
  v5 = 0;
  do
  {
    if ( FIELD_U8(a1, 620) )
    {
      (*(void (__fastcall **)(int, _DWORD, float32x2_t *, unsigned int *))(*(_DWORD *)a2 + 100))(
        a2,
        *(_DWORD *)(a1 + v4 + 72),
        &v15,
        &v12);
      v6 = (_DWORD *)(a1 + 76 * v5 + 72);
    }
    else
    {
      sub_60699BB4(a1 + v4 + 12, a2, FIELD_U8(a1, 621));
      v7 = *(_QWORD *)(a1 + v4 + 20);
      v6 = (_DWORD *)(a1 + v4 + 72);
      v15.n64_u64[0] = *(unsigned __int64 *)(a1 + v4 + 12);
      v16 = v7;
      v8 = *(_QWORD *)(a1 + v4 + 36);
      v17 = *(_QWORD *)(a1 + v4 + 28);
      v18 = v8;
      v9 = *(_QWORD *)(a1 + v4 + 52);
      v19 = *(_QWORD *)(a1 + v4 + 44);
      v20 = v9;
      v12 = *(_DWORD *)(a1 + v4 + 60);
      v13 = *(_DWORD *)(a1 + v4 + 64);
      v14 = *(_DWORD *)(a1 + v4 + 68);
    }
    v10 = *(float *)(a1 + v4 + 76);
    *((float *)&v16 + 1) = *((float *)&v16 + 1) + 0.0;
    *((float *)&v18 + 1) = v10 + *((float *)&v18 + 1);
    *((float *)&v20 + 1) = *((float *)&v20 + 1) + 0.0;
    v21[0] = *(_DWORD *)(a1 + v4 + 80);
    Mtx34_rotateX(&v15, v21);
    v21[0] = *(_DWORD *)(a1 + v4 + 84);
    Mtx34_rotateZ(&v15, v21);
    v21[0] = v12;
    v21[1] = v13;
    v21[2] = v14;
    (*(void (__fastcall **)(int, _DWORD, float32x2_t *, unsigned int *))(*(_DWORD *)a2 + 96))(a2, *v6, &v15, v21);
    v4 += 76;
    ++v5;
  }
  while ( v4 != 608 );
  FIELD_U8(a1, 621) = 1;
  return 1;
}
