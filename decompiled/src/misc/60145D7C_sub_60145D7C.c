/* sub_60145D7C
 * address: 0x60145D7C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60145D7C(_DWORD *a1)
{
  int *v2; // r1
  float result; // s0

  a1[20] = *(_DWORD *)(ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1603]) + 80);
  a1[30] = 0;
  a1[31] = 1065353216;
  a1[32] = 1065353216;
  a1[33] = 0;
  a1[1569] = 2097184;
  v2 = dword_60145DF4;
  if ( (a1[5] & 0x10000000) != 0 )
    v2 = &dword_60145DF4[1];
  result = *(float *)v2;
  a1[29] = *v2;
  return result;
}
