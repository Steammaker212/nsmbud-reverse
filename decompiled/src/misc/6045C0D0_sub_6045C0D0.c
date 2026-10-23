/* sub_6045C0D0
 * address: 0x6045C0D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045C0D0(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r1

  if ( dword_60CC62E4 && sub_607F6ABC(dword_60CC62E4) == 1 )
  {
    v6 = a1;
    v7 = 0;
  }
  else
  {
    v6 = a1;
    v7 = 1;
  }
  sub_6090A0B8(v6, v7);
  return sub_60909B48(a1, a2, a3);
}
