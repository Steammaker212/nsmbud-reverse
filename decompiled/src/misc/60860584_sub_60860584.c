/* sub_60860584
 * address: 0x60860584   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60860584(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  void *v9; // r6
  const void *v10; // r7
  int v11; // r0
  void *v12; // r6
  const void *v13; // r7

  v4 = sub_608A7E38(a2);
  sub_608A7E84(a1, v4);
  v5 = sub_608A7E40(a2);
  sub_608A7E8C(a1, v5);
  v6 = sub_608A7E48(a2);
  sub_608A7E94(a1, v6);
  v7 = sub_608A7E60(a2);
  sub_608A7E9C(a1, v7);
  v8 = sub_608A7E38(a2);
  v9 = (void *)sub_60855BC8(v8);
  v10 = (const void *)sub_608A7E0C(a2);
  qmemcpy(v9, v10, sub_608A7E38(a2));
  sub_608A7E74(a1, v9);
  v11 = sub_608A7E40(a2);
  v12 = (void *)sub_60855BC8(v11);
  v13 = (const void *)sub_608A7E04(a2);
  qmemcpy(v12, v13, sub_608A7E40(a2));
  return sub_608A7E7C(a1, v12);
}
