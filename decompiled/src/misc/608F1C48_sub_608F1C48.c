/* sub_608F1C48
 * address: 0x608F1C48   size: 1156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1C48(int a1, void *a2)
{
  void *v3; // r8
  float v4; // s16
  float v5; // s18
  int v6; // r11
  int v7; // r0
  int v8; // r10
  int v9; // r9
  unsigned int v10; // r6
  float v11; // s0
  unsigned int v12; // r4
  _BYTE *v13; // r7
  int v14; // r5
  unsigned int v15; // r0
  unsigned int v16; // r5
  int v17; // r0
  unsigned int v18; // r5
  _BYTE *v19; // r7
  int *v20; // r4
  void *v21; // r11
  int v22; // r8
  int v23; // r6
  unsigned int v24; // r9
  int v25; // t1
  unsigned int v26; // r0
  int v27; // r1
  int v28; // r6
  int v29; // r0
  int v31; // [sp+8h] [bp-230h]
  int v32; // [sp+18h] [bp-220h]
  int v33; // [sp+1Ch] [bp-21Ch]
  _BYTE v34[64]; // [sp+40h] [bp-1F8h] BYREF
  _BYTE v35[440]; // [sp+80h] [bp-1B8h] BYREF

  v3 = a2;
  v4 = FIELD_F32(a1, 4);
  v5 = FIELD_F32(a1, 8);
  v6 = FIELD_U32(dword_60CCF464, 24);
  v7 = operator_new_8DE25C(0x100u, a2, 8);
  v33 = a1;
  v8 = 3;
  v9 = v7;
  v10 = FIELD_U8(a1, 41);
  LODWORD(v11) = (unsigned int)v5;
  v32 = v6;
  if ( v10 >= 3 )
    v10 = 3;
  if ( v10 )
  {
    v31 = v7;
    v12 = 0;
    v13 = v35;
    do
    {
      ((void (__fastcall *)(_BYTE *, int, float))dword_60CC7488)(v13, v6, v11);
      dword_60CC748C(v13);
      dword_60CC74A8(v13, (unsigned int)v4, (unsigned int)v5);
      dword_60CC7494(v13, 1);
      dword_60CC74B4(v13, 37);
      dword_60CC7490(v13, 1);
      v14 = dword_60CC74C4(v13);
      v15 = dword_60CC74C8(v13);
      v13 += 128;
      --v10;
      v12 = v12 - (v14 + v15 - 1) % v15 + v14 + v15 - 1;
    }
    while ( v10 );
    v9 = v31;
    v16 = (v12 + 4095) & 0xFFFFF000;
  }
  else
  {
    v16 = 0;
  }
  dword_60CC73C4(v34);
  dword_60CC73C0(v34, FIELD_U32(dword_60CCF464, 24));
  dword_60CC73CC(v34, 36);
  v17 = operator_new_8DE2C8(v16, (int)v3, 4096);
  dword_60CC73C8(v34, v17, v16);
  dword_60CC73DC(v9, v34);
  if ( FIELD_U8(v33, 41) < 3u )
    v8 = FIELD_U8(v33, 41);
  if ( v8 )
  {
    v18 = 0;
    v19 = v35;
    v20 = (int *)(v33 + 24);
    do
    {
      *v20 = operator_new_8DE25C(0xC0u, v3, 8);
      dword_60CC74CC(v19, v9, v18);
      v21 = v3;
      v22 = dword_60CC74C4(v19);
      v23 = v9;
      v24 = dword_60CC74C8(v19);
      v25 = *v20++;
      dword_60CC7560(v25, v19);
      v26 = v22 + v24;
      v3 = v21;
      v19 += 128;
      --v8;
      v27 = --v26 % v24;
      v9 = v23;
      v18 = v18 - v27 + v26;
    }
    while ( v8 );
  }
  v28 = v33;
  FIELD_U32(v33, 12) = operator_new_8DE25C(0x180u, v3, 8);
  dword_60CC7374(v34);
  dword_60CC7370(v34, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7378(v34, FIELD_U32(v33, 36));
  dword_60CC737C(v34, FIELD_U8(v28, 41), v28 + 24);
  dword_60CC7380(v34, FIELD_U8(v33, 40));
  dword_60CC738C(FIELD_U32(v33, 12), v34);
  dword_60CC736C(FIELD_U32(dword_60CCF464, 28), FIELD_U32(v28, 12), v28 + 20);
  FIELD_U32(v33, 44) = 0;
  FIELD_U32(v33, 48) = 0;
  FIELD_U32(v33, 52) = (unsigned int)v4;
  FIELD_U32(v33, 56) = (unsigned int)v5;
  v29 = operator_new_8DE25C(0x40u, v3, 8);
  FIELD_U32(v33, 16) = v29;
  return dword_60CC79E0(v29, v32);
}
