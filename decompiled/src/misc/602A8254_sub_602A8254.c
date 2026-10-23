/* sub_602A8254
 * address: 0x602A8254   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8254(int a1)
{
  _DWORD v2[5]; // [sp+0h] [bp-28h] BYREF
  char v3; // [sp+14h] [bp-14h]
  int v4; // [sp+18h] [bp-10h]
  char v5; // [sp+1Ch] [bp-Ch]

  memset(v2, 0, 16);
  v2[4] = &stru_60C907C4;
  v3 = -1;
  v4 = 0;
  v5 = -1;
  return sub_602A852C(a1 + 6104, v2);
}
