/* sub_6073C8A8
 * address: 0x6073C8A8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073C8A8(int a1)
{
  int v2; // r0
  int result; // r0

  FIELD_U8(a1, 8076) = 0;
  if ( (FIELD_U8(a1, 6804) & 1) == 0 )
  {
    v2 = sub_605DBDAC(a1);
    if ( v2 )
      FIELD_U32(a1, 124) = FIELD_U32(v2, 124);
  }
  FIELD_U32(a1, 6260) |= 0x10000000u;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 8008) = 0;
  return result;
}
