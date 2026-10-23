/* sub_600F31B0
 * address: 0x600F31B0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F31B0(int a1)
{
  if ( FIELD_U32(a1, 7180) == 5 )
    KoopalingBase__vf5A0(a1);
  FIELD_U32(a1, 80) = FIELD_F32(a1, 108) > FIELD_F32(dword_60CC6484, 116);
  FIELD_U32(a1, 7092) = 1;
  return 7092;
}
