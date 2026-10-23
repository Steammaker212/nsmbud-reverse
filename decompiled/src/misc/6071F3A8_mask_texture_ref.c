/* mask_texture_ref
 * address: 0x6071F3A8   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mask_texture_ref(int a1, int a2)
{
  unsigned int v3; // r4
  int v4; // r1
  int *v5; // r3
  int *v6; // r7
  int v7; // r6
  unsigned int v8; // r5
  int v9; // r0
  signed int v10; // r1
  float v11; // s0
  int v12; // r10
  _WORD *v13; // r7
  _BYTE *v14; // r9
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r3
  int v20; // r4
  int v21; // r5
  int v22; // r6
  int v23; // r3
  int v24; // r4
  int v25; // r5
  int v26; // r6
  __int16 v27; // r2
  unsigned int *v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r1
  int v32; // r0
  int v33; // r1
  int v35; // [sp+1Ch] [bp-ACh]
  int v36; // [sp+20h] [bp-A8h]
  _DWORD v38[5]; // [sp+28h] [bp-A0h] BYREF
  int (**v39)(); // [sp+3Ch] [bp-8Ch] BYREF
  unsigned int v40; // [sp+40h] [bp-88h]

  v3 = 1;
  v4 = FIELD_U32(a2, 40);
  v39 = &sead__SafeStringBase__vtable;
  v40 = (unsigned int)"mask_texture";
  v5 = dword_6071F630;
  v6 = dword_6071F638;
  if ( FIELD_U32(dword_60C9BB38, 684) == 1 )
  {
    v5 = &dword_6071F630[1];
    v6 = &dword_6071F638[1];
  }
  v7 = sub_6093E338(
         dword_60CD09F8,
         v4,
         &v39,
         29,
         (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v5),
         (unsigned int)(float)(FIELD_F32(dword_60C9BB38, 696) * *(float *)v6),
         1,
         0,
         0,
         1,
         0);
  FIELD_U32(a1, 7048) = v7;
  v8 = FIELD_U16(v7, 24);
  v9 = sub_609200A0(v7);
  v10 = FIELD_U16(v7, 26);
  if ( v8 > 1 )
    v3 = v8;
  v11 = (float)v3;
  if ( v9 > v10 )
    v10 = v9;
  FIELD_F32(a1, 7404) = v11;
  FIELD_F32(a1, 7408) = (float)(unsigned int)v10;
  FIELD_U32(a1, 7412) = 0;
  FIELD_U32(a1, 7416) = 0;
  FIELD_F32(a1, 7420) = v11;
  FIELD_F32(a1, 7424) = (float)(unsigned int)v10;
  v12 = FIELD_U32(a1, 7048);
  v13 = (_WORD *)(a1 + 7332);
  v35 = FIELD_U16(a1, 7332);
  v14 = (_BYTE *)(a1 + 7334);
  v36 = FIELD_U8(a1, 7334);
  v15 = FIELD_U32(v12, 4);
  v16 = FIELD_U32(v12, 8);
  v17 = FIELD_U32(v12, 12);
  v18 = FIELD_U32(v12, 16);
  FIELD_U32(a1, 7056) = *(_DWORD *)v12;
  FIELD_U32(a1, 7060) = v15;
  FIELD_U32(a1, 7064) = v16;
  FIELD_U32(a1, 7068) = v17;
  FIELD_U32(a1, 7072) = v18;
  v19 = FIELD_U32(v12, 24);
  v20 = FIELD_U32(v12, 28);
  v21 = FIELD_U32(v12, 32);
  v22 = FIELD_U32(v12, 36);
  FIELD_U32(a1, 7076) = FIELD_U32(v12, 20);
  FIELD_U32(a1, 7080) = v19;
  FIELD_U32(a1, 7084) = v20;
  FIELD_U32(a1, 7088) = v21;
  FIELD_U32(a1, 7092) = v22;
  v23 = FIELD_U32(v12, 44);
  v24 = FIELD_U32(v12, 48);
  v25 = FIELD_U32(v12, 52);
  v26 = FIELD_U32(v12, 56);
  FIELD_U32(a1, 7096) = FIELD_U32(v12, 40);
  FIELD_U32(a1, 7100) = v23;
  FIELD_U32(a1, 7104) = v24;
  FIELD_U32(a1, 7108) = v25;
  FIELD_U32(a1, 7112) = v26;
  v27 = FIELD_U16(v12, 60);
  FIELD_U8(a1, 7118) = FIELD_U8(v12, 62);
  FIELD_U16(a1, 7116) = v27;
  sub_60917754(a1 + 7120, v12 + 64);
  FIELD_U32(a1, 7320) = FIELD_U32(v12, 264);
  v28 = (unsigned int *)(a1 + 7328);
  do
    v29 = __ldrex(v28);
  while ( __strex(v29 | 4, v28) );
  if ( (unsigned __int16)*v13 != v35 )
  {
    do
      v30 = __ldrex(v28);
    while ( __strex(v30 | 2, v28) );
    *v13 = v35;
  }
  if ( (unsigned __int8)*v14 != v36 )
  {
    do
      v31 = __ldrex(v28);
    while ( __strex(v31 | 1, v28) );
    *v14 = v36;
  }
  sub_6091AC94(a1 + 7056);
  FIELD_U32(a1, 7428) = a1 + 7056;
  v32 = sub_6090B350(&v39);
  v40 |= 1u;
  LOWORD(v39) = 0;
  sub_6090B4B0(v32, FIELD_U32(a2, 40));
  sub_6090B260(a1 + 7400, FIELD_U32(a2, 40));
  v33 = FIELD_U32(a2, 40);
  memset(v38, 0, 16);
  return sub_6091A764(a1 + 7400, v33, 0, 1, 1.0, v38, 0);
}
