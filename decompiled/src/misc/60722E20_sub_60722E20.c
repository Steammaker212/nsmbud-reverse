/* sub_60722E20
 * address: 0x60722E20   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60722E20(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r0
  int v8; // [sp+0h] [bp-28h] BYREF

  v5 = dword_60CBD85C + 2904;
  sub_6090B260(dword_60CBD85C + 2904, FIELD_U32(a4, 40));
  v6 = ((int (__fastcall *)(int *, int))loc_6090E438)(&v8, v5);
  return sub_6090E560(v6, FIELD_U32(a4, 40), v5);
}
