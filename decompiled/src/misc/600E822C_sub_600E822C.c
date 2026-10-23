/* sub_600E822C
 * address: 0x600E822C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E822C(int a1)
{
  unsigned int v2; // r0
  float *v3; // r0
  signed int result; // r0
  int v5; // r2

  v2 = FIELD_U32(a1, 7124);
  if ( v2 >= 4 )
    v2 = 0;
  v3 = *(float **)(PlayerMgr_instance + 4 * v2 + 32);
  result = sub_6000F7B8(
             (float)(v3[28] + v3[144]) - FIELD_F32(a1, 7160),
             fabsf((float)(v3[27] + v3[143]) - FIELD_F32(a1, 7156)));
  v5 = -119304647;
  FIELD_U32(a1, 7172) = result;
  if ( result < -119304647 || (v5 = 417566264, result > 417566264) )
  {
    FIELD_U32(a1, 7172) = v5;
    return a1 + 7172;
  }
  return result;
}
