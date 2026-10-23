/* sub_606ADFD4
 * address: 0x606ADFD4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606ADFD4(int a1)
{
  int v2; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_606AE084(a1);
  v2 = FIELD_U32(dword_60C99DD4, 1052);
  FIELD_F32(a1, 6324) = (float)(*(float *)((char *)sinLutTable + ((v2 << 8) & 0xF00))
                                + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 8) & 0xF00)) * 0.0)
                                        * 0.000000059605))
                        * 0.5;
  FIELD_F32(a1, 6328) = (float)(*(float *)((char *)sinLutTable + ((v2 << 9) & 0xE00))
                                + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 9) & 0xE00)) * 0.0)
                                        * 0.000000059605))
                        * 0.5;
  return 1;
}
