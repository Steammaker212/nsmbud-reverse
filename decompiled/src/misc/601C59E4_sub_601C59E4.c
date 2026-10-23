/* sub_601C59E4
 * address: 0x601C59E4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C59E4(_DWORD *a1)
{
  int v2; // r7
  int result; // r0

  a1[88] = 1090519040;
  a1[89] = -1090519040;
  a1[90] = 0;
  a1[91] = 0;
  a1[92] = 0;
  a1[93] = 0;
  a1[94] = 0;
  a1[95] = 0;
  a1[96] = (int)(float)((float)(2147500000.0
                              * (float)((float)((float)(COERCE_FLOAT(
                                                          (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                                        | 0x3F800000)
                                                      + -1.0)
                                              * 20.0)
                                      + 25.0))
                      / 180.0);
  v2 = a1[97];
  a1[97] = (int)(float)((float)(2147500000.0
                              * (float)((float)(COERCE_FLOAT(
                                                  (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                                | 0x3F800000)
                                              + -1.0)
                                      * 60.0))
                      / 180.0)
         + (v2 ^ 0x80000000);
  a1[99] = 0;
  a1[100] = 5;
  a1[71] = (5 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32;
  a1[44] = -a1[96];
  a1[45] = a1[97];
  result = a1[109];
  if ( result >= 1 )
  {
    result = a1[66] | 1;
    if ( result != 7 )
      return sub_601E4A74(dword_60C8B13C, 14);
  }
  return result;
}
