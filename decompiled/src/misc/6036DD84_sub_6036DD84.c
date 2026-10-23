/* sub_6036DD84
 * address: 0x6036DD84   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036DD84(_DWORD *a1)
{
  int v2; // r0
  _BOOL4 v3; // r6
  int result; // r0
  int v5; // r1
  int speed; // [sp+4h] [bp-24h] BYREF
  int target; // [sp+8h] [bp-20h] BYREF
  int val[7]; // [sp+Ch] [bp-1Ch] BYREF

  pol_block_hatena_ref(a1);
  v2 = a1[39];
  target = 0;
  speed = 0x8000000;
  val[0] = v2;
  v3 = moveValueTo(val, &target, &speed);
  a1[39] = val[0];
  val[0] = a1[41];
  speed = 0x8000000;
  target = 0;
  result = moveValueTo(val, &target, &speed);
  a1[41] = val[0];
  v5 = 1;
  if ( v3 )
    v5 = 2;
  if ( !result )
    v5 = v3;
  if ( v5 == 2 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C95F60);
  return result;
}
