/* sub_6071E5AC
 * address: 0x6071E5AC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071E5AC(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[120]; // [sp+0h] [bp-78h] BYREF

  v4 = sub_6090B350(v6);
  *(_DWORD *)&v6[28] = 15;
  sub_6090B4B0(v4, FIELD_U32(a2, 40));
  return sub_60959C28(a1 + 8640, FIELD_U32(a1, 4760), 0);
}
