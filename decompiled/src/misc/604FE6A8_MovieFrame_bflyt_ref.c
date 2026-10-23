/* MovieFrame_bflyt_ref
 * address: 0x604FE6A8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovieFrame_bflyt_ref(int a1)
{
  _DWORD *v1; // r4
  int v3[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v1);
  v3[0] = (int)&sead__SafeStringBase__vtable;
  v3[1] = (int)"MovieFrame.bflyt";
  message_ref(v1, v3, 0, 0, 0);
  v3[0] = 0;
  return sub_60476030((int)v1, 0, v3);
}
