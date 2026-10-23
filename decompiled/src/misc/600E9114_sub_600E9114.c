/* sub_600E9114
 * address: 0x600E9114   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600E9114(int a1)
{
  unsigned int v2; // r0
  float v3; // s0
  float v4; // s2
  int v5; // r0
  int v7; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 7124);
  if ( v2 >= 4 )
    v2 = 0;
  v3 = *(float *)(*(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32) + 108) - FIELD_F32(a1, 108);
  if ( v3 >= 0.0 )
  {
    if ( v3 <= 150.0 )
      v5 = sub_608FBB48(v3 / 150.0);
    else
      v5 = 0x40000000 - sub_608FBB48(150.0 / v3);
  }
  else
  {
    v4 = -v3;
    if ( v3 < -150.0 )
      v5 = sub_608FBB48(150.0 / v4) - 0x40000000;
    else
      v5 = -sub_608FBB48(v4 / 150.0);
  }
  target = v5;
  v7 = 50331648;
  return moveValueTo((int *)(a1 + 160), &target, &v7);
}
