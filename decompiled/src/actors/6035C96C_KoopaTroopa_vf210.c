/* KoopaTroopa_vf210
 * address: 0x6035C96C   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall KoopaTroopa_vf210(int a1)
{
  int v2; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  target = -178956970 * byte_60AFE3F4[FIELD_U32(a1, 80)];
  v2 = 35791394;
  return moveValueTo((int *)(a1 + 6864), &target, &v2);
}
