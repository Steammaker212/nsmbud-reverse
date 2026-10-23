/* sub_6008E684
 * address: 0x6008E684   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008E684(int a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  target[0] = 0;
  v3 = 0x4000000;
  moveValueTo((int *)(a1 + 160), target, &v3);
  target[0] = 0;
  v3 = 0x4000000;
  moveValueTo((int *)(a1 + 164), target, &v3);
  FIELD_U32(a1, 156) += 429496729;
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82120);
  return result;
}
