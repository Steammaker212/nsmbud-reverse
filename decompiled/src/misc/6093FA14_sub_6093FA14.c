/* sub_6093FA14
 * address: 0x6093FA14   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093FA14(int a1, int a2, float *a3, float *a4, float *a5)
{
  unsigned int v9; // r0
  unsigned int v10; // r1
  int v11; // r4

  v9 = 2;
  v10 = FIELD_U8(a2, 48);
  if ( v10 <= 8 )
    v9 = dword_60B46620[v10];
  v11 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) > v9 )
    v11 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 4 * v9);
  sub_6091DD8C(v11, a1);
  sub_6093F284(a1, v11, a2, a3, a4, a5);
}
