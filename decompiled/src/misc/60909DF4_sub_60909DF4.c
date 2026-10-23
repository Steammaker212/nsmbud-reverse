/* sub_60909DF4
 * address: 0x60909DF4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60909DF4(int a1)
{
  sub_60908F70((_DWORD *)a1, 28, -1, -1, 15);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 308));
  *(_DWORD *)a1 = off_60C5CFE0;
  FIELD_U32(a1, 308) = off_60C5D004;
  FIELD_U32(a1, 324) = 0;
  FIELD_U8(a1, 328) = 1;
  FIELD_U32(a1, 332) = 0;
  FIELD_U32(a1, 336) = 0;
  return a1;
}
