/* PowBlock_vf62
 * address: 0x606BDF54   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf62(int result)
{
  int v1; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  if ( (FIELD_U8(result, 6124) & 0x20) != 0 )
  {
    FIELD_U32(result, 160) += 100663296 * byte_60B057DC[FIELD_U32(result, 80)];
  }
  else
  {
    target = 0;
    v1 = 0x2000000;
    return moveValueTo((int *)(result + 160), &target, &v1);
  }
  return result;
}
