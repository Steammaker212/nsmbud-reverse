/* RedCoin_vf54
 * address: 0x606C940C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RedCoin_vf54(int a1)
{
  int result; // r0

  FIELD_U16(a1, 7096) = 257;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = sub_606C8C0C(a1);
    FIELD_U32(a1, 7100) = result;
  }
  return result;
}
