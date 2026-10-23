/* sub_60944C74
 * address: 0x60944C74   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60944C74(int a1, int a2, int a3)
{
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1) == a3 )
  {
    FIELD_U8(a1, 20) = FIELD_U32(a1, 28);
    FIELD_U8(a1, 23) = FIELD_U32(a1, 24);
  }
  FIELD_U8(a1, 22) = 30;
  FIELD_U32(a1, 16) = a1 + 32;
  return a1 + 32;
}
