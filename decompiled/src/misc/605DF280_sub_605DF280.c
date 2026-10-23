/* sub_605DF280
 * address: 0x605DF280   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DF280(int *a1)
{
  int *v1; // r4
  _DWORD *v2; // r3
  int *v3; // r1
  int v4; // r0
  int v5; // t1
  int result; // r0

  v1 = a1;
  v2 = a1 + 1566;
  v3 = a1 + 1567;
  v4 = a1[1567] | 3;
  *v2 |= 1u;
  v5 = v1[1565];
  v1 += 1565;
  *v1 = v5 | 0x10000000;
  *v3 = v4;
  sub_605EB5F8(v1 - 49);
  sub_605EB7B0(v1 - 49, 1.0);
  *((float *)v1 - 1538) = *((float *)v1 - 1538) + (float)((float)byte_60B0594C[*(v1 - 1545)] * 8.0);
  *(v1 - 1526) = 0;
  *(v1 - 1525) = 0;
  *(v1 - 1524) = 0;
  result = CollisionMgr_vf14((int)(v1 - 1403));
  v1[136] = 0;
  v1[438] = 0;
  return result;
}
