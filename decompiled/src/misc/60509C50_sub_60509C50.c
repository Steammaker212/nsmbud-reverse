/* sub_60509C50
 * address: 0x60509C50   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60509C50(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v8; // r4
  int result; // r0
  int v10; // [sp+4h] [bp-1Ch] BYREF

  v8 = (_DWORD *)(a1 + 36);
  sub_604734E4((_DWORD *)(a1 + 36), 0);
  sub_60476388(v8, a2, a3);
  v10 = 1;
  result = sub_60474848((int)v8, &dword_60CA7D60, &v10);
  FIELD_U32(a1, 3576) = a4;
  return result;
}
