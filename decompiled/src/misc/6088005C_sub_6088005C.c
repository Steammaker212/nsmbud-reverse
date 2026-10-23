/* sub_6088005C
 * address: 0x6088005C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088005C(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r0

  v3 = (_DWORD *)(a1 + 16 * a2);
  v4 = FIELD_U32(a1, 1288);
  v3[325] = v4;
  v3[326] = a3;
  v3[323] = sub_6089725C(v4);
  return 1;
}
