/* sub_60989CC8
 * address: 0x60989CC8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989CC8(float *a1, int a2, float a3)
{
  int v6; // r6

  v6 = sub_608502E4((int)a1) + 1;
  a1[4] = (float)((sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)(unsigned int)v6) >> 32);
  return (*(int (__fastcall **)(float *, int, float))(*(_DWORD *)a1 + 92))(a1, a2, a3);
}
