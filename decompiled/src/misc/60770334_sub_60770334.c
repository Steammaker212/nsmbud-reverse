/* sub_60770334
 * address: 0x60770334   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60770334(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r0

  FIELD_U32(a1, 1208) |= 0x100u;
  FIELD_U32(a1, 1220) |= 0x40000u;
  sub_6078667C(a1 + 688, 2);
  v2 = FIELD_F32(a1, 88);
  v3 = -0.5;
  FIELD_F32(a1, 9988) = v2 * 0.7;
  if ( v2 >= -0.5 )
  {
    v3 = v2;
    if ( v2 > 0.5 )
      v3 = 0.5;
  }
  FIELD_F32(a1, 88) = v3;
  v4 = FIELD_U32(a1, 648);
  if ( *(_DWORD *)(FIELD_U32(v4, 4) + 28) != 20 )
    return PlayerBase_dispatchVirtual3(v4, 7);
  FIELD_U32(a1, 9940) = 1;
  return 9940;
}
