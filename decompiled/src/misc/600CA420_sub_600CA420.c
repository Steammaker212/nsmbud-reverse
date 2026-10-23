/* sub_600CA420
 * address: 0x600CA420   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CA420(int a1)
{
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  sub_6077A268(dword_60CBFA90);
  FIELD_U32(a1, 6216) = 0;
  return STRM_BGM_ref_6(dword_60CC6B68, 3);
}
