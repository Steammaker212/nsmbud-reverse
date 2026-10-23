/* ExcelOR_MiiTexAnmData_NX_exbin_ref
 * address: 0x60782948   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ExcelOR_MiiTexAnmData_NX_exbin_ref(int a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  _DWORD v5[2]; // [sp+0h] [bp-50h] BYREF
  _DWORD v6[4]; // [sp+8h] [bp-48h] BYREF
  int v7; // [sp+18h] [bp-38h]
  int v8; // [sp+1Ch] [bp-34h]
  int v9; // [sp+20h] [bp-30h]
  int v10; // [sp+24h] [bp-2Ch]
  char v11; // [sp+28h] [bp-28h]
  char v12; // [sp+29h] [bp-27h]
  int v13; // [sp+2Ch] [bp-24h]
  int v14; // [sp+30h] [bp-20h]
  char v15; // [sp+34h] [bp-1Ch]

  v2 = (_DWORD *)dword_60CC2C60;
  if ( !dword_60CC2C60 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x14u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60C249D8;
    dword_60CC2C5C = (int)v2;
    v2[4] = 0;
    v3 = FIELD_U32(dword_60CCEBD0, 32);
    v5[0] = &sead__SafeStringBase__vtable;
    v6[0] = &sead__SafeStringBase__vtable;
    v5[1] = "ExcelOR/MiiTexAnmData_NX.exbin";
    v6[1] = &byte_60B3BA34;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6[3] = 0;
    v6[2] = 0;
    v11 = 1;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sead__SafeStringBase__operator_assign((int)v6, (int)v5);
    v7 = 0;
    v2[4] = sub_608E6154(v3, v6);
    dword_60CC2C60 = (int)v2;
  }
  return v2;
}
