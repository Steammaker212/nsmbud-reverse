/* sub_6054DF98
 * address: 0x6054DF98   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054DF98(int a1)
{
  sub_6047459C(a1 + 40, 1u);
  SE_PLY_YOSHI_EAT_NUT_ref(a1);
  ++FIELD_U32(a1, 3796);
  if ( dword_60CC6484 )
    FIELD_F32(a1, 3788) = FIELD_F32(dword_60CC6484, 124) + -20.0;
  return sub_6054EDD8(a1);
}
