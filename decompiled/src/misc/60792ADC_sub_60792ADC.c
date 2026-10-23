/* sub_60792ADC
 * address: 0x60792ADC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int64 __fastcall sub_60792ADC(int a1, unsigned int a2)
{
  int v2; // r3
  void *v3; // r0
  unsigned __int64 v5; // kr00_8

  v2 = FIELD_U32(a1, 168);
  v3 = (void *)sead__GlobalRandom__sInstance;
  if ( !v2 )
    v3 = (void *)(dword_60C9CF0C + 1340);
  v5 = sead__Random__getU32(v3) * (unsigned __int64)a2;
  return __PAIR64__(v5, HIDWORD(v5));
}
