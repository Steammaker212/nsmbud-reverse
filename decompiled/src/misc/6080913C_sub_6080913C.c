/* sub_6080913C
 * address: 0x6080913C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080913C(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  int v9; // r7

  v8 = a1 + 76;
  sub_608AC1C0(a1 + 76);
  v9 = sub_608098AC(a1, v8, a2, a4);
  if ( a3 )
  {
    sub_608AC1C0(a1 + 72);
    sub_608098AC(a1, a1 + 72, a3, a4);
  }
  return v9;
}
