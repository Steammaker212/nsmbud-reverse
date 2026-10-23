/* MsgStdBn_ref
 * address: 0x60911544   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall MsgStdBn_ref(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)sub_60913424(36);
  *v2 = a1;
  sub_60913268(v2, "MsgStdBn", 3);
  v2[4] = sub_60913368(v2, "LBL1");
  v2[5] = sub_60913368(v2, "TXT2");
  v2[6] = sub_60913368(v2, "ATR1");
  v2[7] = sub_60913368(v2, "ATO1");
  v2[8] = sub_60913368(v2, "TSY1");
  return v2;
}
