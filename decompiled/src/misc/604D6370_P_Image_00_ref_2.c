/* P_Image_00_ref_2
 * address: 0x604D6370   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall P_Image_00_ref_2(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int v4; // r2
  int (**v5)(); // r3
  int v6; // r1
  unsigned int *v7; // r5
  _DWORD *v8; // r0
  int *v9; // r7
  int v10; // r9
  unsigned int v11; // r10
  int *v12; // r2
  const char **v13; // r4
  int v14; // r4
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r0
  int v18; // r4
  int (__fastcall *v19)(int, int, int); // r11
  int v20; // r0
  int v21; // r1
  int result; // r0
  int v23; // [sp+18h] [bp-140h]
  int *v24; // [sp+1Ch] [bp-13Ch]
  _BYTE v25[64]; // [sp+20h] [bp-138h] BYREF
  int v26; // [sp+60h] [bp-F8h] BYREF

  if ( ((unsigned int)&dword_60CA4D30 & ~(1615684496 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D30) )
  {
    dword_60CA4DB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DB4 = (int)"P_Image_00";
    _cxa_guard_release(&dword_60CA4D30);
  }
  if ( ((unsigned int)dword_60CA4D34 & ~(1615684596 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA4D34) )
  {
    dword_60CA4EC0[0] = 0;
    dword_60CA4EC4 = 1;
    dword_60CA4EC8 = 2;
    dword_60CA4ECC = 3;
    dword_60CA4ED0 = 4;
    dword_60CA4ED4 = 5;
    dword_60CA4ED8 = 6;
    dword_60CA4EDC = 7;
    unk_60CA4EE0 = 8;
    unk_60CA4EE4 = 9;
    unk_60CA4EE8 = 10;
    unk_60CA4EEC = 11;
    _cxa_guard_release(dword_60CA4D34);
  }
  v3 = (_DWORD *)sub_608DE334(0x128u, 0, 4);
  v6 = 52628;
  v7 = a1 + 13157;
  if ( v3 )
  {
    *v3 = 24;
    v3[1] = 12;
    v3[4] = -1;
    v3[5] = -1;
    v5 = off_60BFDB94;
    v3[2] = off_60BFDB94;
    v8 = v3 + 2;
    *((_WORD *)v8 + 8) = 0;
    *((_WORD *)v8 + 9) = 0;
    v8[9] = -1;
    v8[8] = -1;
    v8[6] = off_60BFDB94;
    *((_WORD *)v8 + 20) = 0;
    *((_WORD *)v8 + 21) = 0;
    v8[15] = -1;
    v8[14] = -1;
    v8[12] = off_60BFDB94;
    *((_WORD *)v8 + 32) = 0;
    *((_WORD *)v8 + 33) = 0;
    v8[21] = -1;
    v8[20] = -1;
    v8[18] = off_60BFDB94;
    *((_WORD *)v8 + 44) = 0;
    *((_WORD *)v8 + 45) = 0;
    v8[27] = -1;
    v8[26] = -1;
    v8[24] = off_60BFDB94;
    *((_WORD *)v8 + 56) = 0;
    *((_WORD *)v8 + 57) = 0;
    v8[33] = -1;
    v8[32] = -1;
    v8[30] = off_60BFDB94;
    *((_WORD *)v8 + 68) = 0;
    *((_WORD *)v8 + 69) = 0;
    v8[39] = -1;
    v8[38] = -1;
    v8[36] = off_60BFDB94;
    *((_WORD *)v8 + 80) = 0;
    *((_WORD *)v8 + 81) = 0;
    v8[45] = -1;
    v8[44] = -1;
    v8[42] = off_60BFDB94;
    *((_WORD *)v8 + 92) = 0;
    *((_WORD *)v8 + 93) = 0;
    v8[51] = -1;
    v8[50] = -1;
    v8[48] = off_60BFDB94;
    *((_WORD *)v8 + 104) = 0;
    *((_WORD *)v8 + 105) = 0;
    v8[57] = -1;
    v8[56] = -1;
    v8[54] = off_60BFDB94;
    *((_WORD *)v8 + 116) = 0;
    *((_WORD *)v8 + 117) = 0;
    v8[63] = -1;
    v8[62] = -1;
    v8[60] = off_60BFDB94;
    *((_WORD *)v8 + 128) = 0;
    *((_WORD *)v8 + 129) = 0;
    v8[68] = -1;
    v8[69] = -1;
    v8[66] = off_60BFDB94;
    *((_WORD *)v8 + 140) = 0;
    v4 = 282;
    *((_WORD *)v8 + 141) = 0;
    *v7 = 12;
    v6 = 52632;
    a1[13158] = v8;
  }
  v9 = a1 + 13158;
  v23 = sub_60834F1C(&dword_60CA4D60, v6, v4, v5);
  v10 = 0;
  v11 = 0;
  v12 = dword_60CA3638;
  do
  {
    v24 = v12;
    v13 = (const char **)&dword_60CA3638[48 * a1[9] + 4 * v11];
    (*((void (__fastcall **)(int *))*v13 + 3))(&v12[48 * a1[9]]);
    sub_609183B4(FIELD_U32(v23, 20), v13[1]);
    v14 = sub_609184C4(FIELD_U32(v23, 20));
    v15 = agl_TextureData_ref(v25);
    sub_60959954(v15, v14);
    v16 = *v9;
    if ( *v7 > v11 )
      v16 += v10;
    sub_6098E0F8(v16, v25, 0);
    v17 = dword_60CA4EC0[v11];
    if ( v17 >= 0xD )
      v17 = 0;
    v18 = a1[v17 + 962];
    v19 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v18 + 48);
    (*(void (__fastcall **)(int *))(dword_60CA4DB0 + 12))(&dword_60CA4DB0);
    v20 = v19(v18, dword_60CA4DB4, 1);
    v21 = *v9;
    if ( *v7 > v11 )
      v21 += v10;
    sub_6098E754(v20, v21, 0);
    result = sub_609175E4(&v26);
    ++v11;
    v10 += 24;
    v12 = v24 + 4;
  }
  while ( v11 != 12 );
  return result;
}
