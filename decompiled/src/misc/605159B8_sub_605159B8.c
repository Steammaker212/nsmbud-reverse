/* sub_605159B8
 * address: 0x605159B8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605159B8(int a1)
{
  int *v2; // r5
  int result; // r0

  v2 = (int *)(a1 + 29968);
  sub_60515024(a1, FIELD_U32(a1, 29968));
  sub_60515024(a1 + 14984, *v2);
  if ( dword_60CC6D8C )
    result = FIELD_U8(dword_60CC6D8C, 17);
  else
    result = 0;
  FIELD_U8(a1, 29972) = result;
  return result;
}
