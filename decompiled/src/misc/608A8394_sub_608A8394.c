/* sub_608A8394
 * address: 0x608A8394   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A8394(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r7
  int v7; // r0
  bool v8; // zf

  v4 = a1 + 660;
  sub_608B2128(a1 + 660, a2);
  sub_608A9994(a1, v4);
  v5 = sub_608B15C8(v4);
  sub_608B21A4(v4, a2 + v5);
  v6 = sub_608B1590(v4);
  v7 = sub_608B1518(v4);
  v8 = v6 == -1;
  if ( v6 != -1 )
    v8 = v7 == -1;
  if ( !v8 )
    sub_608B2198(v4, a2 + v6);
  FIELD_U32(a1, 656) = a2;
  return 1;
}
