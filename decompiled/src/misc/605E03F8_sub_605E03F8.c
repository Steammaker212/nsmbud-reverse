/* sub_605E03F8
 * address: 0x605E03F8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E03F8(int *a1)
{
  int *v2; // r1
  int *v3; // r3
  int v4; // r2
  int v5; // r0

  v2 = a1 + 1566;
  v3 = a1 + 1565;
  v4 = a1[1565] | 0x1000000;
  v5 = a1[1566] | 0x2001C;
  *v3 = v4;
  *v2 = v5;
  a1[19] |= 4u;
  a1[1695] = sub_605E93C8(dword_60CB1BE4, a1);
  sub_605D79D0((int)a1, (StateBase *)&unk_60CB1788, 0);
  sub_605DEEC4(a1);
  return (*(int (__fastcall **)(int *))(*a1 + 468))(a1);
}
