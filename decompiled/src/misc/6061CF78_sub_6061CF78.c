/* sub_6061CF78
 * address: 0x6061CF78   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061CF78(int a1)
{
  unsigned int *v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // t1
  unsigned int v5; // r0
  int result; // r0

  v1 = (unsigned int *)a1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = v1[1714] + v1[1708];
  v1[1708] = v2;
  v1[39] = (int)(float)((float)(int)v1[1711]
                      * (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                              + (float)((float)((float)(v2 & 0xFFFFFF)
                                              * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                                      * 0.000000059605)));
  v3 = v1[1715] + v1[1709];
  v1[1709] = v3;
  v1[40] = (int)(float)((float)(int)v1[1712]
                      * (float)(*(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
                              + (float)((float)((float)(v3 & 0xFFFFFF)
                                              * *(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0)))
                                      * 0.000000059605)));
  v4 = v1[1710];
  v1 += 1710;
  v5 = v1[6] + v4;
  *v1 = v5;
  result = (int)(float)((float)(int)v1[3]
                      * (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                              + (float)((float)((float)(v5 & 0xFFFFFF)
                                              * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                                      * 0.000000059605)));
  *(v1 - 1669) = result;
  return result;
}
