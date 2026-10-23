/* sub_601C6184
 * address: 0x601C6184   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C6184(int a1, int a2, float a3)
{
  return SE_PLY_ref(dword_60C8B13C, a2, FIELD_U32(a1, 264), FIELD_U32(a1, 268), a3);
}
