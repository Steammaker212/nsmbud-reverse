/* sub_6050ACE4
 * address: 0x6050ACE4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050ACE4(int a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r7
  int v8; // [sp+4h] [bp-1Ch] BYREF

  v6 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60476388(v6, a2, a3);
  v8 = 1;
  sub_60474848((int)v6, &dword_60CA7E00, &v8);
  return ((int (__fastcall *)(int, _DWORD))loc_6050AD6C)(a1, FIELD_U32(a1, 3580));
}
