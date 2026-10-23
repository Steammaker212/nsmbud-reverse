/* sub_60195D60
 * address: 0x60195D60   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60195D60(int a1)
{
  if ( sub_601E4FB4(dword_60C8B13C, FIELD_U32(a1, 472)) == 1 && sub_60190968(dword_60C8996C) )
    FIELD_U32(a1, 472) = sub_601E4EA4(dword_60C8B13C, 101, 0, a1 + 80, 1);
  return sub_601981EC(a1, 0);
}
