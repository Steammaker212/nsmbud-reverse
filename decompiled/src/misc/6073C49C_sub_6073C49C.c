/* sub_6073C49C
 * address: 0x6073C49C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6073C49C(int a1)
{
  signed int v2; // [sp+0h] [bp-10h] BYREF
  int v3; // [sp+4h] [bp-Ch] BYREF

  if ( (FIELD_U8(a1, 6804) & 1) != 0 )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 6268) |= 1u;
  }
  v3 = -1431655765;
  v2 = -134217728;
  return sub_6083246C((int *)(a1 + 160), &v3, &v2);
}
