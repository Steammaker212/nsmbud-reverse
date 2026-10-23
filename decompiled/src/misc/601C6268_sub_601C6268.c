/* sub_601C6268
 * address: 0x601C6268   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601C6268(int a1, float *a2)
{
  float v3; // s4
  float v4; // s6
  signed int result; // r0
  int v6; // r1

  v3 = a2[22] - FIELD_F32(a1, 88);
  v4 = a2[20] - FIELD_F32(a1, 80);
  result = -sub_6000F7B8(a2[21] - FIELD_F32(a1, 84), sqrtf((float)(v3 * v3) + (float)(v4 * v4)));
  v6 = 357913941;
  if ( result <= 357913941 )
    v6 = result;
  if ( result < -536870912 )
    v6 = -536870912;
  FIELD_U32(a1, 428) = v6;
  return result;
}
