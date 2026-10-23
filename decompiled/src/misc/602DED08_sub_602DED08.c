/* sub_602DED08
 * address: 0x602DED08   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DED08(_DWORD *a1)
{
  a1[33] = a1[30];
  a1[34] = -1065353216;
  a1[35] = 0;
  a1[25] = -1103101952;
  a1[24] = -1065353216;
  a1[26] = 1022739087;
  a1[1538] = 0;
  return CollisionMgr_vf14((int)(a1 + 162));
}
