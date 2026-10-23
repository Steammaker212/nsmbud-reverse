/* sub_6061B834
 * address: 0x6061B834   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061B834(int a1)
{
  unsigned int v2; // r0
  int result; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 6856) + FIELD_U32(a1, 6864);
  FIELD_U32(a1, 6864) = v2;
  FIELD_U32(a1, 160) = (int)(float)((float)FIELD_S32(a1, 6852)
                                     * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v2 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                                     * 0.000000059605)));
  result = a1 + 112;
  if ( (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 6860)) <= FIELD_F32(dword_60CC6484, 28) )
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
