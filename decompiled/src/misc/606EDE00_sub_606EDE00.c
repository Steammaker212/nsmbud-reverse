/* sub_606EDE00
 * address: 0x606EDE00   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EDE00(int a1)
{
  int result; // r0
  _BYTE v3[17]; // [sp+7h] [bp-11h] BYREF

  FIELD_F32(a1, 108) = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  v3[0] = 0;
  sub_606EDE74(a1, v3);
  sub_606EDFE4(a1, v3);
  result = FIELD_U8(dword_60C9CF0C, 1361);
  if ( (result & 1) != 0 )
    return lift_trampoline_ref_6ED7CC(a1 + 6100);
  return result;
}
