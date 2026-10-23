/* sub_60772748
 * address: 0x60772748   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60772748(int a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r7
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int result; // r0
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r2
  _DWORD *v15; // r0

  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1);
  if ( sub_6075EE0C(a1) )
  {
    v5 = 2;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) )
      v5 = 3;
  }
  else if ( sub_6075EDF8(a1) )
  {
    v5 = 4;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) )
      v5 = 5;
  }
  if ( (FIELD_U8(a1, 1230) & 8) != 0 )
    goto LABEL_12;
  v6 = FIELD_U32(a1, 6900);
  if ( (v6 & 0x8000000) != 0 )
  {
    v15 = (_DWORD *)((char *)&unk_60B0BE84 + 96 * v5 + 16 * v4);
    v8 = v15[8];
    v9 = v15[9];
    v10 = v15[10];
    result = v15[11];
    goto LABEL_14;
  }
  if ( (v6 & 0x14000000) == 0 )
  {
LABEL_12:
    v12 = (_DWORD *)((char *)&unk_60B0BE84 + 96 * v5 + 16 * v4);
    *a2 = *v12;
    v13 = v12[1];
    v14 = v12[2];
    result = v12[3];
    a2[3] = result;
    a2[1] = v13;
    a2[2] = v14;
    return result;
  }
  v7 = (_DWORD *)((char *)&unk_60B0BE84 + 96 * v5 + 16 * v4);
  v8 = v7[16];
  v9 = v7[17];
  v10 = v7[18];
  result = v7[19];
LABEL_14:
  *a2 = v8;
  a2[1] = v9;
  a2[2] = v10;
  a2[3] = result;
  return result;
}
