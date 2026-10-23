/* SE_PLY_RIDE_CLOUD_ref
 * address: 0x60775188   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_RIDE_CLOUD_ref(int a1)
{
  sub_60409DC8(dword_60C9A1F0);
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_RIDE_CLOUD", 0, 0);
  FIELD_U32(a1, 1216) |= 0x1000000u;
  FIELD_U32(a1, 1228) |= 0x4000u;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = 1036831949;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  return PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 7);
}
