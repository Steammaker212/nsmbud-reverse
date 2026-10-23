/* g3d_OptionUniformBlock_ref
 * address: 0x60872FD8   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall g3d_OptionUniformBlock_ref(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r7
  int v10; // r0
  unsigned int v11; // r6
  unsigned int v12; // r7
  int v13; // r0
  int v14; // r1
  int v15; // r9
  int v16; // r0
  int i; // r6
  int v18; // r1
  int v19; // r2
  int v20; // r7
  int v21; // r10
  int v22; // r8
  int v23; // r7
  int v24; // r7
  int v25; // r1
  int v26; // r0
  int v27; // r1
  int v28; // r8
  unsigned __int16 *v29; // r8
  int v30; // t1
  bool v31; // zf
  int v32; // r7
  int v33; // r6
  int v34; // r5
  int result; // r0
  _BYTE *v37; // [sp+1Ch] [bp-4Ch]
  int v38; // [sp+20h] [bp-48h] BYREF
  int v39; // [sp+24h] [bp-44h]
  int v40; // [sp+28h] [bp-40h]
  int v41; // [sp+2Ch] [bp-3Ch]
  int v42; // [sp+30h] [bp-38h] BYREF
  int v43; // [sp+34h] [bp-34h]
  int v44; // [sp+38h] [bp-30h]
  int v45; // [sp+3Ch] [bp-2Ch]

  v7 = *a1;
  v8 = FIELD_S8(v7, 226);
  if ( v8 < 0 )
  {
    v12 = 0;
    v11 = *((unsigned __int8 *)a1 + 40);
    v37 = a1 + 10;
  }
  else
  {
    v9 = *(unsigned __int16 *)(FIELD_U32(v7, 72) + 32 * v8 + 26);
    v45 = 0;
    v44 = 0;
    v43 = 0;
    v42 = 0;
    sub_6083D5B0(&v42);
    v42 = v9;
    v43 = 16;
    v10 = sub_608352A0(a2, (int)&v42);
    v11 = *((unsigned __int8 *)a1 + 40);
    v37 = a1 + 10;
    v12 = v11 * ((v9 + v10 - 1) & -v10);
  }
  v13 = a1[14];
  if ( v13 >= 1 )
  {
    v14 = ~v13;
    if ( ~v13 < -2 || v13 == 1 )
      v14 = -2;
    memset((void *)a1[11], 0, 4 * (v14 + v13) + 8);
  }
  v15 = v12 / v11;
  *((_BYTE *)a1 + 64) &= ~1u;
  v16 = a1[13];
  if ( v16 >= 2 )
  {
    for ( i = 0; i < v16; ++i )
    {
      v18 = a1[14];
      if ( v18 >= 1 )
      {
        v19 = ~v18;
        if ( ~v18 < -2 || v18 == 1 )
          v19 = -2;
        memset((void *)(a1[12] + 4 * v18 * i), 0, 4 * (v19 + v18) + 8);
        v16 = a1[13];
      }
    }
  }
  v20 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  sub_6083D5B0(&v38);
  v38 = v15;
  v39 = 16;
  if ( *v37 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = a1[8] + v21;
      sub_608353A4(v23);
      sub_608353C0(v23, a2, &v38, a3, a4);
      sub_608A7D8C(v23, "g3d_OptionUniformBlock");
      v24 = 0;
      v25 = *(char *)(*a1 + 226);
      if ( v25 >= 0 )
        v24 = *(unsigned __int16 *)(*(_DWORD *)(*a1 + 72) + 32 * v25 + 26);
      v45 = 0;
      v44 = 0;
      v43 = 0;
      v42 = 0;
      sub_6083D5B0(&v42);
      v42 = v24;
      v43 = 16;
      v26 = sub_608352A0(a2, (int)&v42);
      ++v22;
      v21 += 72;
      a4 += (v15 - 1 + v26) & -v26;
      v20 = (unsigned __int8)*v37;
    }
    while ( v22 < v20 );
  }
  a1[9] = v15;
  v27 = *(char *)(*a1 + 226);
  if ( v27 >= 0 )
  {
    v28 = *(_DWORD *)(*a1 + 72) + 32 * v27;
    v30 = FIELD_U16(v28, 26);
    v29 = (unsigned __int16 *)(v28 + 26);
    v31 = v30 == 0;
    if ( v30 )
      v31 = v20 == 0;
    if ( !v31 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        v34 = a1[8] + v32;
        memset((void *)sub_608354C4(v34), 0, *v29);
        sub_608354E0(v34);
        nullsub_66();
        ++v33;
        v32 += 72;
      }
      while ( v33 < *((unsigned __int8 *)a1 + 40) );
    }
  }
  result = a1[1] | 1;
  a1[1] = result;
  return result;
}
