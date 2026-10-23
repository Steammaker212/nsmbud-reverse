/* Lyt_Challenge_ref
 * address: 0x604953F4   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Lyt_Challenge_ref(int a1)
{
  char v1; // r12
  _QWORD *v3; // r0
  int (**v4)(); // r2
  int v5; // r3
  int v6; // r1
  int *v7; // r8
  char *v8; // r6
  int *v9; // r4
  int result; // r0
  int v11; // r8
  int v12; // r5
  int v13; // r4
  int i; // r7
  int v15; // r6
  int v16; // r6
  int v17; // r0
  _BYTE v18[64]; // [sp+8h] [bp-160h] BYREF
  int v19; // [sp+48h] [bp-120h] BYREF
  _DWORD v20[20]; // [sp+118h] [bp-50h] BYREF

  if ( ((unsigned int)dword_60CA0488 & ~(1615418388 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA0488) )
  {
    dword_60CA04AC = (int)&sead__SafeStringBase__vtable;
    dword_60CA04B0 = (int)"Lyt_Challenge";
    _cxa_guard_release(dword_60CA0488);
  }
  Model_s_Nin_NX_NVN_szs_ref_834E7C(&dword_60CA04AC, 0);
  v3 = (_QWORD *)sub_608DE334(0x1C28u, 0, 4);
  v6 = 5964;
  v7 = (int *)(a1 + 5964);
  if ( v3 )
  {
    *v3 = 0x12C00000018LL;
    v5 = -1;
    v4 = off_60BFDB94;
    v6 = 0;
    do
    {
      v8 = (char *)v3 + v6;
      v6 += 48;
      *((_DWORD *)v8 + 5) = -1;
      *((_DWORD *)v8 + 4) = -1;
      *((_DWORD *)v8 + 2) = off_60BFDB94;
      *((_WORD *)v8 + 12) = 0;
      *((_WORD *)v8 + 13) = 0;
      *((_DWORD *)v8 + 10) = -1;
      *((_DWORD *)v8 + 11) = -1;
      *((_DWORD *)v8 + 8) = off_60BFDB94;
      *((_WORD *)v8 + 24) = 0;
      *((_WORD *)v8 + 25) = 0;
    }
    while ( v6 != 7200 );
    *v7 = 300;
    FIELD_U32(a1, 5968) = v3 + 1;
    v9 = (int *)(a1 + 5968);
  }
  else
  {
    v9 = (int *)(a1 + 5968);
  }
  result = sub_60834F1C(&dword_60CA04AC, v6, v4, v5);
  v11 = *v7;
  v12 = result;
  if ( v11 )
  {
    v13 = *v9;
    for ( i = 0; i != v11; ++i )
    {
      sub_6017D524(v20, "ChallengeImage_%03d", i);
      v15 = FIELD_U32(v12, 20);
      (*(void (__fastcall **)(_DWORD *))(v20[0] + 12))(v20);
      sub_609183B4(v15, (const char *)v20[1]);
      v16 = sub_609184C4(FIELD_U32(v12, 20));
      v17 = agl_TextureData_ref(v18);
      sub_60959954(v17, v16);
      sub_6098E0F8(v13, v18, 0);
      result = sub_609175E4(&v19);
      v13 += 24;
    }
  }
  return result;
}
