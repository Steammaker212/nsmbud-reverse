/* sub_60414820
 * address: 0x60414820   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60414820(int a1, int a2, float *a3, float a4)
{
  float *v5; // r5
  _DWORD *v8; // r1
  unsigned int v9; // r4
  _DWORD *result; // r0
  _DWORD *v11; // r7
  _DWORD *v12; // r0
  float *v13; // r2
  float *v14; // t1

  v5 = 0;
  v8 = **(_DWORD ***)(FIELD_U32(a1, 229616) + 4 * a2);
  v9 = v8[10];
  if ( v9 >= 4 )
    v9 = 0;
  result = (_DWORD *)(a1 + 21528 * v9);
  v11 = result + 6;
  if ( result[6] < result[9] )
  {
    v14 = (float *)result[7];
    v12 = result + 7;
    v13 = v14;
    if ( v14 )
    {
      v5 = v13;
      *v12 = *(_DWORD *)v13;
    }
    qmemcpy(v5, v8, 0x4Cu);
    v5[19] = 0.0;
    v5[20] = 0.0;
    sead__ListNode__insertFront((sead_ListNode *)(a1 + 21528 * v9 + 16), (sead_ListNode *)(v5 + 19));
    result = (_DWORD *)(*v11 + 1);
    *v11 = result;
    if ( v5 )
    {
      *v5 = *a3 + *v5;
      v5[1] = a3[1] + v5[1];
      v5[16] = a4;
    }
  }
  return result;
}
