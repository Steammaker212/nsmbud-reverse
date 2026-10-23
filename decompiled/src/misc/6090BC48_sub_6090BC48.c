/* sub_6090BC48
 * address: 0x6090BC48   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090BC48(unsigned __int8 *a1, int a2)
{
  int v4; // r1
  _BYTE v6[20]; // [sp+4h] [bp-14h] BYREF

  dword_60CC7738(v6, a1[89]);
  dword_60CC773C(v6, 1);
  dword_60CC7740(v6, a1[95]);
  v4 = a1[97];
  if ( a1[97] )
    v4 = 4;
  dword_60CC7744(v6, v4);
  return dword_60CC7808(FIELD_U32(a2, 192), v6);
}
