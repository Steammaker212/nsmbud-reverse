/* sub_60541D74
 * address: 0x60541D74   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60541D74(int a1)
{
  bool v2; // zf

  v2 = (FIELD_U32(a1, 33884) & 0x60C0) == 0;
  FIELD_U32(a1, 34704) = FIELD_U32(a1, 33884) & 0x60C0;
  FIELD_U32(a1, 34708) = 0;
  if ( v2 )
    FIELD_U32(a1, 34708) = FIELD_U32(a1, 34288) & 0x60C0;
  StateMgr__execute((StateMgr *)(a1 + 28108));
  sub_6050229C(a1 + 31800);
  return sub_60473B58((_DWORD *)(a1 + 28128), 0xEu, 0);
}
