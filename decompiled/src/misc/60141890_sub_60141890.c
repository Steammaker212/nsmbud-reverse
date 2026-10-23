/* sub_60141890
 * address: 0x60141890   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60141890(_DWORD *a1)
{
  int v2; // lr
  int v3; // r1
  _DWORD *v4; // r0
  unsigned int v5; // r0

  v2 = 1;
  v3 = a1[20];
  v4 = a1 + 162;
  if ( ((v4[((v3 + 18) >> 5) + 556] & (1 << ((v3 + 18) & 0x1F))) == 0
     && (v4[((v3 + 22) >> 5) + 556] & (1 << ((v3 + 22) & 0x1F))) == 0
     || (v4[((v3 + 28) >> 5) + 556] & (1 << ((v3 + 28) & 0x1F))) != 0)
    && (a1[718] & 0x10400) != 0x400
    && (a1[1489] & 0xFF00) != 0x300 )
  {
    v5 = sub_6014C508(v4, v3);
    return (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                 + (float)((float)((float)(v5 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                         * 0.000000059605)) >= (float)(*(float *)((char *)sinLutTable
                                                                + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4)
                                                                                             / 180.0) >> 20)
                                                                 & 0xFF0))
                                                     + (float)((float)((float)((int)(float)((float)(2147500000.0 * 63.4)
                                                                                          / 180.0)
                                                                             & 0xFFFFFF)
                                                                     * *(float *)((char *)&sinLutTable[1]
                                                                                + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4) / 180.0) >> 20)
                                                                                 & 0xFF0)))
                                                             * 0.000000059605));
  }
  return v2;
}
