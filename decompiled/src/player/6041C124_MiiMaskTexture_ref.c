/* MiiMaskTexture_ref
 * address: 0x6041C124   size: 456   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiMaskTexture_ref(_DWORD *a1, int a2, void *a3)
{
  int v5; // r0
  int v6; // r10
  int v7; // r5
  _DWORD *v8; // r7
  int v9; // r1
  int v10; // r2
  _DWORD *v11; // r6
  int v12; // r7
  _QWORD *v13; // r4
  int result; // r0
  int v15; // [sp+20h] [bp-38h]
  _DWORD v17[12]; // [sp+28h] [bp-30h] BYREF

  v15 = sub_6083E1C0();
  v5 = sub_6083E1C8();
  a1[272] = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a3 + 24))(a3, v15, v5);
  v6 = sub_6083E1D0(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32, a1[349]);
  v7 = sub_6083E1D4(FIELD_U32(dword_60CCFC8C, 24), dword_60C9BAF4 + 32, a1[349]);
  v8 = (_DWORD *)operator_new_8DE25C(0x1Cu, a3, 4);
  sub_60913BB4(v8);
  *v8 = off_60BF9C1C;
  sub_60913D88((int)v8, v6, (int)a3, v7, 0);
  sub_60913A6C(v17, v8, 0);
  v9 = v17[1];
  v10 = v17[2];
  a1[346] = v17[0];
  a1[347] = v9;
  a1[348] = v10;
  sub_60913F34(a1[348], a1 + 274);
  v11 = a1 + 271;
  sub_6083E1D8(
    a1 + 271,
    a1[272],
    v15,
    FIELD_U32(dword_60CCFC8C, 24),
    a1 + 274,
    a1[347],
    v6,
    a1[434],
    dword_60C9BAF4 + 32,
    a2,
    a1[349],
    1);
  v12 = 0;
  v13 = a1 + 406;
  do
  {
    result = sub_6083E2DC(v11, v12);
    if ( result )
    {
      *v13 = (unsigned int)sub_60916740(
                             dword_60CCFC8C,
                             FIELD_U32(result, 8),
                             FIELD_U32(result, 16),
                             "MiiMaskTexture");
      result = sub_6083E2E4(v11, v12, v13);
    }
    ++v12;
    ++v13;
  }
  while ( v12 != 14 );
  return result;
}
