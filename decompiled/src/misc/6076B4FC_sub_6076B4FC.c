/* sub_6076B4FC
 * address: 0x6076B4FC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076B4FC(int a1)
{
  int result; // r0

  FIELD_U32(a1, 9572) = 0;
  FIELD_U32(a1, 9576) = 0;
  FIELD_U32(a1, 1224) &= ~0x2000000u;
  FIELD_U32(a1, 1212) &= ~0x20u;
  FIELD_U32(a1, 1204) &= ~0x200u;
  FIELD_U32(a1, 1228) &= ~0x1000000u;
  FIELD_U32(a1, 1220) &= ~0x40u;
  result = FIELD_U8(a1, 9764);
  if ( result )
    return sub_607FCAD0(dword_60CC6484);
  return result;
}
