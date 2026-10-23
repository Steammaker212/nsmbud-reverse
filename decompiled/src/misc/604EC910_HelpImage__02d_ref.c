/* HelpImage__02d_ref
 * address: 0x604EC910   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall HelpImage__02d_ref(int a1, signed int a2, int a3, int (**a4)())
{
  signed int v4; // r5
  signed int *v6; // r8
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _WORD *v9; // r1
  _DWORD *v10; // r0
  int result; // r0
  signed int v12; // r8
  int v13; // r5
  int v14; // r7
  int v15; // r4
  int v16; // r6
  int v17; // r6
  int v18; // r0
  _BYTE v19[64]; // [sp+8h] [bp-160h] BYREF
  int v20; // [sp+48h] [bp-120h] BYREF
  _DWORD v21[20]; // [sp+118h] [bp-50h] BYREF

  v4 = a2;
  v6 = (signed int *)(a1 + 16488);
  if ( a2 >= 1 )
  {
    v7 = 24 * a2 + 8;
    if ( v7 < 24 * a2 )
      v7 = -1;
    if ( !is_mul_ok(0x18u, a2) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, 0, 4);
    if ( v8 )
    {
      *v8 = 24;
      v8[1] = v4;
      v9 = (_WORD *)v8 + 13;
      v10 = v8 + 2;
      a3 = 24 * v4;
      a4 = off_60BFDB94;
      do
      {
        *(_DWORD *)(v9 - 5) = -1;
        *(_DWORD *)(v9 - 3) = -1;
        *(_DWORD *)(v9 - 9) = off_60BFDB94;
        *(v9 - 1) = 0;
        *v9 = 0;
        v9 += 12;
        a3 -= 24;
      }
      while ( a3 );
      a2 = 16492;
      *v6 = v4;
      FIELD_U32(a1, 16492) = v10;
    }
  }
  result = sub_60834F1C(&dword_60CA60D0, a2, a3, a4);
  v12 = *v6;
  v13 = result;
  if ( v12 )
  {
    v14 = 0;
    v15 = FIELD_U32(a1, 16492);
    do
    {
      sub_6017D524(v21, "HelpImage_%02d", v14);
      v16 = FIELD_U32(v13, 20);
      (*(void (__fastcall **)(_DWORD *))(v21[0] + 12))(v21);
      sub_609183B4(v16, (const char *)v21[1]);
      v17 = sub_609184C4(FIELD_U32(v13, 20));
      v18 = agl_TextureData_ref(v19);
      sub_60959954(v18, v17);
      sub_6098E0F8(v15, v19, 0);
      result = sub_609175E4(&v20);
      ++v14;
      v15 += 24;
    }
    while ( v12 != v14 );
  }
  return result;
}
