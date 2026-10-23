/* sub_6074F074
 * address: 0x6074F074   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074F074(int result, int a2, int a3)
{
  *(_DWORD *)result = a2;
  FIELD_U32(result, 4) = a3;
  FIELD_U32(result, 36) = dword_60B0A600[3 * dword_60B0A6E0[a2] + dword_60B0A6E0[a3]];
  FIELD_U32(result, 12) = 30;
  FIELD_U32(result, 32) = 1;
  FIELD_U8(result, 40) = 0;
  return result;
}
