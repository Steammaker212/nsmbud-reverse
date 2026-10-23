/* sub_6013752C
 * address: 0x6013752C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013752C(int a1)
{
  bool v1; // zf

  v1 = (FIELD_U32(a1, 20) & 1) == 0;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 20) & 1;
  FIELD_U32(a1, 100) = -1092616192;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U64(a1, 120) = 0xBFC0000040200000LL;
  if ( !v1 )
    FIELD_U32(a1, 120) = -1071644672;
  FIELD_U32(a1, 6208) = 1;
  return 1;
}
