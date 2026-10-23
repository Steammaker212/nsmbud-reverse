/* lava_line_texture_ref
 * address: 0x6071DC78   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lava_line_texture_ref(int a1, int a2)
{
  int result; // r0
  unsigned int v4; // r4
  int v5; // r1
  int *v6; // r3
  int *v7; // r7
  int v8; // r6
  unsigned int v9; // r7
  int v10; // r0
  signed int v11; // r1
  float v12; // s0
  _WORD *v13; // r7
  int v14; // r10
  _BYTE *v15; // r8
  int v16; // r3
  int v17; // r4
  int v18; // r5
  int v19; // r6
  int v20; // r3
  int v21; // r4
  int v22; // r5
  int v23; // r6
  int v24; // r3
  int v25; // r4
  int v26; // r5
  int v27; // r6
  __int16 v28; // r2
  unsigned int *v29; // r0
  unsigned int v30; // r1
  unsigned int v31; // r2
  unsigned int v32; // r1
  int v33; // r0
  int v34; // r1
  int v35; // [sp+1Ch] [bp-ACh]
  int v36; // [sp+20h] [bp-A8h]
  _DWORD v38[5]; // [sp+28h] [bp-A0h] BYREF
  int (**v39)(); // [sp+3Ch] [bp-8Ch] BYREF
  unsigned int v40; // [sp+40h] [bp-88h]
  int v41; // [sp+58h] [bp-70h]

  result = FIELD_U8(a1, 1509);
  if ( result )
  {
    v4 = 1;
    v5 = FIELD_U32(a2, 40);
    v39 = &sead__SafeStringBase__vtable;
    v40 = (unsigned int)"lava_line_texture";
    v6 = dword_6071DF18;
    v7 = dword_6071DF20;
    if ( FIELD_U32(dword_60C9BB38, 684) == 1 )
    {
      v6 = &dword_6071DF18[1];
      v7 = &dword_6071DF20[1];
    }
    FIELD_U32(a1, 7880) = sub_6093E338(
                               dword_60CD09F8,
                               v5,
                               &v39,
                               29,
                               (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v6),
                               (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v7),
                               1,
                               0,
                               1,
                               1,
                               0);
    v8 = FIELD_U32(a1, 6216);
    v9 = FIELD_U16(v8, 24);
    v10 = sub_609200A0(v8);
    v11 = FIELD_U16(v8, 26);
    if ( v9 > 1 )
      v4 = v9;
    v12 = (float)v4;
    if ( v10 > v11 )
      v11 = v10;
    FIELD_F32(a1, 8236) = v12;
    FIELD_F32(a1, 8240) = (float)(unsigned int)v11;
    FIELD_U32(a1, 8244) = 0;
    FIELD_U32(a1, 8248) = 0;
    FIELD_F32(a1, 8252) = v12;
    FIELD_F32(a1, 8256) = (float)(unsigned int)v11;
    v13 = (_WORD *)(a1 + 8164);
    v14 = FIELD_U32(a1, 7880);
    v35 = FIELD_U16(a1, 8164);
    v15 = (_BYTE *)(a1 + 8166);
    v36 = FIELD_U8(a1, 8166);
    v16 = FIELD_U32(v14, 4);
    v17 = FIELD_U32(v14, 8);
    v18 = FIELD_U32(v14, 12);
    v19 = FIELD_U32(v14, 16);
    FIELD_U32(a1, 7888) = *(_DWORD *)v14;
    FIELD_U32(a1, 7892) = v16;
    FIELD_U32(a1, 7896) = v17;
    FIELD_U32(a1, 7900) = v18;
    FIELD_U32(a1, 7904) = v19;
    v20 = FIELD_U32(v14, 24);
    v21 = FIELD_U32(v14, 28);
    v22 = FIELD_U32(v14, 32);
    v23 = FIELD_U32(v14, 36);
    FIELD_U32(a1, 7908) = FIELD_U32(v14, 20);
    FIELD_U32(a1, 7912) = v20;
    FIELD_U32(a1, 7916) = v21;
    FIELD_U32(a1, 7920) = v22;
    FIELD_U32(a1, 7924) = v23;
    v24 = FIELD_U32(v14, 44);
    v25 = FIELD_U32(v14, 48);
    v26 = FIELD_U32(v14, 52);
    v27 = FIELD_U32(v14, 56);
    FIELD_U32(a1, 7928) = FIELD_U32(v14, 40);
    FIELD_U32(a1, 7932) = v24;
    FIELD_U32(a1, 7936) = v25;
    FIELD_U32(a1, 7940) = v26;
    FIELD_U32(a1, 7944) = v27;
    v28 = FIELD_U16(v14, 60);
    FIELD_U8(a1, 7950) = FIELD_U8(v14, 62);
    FIELD_U16(a1, 7948) = v28;
    sub_60917754(a1 + 7952, v14 + 64);
    FIELD_U32(a1, 8152) = FIELD_U32(v14, 264);
    v29 = (unsigned int *)(a1 + 8160);
    do
      v30 = __ldrex(v29);
    while ( __strex(v30 | 4, v29) );
    if ( (unsigned __int16)*v13 != v35 )
    {
      do
        v31 = __ldrex(v29);
      while ( __strex(v31 | 2, v29) );
      *v13 = v35;
    }
    if ( (unsigned __int8)*v15 != v36 )
    {
      do
        v32 = __ldrex(v29);
      while ( __strex(v32 | 1, v29) );
      *v15 = v36;
    }
    sub_6091AC94(a1 + 7888);
    FIELD_U32(a1, 8260) = a1 + 7888;
    sub_6090B260(a1 + 8232, FIELD_U32(a2, 40));
    v33 = sub_6090B350(&v39);
    LOWORD(v39) = 0;
    v40 &= ~1u;
    v41 = 15;
    sub_6090B4B0(v33, FIELD_U32(a2, 40));
    v34 = FIELD_U32(a2, 40);
    memset(v38, 0, 16);
    return sub_6091A764(a1 + 8232, v34, 0, 1, 1.0, v38, 0);
  }
  return result;
}
