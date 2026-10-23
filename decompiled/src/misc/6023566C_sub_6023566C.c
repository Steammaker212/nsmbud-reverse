/* sub_6023566C
 * address: 0x6023566C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023566C(int result, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  _BYTE v5[48]; // [sp+0h] [bp-30h] BYREF

  v3 = result;
  if ( a3 )
  {
    v4 = ((int (__fastcall *)(_BYTE *, int, int, _DWORD))sub_609051E4)(v5, a2, a3, 0);
    sub_609052F4(v4, 1);
    sub_602356B4(v3, v5);
    return sub_60905250(v5);
  }
  return result;
}
