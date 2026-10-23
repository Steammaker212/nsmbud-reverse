/* Subject_HIOSubjectData_NX_exbin_ref
 * address: 0x603FD808   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Subject_HIOSubjectData_NX_exbin_ref(_DWORD *a1)
{
  unsigned int *v2; // r7
  const void *v3; // r5
  unsigned int v4; // r6
  size_t v5; // r7
  _DWORD v7[2]; // [sp+0h] [bp-50h] BYREF
  _DWORD v8[8]; // [sp+8h] [bp-48h] BYREF
  char v9; // [sp+28h] [bp-28h]
  char v10; // [sp+29h] [bp-27h]
  unsigned int v11; // [sp+2Ch] [bp-24h]
  int v12; // [sp+30h] [bp-20h]
  char v13; // [sp+34h] [bp-1Ch]

  *a1 = 0;
  a1[1613] = 0;
  v2 = a1 + 1613;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = &byte_60B3BA34;
  memset(&v8[2], 0, 24);
  v7[0] = &sead__SafeStringBase__vtable;
  v9 = 1;
  v10 = 1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v7[1] = "Subject/HIOSubjectData_NX.exbin";
  sead__SafeStringBase__operator_assign((int)v8, (int)v7);
  v3 = (const void *)sub_608E6154(FIELD_U32(dword_60CCEBD0, 32), v8);
  *a1 = v3;
  if ( v3 )
  {
    v4 = v11;
    *v2 = v11;
    v5 = 6448;
    memset(a1 + 1, 0, 0x1930u);
    if ( v4 < 0x1930 )
      v5 = v4;
    qmemcpy(a1 + 1, v3, v5);
  }
  else
  {
    memset(a1 + 1, 0, 0x1930u);
  }
  return a1;
}
