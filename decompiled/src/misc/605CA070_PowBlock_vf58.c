/* PowBlock_vf58
 * address: 0x605CA070   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf58(CollisionActor *a1)
{
  int v2; // r1
  int direction; // r0
  int result; // r0

  FIELD_U32(a1, 0x148) = 9;
  sub_6015907C(&FIELD_U32(a1, 0xBC), 16);
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2544] |= 0x60u;
  v2 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2536];
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2528] |= 0x60u;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2536] = v2 | 0x60;
  direction = FIELD_U32(a1 + (1) * 6064, 0x50);
  if ( direction )
    FIELD_U32(direction, 136) |= 0x1000u;
  sub_605CCAB0(a1);
  FIELD_U32(a1, 0x100) = 0;
  result = a1[1]._._.field_3C | 8;
  a1[1]._._.field_3C = result;
  return result;
}
