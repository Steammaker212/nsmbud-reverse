/* sub_60591480
 * address: 0x60591480   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60591480(int a1)
{
  unsigned int v2; // r1
  int v3; // r0
  float v4; // s0
  int v5; // r0
  float result; // s0

  v2 = FIELD_U32(a1, 6108);
  if ( v2 )
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2) + 108;
  else
    v3 = a1 + 108;
  v4 = *(float *)v3;
  v5 = FIELD_U32(v3, 4);
  result = v4 + FIELD_F32(a1, 6112);
  FIELD_F32(a1, 108) = result;
  FIELD_U32(a1, 112) = v5;
  return result;
}
