/* sub_60604CD0
 * address: 0x60604CD0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60604CD0(int a1)
{
  char v1; // r1

  FIELD_U16(a1, 6120) = 0;
  FIELD_U32(a1, 6128) = 0;
  FIELD_U8(a1, 6136) = FIELD_U8(a1, 539) - 1;
  v1 = FIELD_U8(a1, 540) - 1;
  FIELD_U8(a1, 6134) = v1;
  FIELD_U8(a1, 6135) = v1;
  FIELD_U16(a1, 6132) = 10 * FIELD_U8(a1, 23);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2970);
  return 1;
}
