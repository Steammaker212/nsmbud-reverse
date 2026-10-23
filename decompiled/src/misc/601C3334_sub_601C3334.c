/* sub_601C3334
 * address: 0x601C3334   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C3334(_DWORD *result, unsigned int a2, float a3, float a4, float a5)
{
  int v5; // r1
  int v6; // r3

  if ( a2 <= 0x27 )
  {
    v5 = dword_60AFC160[a2];
    if ( v5 != -1 )
    {
      if ( a5 <= 0.00000011921 && a5 >= -0.00000011921 )
        a5 = *(float *)&dword_60CB139C[6 * v5 + 3];
      if ( result[266] != v5 )
      {
        v6 = -1;
        if ( (unsigned int)(v5 - 24) <= 6 )
          v6 = dword_60AFC140[v5 - 24];
        result[265] = v6;
        result[266] = v5;
        JUMPOUT(0x605EA46C);
      }
      return (_DWORD *)sub_605EAFD8(**(_DWORD **)(*(_DWORD *)(result[236] + 12) + 12), a5);
    }
  }
  return result;
}
