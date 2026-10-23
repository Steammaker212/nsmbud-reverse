/* sub_6054E000
 * address: 0x6054E000   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054E000(_DWORD *a1)
{
  a1[949] = 0;
  a1[950] = FIELD_U32(dword_60C9A1E8, 231392);
  a1[936] = 0;
  sub_6054F09C(a1);
  sub_60407E18(dword_60C9A1E8, (int)a1);
  return sub_60473DE4(a1 + 10, 2u, &dword_60CACBDC, 0);
}
