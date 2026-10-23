/* sub_6025FA54
 * address: 0x6025FA54   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6025FA54(int a1, int a2, float a3)
{
  _DWORD *v4; // r0
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r4

  if ( FIELD_U32(a1, 6360) == a2 )
  {
    v4 = *(_DWORD **)(a1 + 6352);
    v5 = (int *)v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    if ( (float)(*(float *)(*v5 + 24) * a3) < 0.0 )
      sub_6041838C((ModelAnimation *)(v8 + 4));
    FIELD_F32(v8, 24) = a3;
  }
  else
  {
    FIELD_U32(a1, 6360) = a2;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
}
