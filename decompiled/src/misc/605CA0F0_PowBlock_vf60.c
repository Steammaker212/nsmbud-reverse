/* PowBlock_vf60
 * address: 0x605CA0F0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall PowBlock_vf60(int a1)
{
  unsigned int *v2; // r5
  unsigned int v3; // r1
  unsigned int v4; // r0
  unsigned int result; // r0

  v2 = (unsigned int *)(a1 + 6124);
  FIELD_U32(a1, 6124) &= 0xFFFFFFCF;
  FIELD_U32(a1, 328) = 0;
  sub_6015913C((ActiveCollider *)(a1 + 188), 16);
  *(v2 - 733) &= 0xFFFFFF9F;
  v3 = *(v2 - 735) & 0xFFFFFF9F;
  *(v2 - 737) &= 0xFFFFFF9F;
  *(v2 - 735) = v3;
  v4 = v2[5];
  if ( v4 )
    FIELD_U32(v4, 136) &= ~0x1000u;
  sub_605CCAD4(a1);
  result = *v2 & 0xFFFFFFF7;
  *v2 = result;
  return result;
}
