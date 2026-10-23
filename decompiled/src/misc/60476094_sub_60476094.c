/* sub_60476094
 * address: 0x60476094   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60476094(int a1, void *a2)
{
  _DWORD *v3; // r5
  int v4; // r4

  v3 = (_DWORD *)operator_new_8DE25C(0x84u, a2, 4);
  memset(v3, 0, 132);
  sub_6098B61C(v3);
  *v3 = off_60BFCAF8;
  v3[4] = &off_60BFCC10;
  FIELD_U32(a1, 3524) = v3;
  v4 = dword_60CD0C84;
  off_60C5CB30[3]();
  return sub_6098C20C(v3, v4, off_60C5CB34);
}
