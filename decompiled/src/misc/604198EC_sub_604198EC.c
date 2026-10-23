/* sub_604198EC
 * address: 0x604198EC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604198EC(_DWORD *a1, int a2, int a3, nn__util__BinaryFileHeader *a4, void *a5)
{
  int v7; // r9
  int v8; // r0
  int v9; // r11
  int v10; // r6
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r2
  int result; // r0
  int v15; // r0
  _DWORD v16[12]; // [sp+18h] [bp-30h] BYREF

  a1[193] = a2;
  a1[194] = a3;
  v7 = sub_6083E088();
  v8 = sub_6083E080();
  a1[116] = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)a5 + 24))(a5, v7, v8);
  v9 = sub_6083E094(FIELD_U32(dword_60CCFC8C, 24), a1[193], a1[194]);
  v10 = sub_6083E090(FIELD_U32(dword_60CCFC8C, 24), a1[193], a1[194]);
  v11 = (_DWORD *)operator_new_8DE25C(0x1Cu, a5, 4);
  sub_60913BB4(v11);
  *v11 = off_60BF9C1C;
  sub_60913D88((int)v11, v9, (int)a5, v10, 0);
  sub_60913A6C(v16, v11, 0);
  v12 = v16[1];
  v13 = v16[2];
  a1[190] = v16[0];
  a1[191] = v12;
  a1[192] = v13;
  sub_60913F34(a1[192], a1 + 118);
  sub_6083E098(a1 + 115, a1[116], v7, FIELD_U32(dword_60CCFC8C, 24), a1 + 118, a1[191], v9, a1[193], a1[194]);
  result = sub_60913B04(a1 + 190, v9);
  if ( a4 )
  {
    v15 = sub_6086EDAC(a4);
    a1[195] = v15;
    sub_6086EED0(v15, FIELD_U32(dword_60CCFC8C, 24));
    result = *(_DWORD *)(a1[195] + 40);
    a1[196] = result;
  }
  return result;
}
