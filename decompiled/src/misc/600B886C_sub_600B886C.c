/* sub_600B886C
 * address: 0x600B886C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B886C(int a1)
{
  int result; // r0

  FIELD_U32(dword_60C99D88, 32) = 1;
  sub_6077A268(dword_60CBFA90);
  FIELD_U8(dword_60C9CF0C, 1393) = 1;
  FIELD_U32(a1, 6116) = 20;
  FIELD_U32(a1, 6128) = 1;
  FIELD_U8(a1, 6136) = 0;
  result = PlayerMgr_instance;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  return result;
}
