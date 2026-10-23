/* sub_60985F64
 * address: 0x60985F64   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60985F64(int a1, int *a2, int a3)
{
  int result; // r0
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int *v10; // r7
  int v11; // t1
  float v12; // [sp+4h] [bp-1Ch] BYREF

  result = (*(int (__fastcall **)(int, float *))(*(_DWORD *)a1 + 184))(a1, &v12);
  if ( result == 1 )
  {
    v7 = sub_60855BC8(88);
    v8 = v7;
    if ( v7 )
      v7 = sub_60993EB0(v7);
    else
      v8 = 0;
    v9 = sub_609908C0(v7);
    sub_60993F54(v8, v9, a1, a3);
    sub_60994728(v8, v12);
    v11 = FIELD_U32(v8, 4);
    v10 = (int *)(v8 + 4);
    *v10 = *a2;
    FIELD_U32(v11, 4) = a2;
    result = *a2;
    *(_DWORD *)(*a2 + 4) = v10;
    *a2 = v11;
  }
  return result;
}
