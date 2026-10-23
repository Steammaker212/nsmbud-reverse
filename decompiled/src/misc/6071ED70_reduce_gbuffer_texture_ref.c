/* reduce_gbuffer_texture_ref
 * address: 0x6071ED70   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall reduce_gbuffer_texture_ref(int a1, int a2)
{
  int v4; // r6
  int *v5; // r2
  int v6; // r1
  int *v7; // r3
  int *v8; // r7
  float v9; // s2
  unsigned int v10; // r7
  int v11; // r6
  unsigned int v12; // r4
  int v13; // r0
  signed int v14; // r1
  float v15; // s0
  _WORD *v16; // r4
  int v17; // r10
  _BYTE *v18; // r8
  int v19; // r3
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int v23; // r3
  int v24; // r5
  int v25; // r6
  int v26; // r7
  int v27; // r3
  int v28; // r5
  int v29; // r6
  int v30; // r7
  __int16 v31; // r2
  int v32; // r6
  unsigned int *v33; // r0
  unsigned int v34; // r1
  unsigned int v35; // r1
  unsigned int v36; // r1
  int v37; // r0
  int v38; // r1
  int v40; // [sp+20h] [bp-A0h]
  int v41; // [sp+24h] [bp-9Ch]
  int v42; // [sp+28h] [bp-98h]
  _DWORD *v43; // [sp+30h] [bp-90h]
  int (**v44)(); // [sp+34h] [bp-8Ch] BYREF
  unsigned int v45; // [sp+38h] [bp-88h]

  v4 = a1 + 6224;
  sub_6091ADF4(a1 + 6224, FIELD_U32(a2, 40));
  v5 = (int *)(a1 + 6216);
  if ( FIELD_U32(dword_60CD0B40, 20) )
  {
    v43 = (_DWORD *)(a1 + 6216);
    nullsub_119(v4, FIELD_U32(a2, 40));
    v6 = FIELD_U32(a2, 40);
    v44 = &sead__SafeStringBase__vtable;
    v45 = (unsigned int)"reduce_gbuffer_texture";
    v7 = dword_6071F0BC;
    v8 = dword_6071F0C4;
    if ( FIELD_U32(dword_60C9BB38, 684) == 1 )
    {
      v7 = &dword_6071F0BC[1];
      v8 = &dword_6071F0C4[1];
    }
    v9 = *(float *)v8;
    v10 = 1;
    v11 = sub_6093E338(
            dword_60CD09F8,
            v6,
            &v44,
            29,
            (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v7),
            (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * v9),
            1,
            0,
            0,
            1,
            0);
    FIELD_U32(a1, 6632) = v11;
    v12 = FIELD_U16(v11, 24);
    v13 = sub_609200A0(v11);
    v14 = FIELD_U16(v11, 26);
    if ( v12 > 1 )
      v10 = v12;
    v15 = (float)v10;
    if ( v13 > v14 )
      v14 = v13;
    FIELD_F32(a1, 6988) = v15;
    FIELD_F32(a1, 6992) = (float)(unsigned int)v14;
    FIELD_U32(a1, 6996) = 0;
    FIELD_U32(a1, 7000) = 0;
    FIELD_F32(a1, 7004) = v15;
    FIELD_F32(a1, 7008) = (float)(unsigned int)v14;
    v16 = (_WORD *)(a1 + 6916);
    v17 = FIELD_U32(a1, 6632);
    v40 = FIELD_U16(a1, 6916);
    v18 = (_BYTE *)(a1 + 6918);
    v41 = FIELD_U8(a1, 6918);
    v42 = a1 + 6640;
    v19 = FIELD_U32(v17, 4);
    v20 = FIELD_U32(v17, 8);
    v21 = FIELD_U32(v17, 12);
    v22 = FIELD_U32(v17, 16);
    FIELD_U32(a1, 6640) = *(_DWORD *)v17;
    FIELD_U32(a1, 6644) = v19;
    FIELD_U32(a1, 6648) = v20;
    FIELD_U32(a1, 6652) = v21;
    FIELD_U32(a1, 6656) = v22;
    v23 = FIELD_U32(v17, 24);
    v24 = FIELD_U32(v17, 28);
    v25 = FIELD_U32(v17, 32);
    v26 = FIELD_U32(v17, 36);
    FIELD_U32(a1, 6660) = FIELD_U32(v17, 20);
    FIELD_U32(a1, 6664) = v23;
    FIELD_U32(a1, 6668) = v24;
    FIELD_U32(a1, 6672) = v25;
    FIELD_U32(a1, 6676) = v26;
    v27 = FIELD_U32(v17, 44);
    v28 = FIELD_U32(v17, 48);
    v29 = FIELD_U32(v17, 52);
    v30 = FIELD_U32(v17, 56);
    FIELD_U32(a1, 6680) = FIELD_U32(v17, 40);
    FIELD_U32(a1, 6684) = v27;
    FIELD_U32(a1, 6688) = v28;
    FIELD_U32(a1, 6692) = v29;
    FIELD_U32(a1, 6696) = v30;
    v31 = FIELD_U16(v17, 60);
    FIELD_U8(a1, 6702) = FIELD_U8(v17, 62);
    FIELD_U16(a1, 6700) = v31;
    sub_60917754(a1 + 6704, v17 + 64);
    v32 = a1 + 6984;
    FIELD_U32(a1, 6904) = FIELD_U32(v17, 264);
    v33 = (unsigned int *)(a1 + 6912);
    do
      v34 = __ldrex(v33);
    while ( __strex(v34 | 4, v33) );
    if ( (unsigned __int16)*v16 != v40 )
    {
      do
        v35 = __ldrex(v33);
      while ( __strex(v35 | 2, v33) );
      *v16 = v40;
    }
    if ( (unsigned __int8)*v18 != v41 )
    {
      do
        v36 = __ldrex(v33);
      while ( __strex(v36 | 1, v33) );
      *v18 = v41;
    }
    sub_6091AC94(v42);
    FIELD_U32(a1, 7012) = v42;
    v37 = sub_6090B350(&v44);
    v45 &= ~1u;
    LOWORD(v44) = 0;
    sub_6090B4B0(v37, FIELD_U32(a2, 40));
    sub_6090B260(v32, FIELD_U32(a2, 40));
    sub_60920EC8(a1 + 9136, *v43);
    sub_6090E560(FIELD_U32(a2, 32), FIELD_U32(a2, 40), v32);
    sub_6093FA14(FIELD_U32(a2, 40), a1 + 9136, FIELD_U32(a2, 32), &dword_60B3B954, &dword_60B3B944);
    sub_6091ADF4(v42, FIELD_U32(a2, 40));
    if ( *v43 )
    {
      sub_6093EA98(dword_60CD09F8, *v43);
      *v43 = 0;
    }
    *v43 = 0;
    v38 = FIELD_U32(a1, 6632);
  }
  else
  {
    v38 = *v5;
    FIELD_U32(a1, 6632) = *v5;
    *v5 = 0;
  }
  return sub_60959C28(a1 + 8640, v38, 0);
}
