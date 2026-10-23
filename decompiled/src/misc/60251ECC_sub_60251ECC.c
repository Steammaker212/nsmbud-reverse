/* sub_60251ECC
 * address: 0x60251ECC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60251ECC(int a1)
{
  int v1; // r1

  v1 = dword_60AF1F68[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 120) = v1;
  FIELD_U32(a1, 132) = v1;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_F32(a1, 100) = -0.1875 * 0.5;
  FIELD_U16(a1, 6772) = 256;
  return -0.1875 * 0.5;
}
