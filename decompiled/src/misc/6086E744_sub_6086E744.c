/* sub_6086E744
 * address: 0x6086E744   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086E744(int a1, int a2, float a3)
{
  int *v4; // r5
  unsigned int v5; // s2
  unsigned int v6; // r0

  if ( *(float *)a2 > a3 || FIELD_F32(a2, 4) <= a3 )
  {
    v5 = (unsigned int)(float)((float)FIELD_U16(a1, 18)
                             * (float)((float)(a3 - FIELD_F32(a1, 24))
                                     * (float)(1.0 / (float)(FIELD_F32(a1, 28) - FIELD_F32(a1, 24)))));
    FIELD_U32(a2, 8) = v5;
    v4 = (int *)(a2 + 8);
    v6 = FIELD_U16(a1, 18);
    if ( v5 >= v6 )
      *v4 = v6 - 1;
    ((void (__fastcall *)(int))off_60C5A70C[2 * (FIELD_U16(a1, 16) & 3)])(a1 + ((int)off_60C5A70C[2 * (FIELD_U16(a1, 16) & 3) + 1] >> 1));
  }
  else
  {
    v4 = (int *)(a2 + 8);
  }
  return (*(_DWORD *)(FIELD_U32(a1, 8) + 4 * (*v4 >> 5)) >> (*(_BYTE *)v4 & 0x1F)) & 1;
}
