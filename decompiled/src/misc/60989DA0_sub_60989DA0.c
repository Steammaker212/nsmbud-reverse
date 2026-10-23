/* sub_60989DA0
 * address: 0x60989DA0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989DA0(int a1)
{
  FIELD_U32(a1, 44) = 0;
  FIELD_F32(a1, 16) = (float)(unsigned int)sub_608502E4(a1);
  FIELD_U8(a1, 51) &= 0xF0u;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 16))(a1, 1);
}
