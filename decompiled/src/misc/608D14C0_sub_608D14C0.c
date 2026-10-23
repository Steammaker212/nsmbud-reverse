/* sub_608D14C0
 * address: 0x608D14C0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D14C0(int a1)
{
  sub_608D0B08(a1);
  *(_DWORD *)a1 = off_60C5B6CC;
  FIELD_U32(a1, 36) = a1 + 36;
  FIELD_U32(a1, 40) = a1 + 36;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U8(a1, 82) = 0;
  FIELD_U16(a1, 80) = 0;
  FIELD_U32(a1, 64) = 1065353216;
  FIELD_U32(a1, 68) = 1065353216;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  nn__os__InitializeMutex(a1 + 104, 1, 0);
  nn__os__InitializeMutex(a1 + 124, 1, 0);
  FIELD_U16(a1, 144) = 0;
  FIELD_U8(a1, 146) = 0;
  return a1;
}
