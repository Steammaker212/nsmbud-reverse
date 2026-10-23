/* sub_609765CC
 * address: 0x609765CC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609765CC(int a1, int a2)
{
  int v4; // r0
  _DWORD **v5; // r6
  int v6; // r7
  _DWORD *v7; // t1
  int v8; // r0
  int result; // r0
  bool v10; // zf
  unsigned __int8 *v11; // r0
  int v12; // r1
  int v13; // r10
  int v14; // r9
  int v15; // r0
  _DWORD v16[20]; // [sp+8h] [bp-1E0h] BYREF
  int v17; // [sp+58h] [bp-190h] BYREF
  __int16 v18; // [sp+160h] [bp-88h] BYREF
  int v19; // [sp+164h] [bp-84h]

  sub_6097597C(a1, a2);
  v4 = FIELD_U32(a1, 2356);
  if ( v4 )
  {
    v5 = *(_DWORD ***)(a1 + 2364);
    v6 = 4 * v4;
    do
    {
      v7 = *v5++;
      sub_60975A84(a1, a2, v7, 0);
      v6 -= 4;
    }
    while ( v6 );
  }
  if ( FIELD_U32(a1, 3620) )
  {
    sub_60958528((int)v16, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
    v16[0] = FIELD_U8(a1, 4) + 2;
    v8 = FIELD_U32(a1, 3620);
    if ( (FIELD_U8(v8, 32) & 1) != 0 )
      (**(void (__fastcall ***)(int, _DWORD *))(v8 + 36))(v8 + 36, v16);
  }
  result = FIELD_U32(a1, 1664);
  v10 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 8);
    v10 = result == 0;
  }
  if ( !v10 )
  {
    nullsub_119();
    v11 = (unsigned __int8 *)sub_6090B350((int)&v18);
    v18 = 0;
    v19 &= ~1u;
    sub_6090B4B0(v11, a2);
    v12 = FIELD_U32(a1, 8);
    v13 = FIELD_U32(v12, 28);
    v14 = FIELD_U32(v12, 60);
    FIELD_U32(v12, 28) = a1 + 1944;
    *(_DWORD *)(FIELD_U32(a1, 8) + 60) = 0;
    sub_6090B260(FIELD_U32(a1, 8));
    sub_6090E560(a1 + 2328, a2, *(float **)(a1 + 8));
    v15 = agl_TextureSampler_ref((int)v16);
    sub_60920EC8(v15, (int *)(a1 + 568));
    sub_6093FA14(a2, (int)v16, (float *)(a1 + 2328), (float *)&dword_60B3B954, (float *)&dword_60B3B944);
    *(_DWORD *)(FIELD_U32(a1, 8) + 28) = v13;
    *(_DWORD *)(FIELD_U32(a1, 8) + 60) = v14;
    sub_609175E4((int)&v17);
    return sub_60917AE4((int)v16);
  }
  return result;
}
