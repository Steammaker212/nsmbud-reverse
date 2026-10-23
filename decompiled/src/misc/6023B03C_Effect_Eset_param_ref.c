/* Effect_Eset_param_ref
 * address: 0x6023B03C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall Effect_Eset_param_ref(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v6[4]; // [sp+8h] [bp-40h] BYREF
  int v7; // [sp+18h] [bp-30h]
  int v8; // [sp+1Ch] [bp-2Ch]
  int v9; // [sp+20h] [bp-28h]
  int v10; // [sp+24h] [bp-24h]
  char v11; // [sp+28h] [bp-20h]
  char v12; // [sp+29h] [bp-1Fh]
  unsigned int v13; // [sp+2Ch] [bp-1Ch]
  int v14; // [sp+30h] [bp-18h]
  char v15; // [sp+34h] [bp-14h]

  v6[0] = &sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
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
  v5[1] = "Effect/Eset.param";
  sead__SafeStringBase__operator_assign((int)v6, (int)v5);
  v7 = a2;
  *a1 = sub_608E6154(FIELD_U32(dword_60CCEBD0, 28), v6);
  result = v13 / 0x14;
  a1[1] = v13 / 0x14;
  return result;
}
