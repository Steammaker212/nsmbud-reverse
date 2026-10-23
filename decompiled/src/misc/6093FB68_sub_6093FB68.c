/* sub_6093FB68
 * address: 0x6093FB68   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093FB68(int a1, int a2, float *a3, int a4, int a5, char a6, float *a7)
{
  int v10; // r0
  _DWORD *v11; // r1
  int v12; // r7
  unsigned int v13; // r0

  v10 = (2 * a5) | (4 * a4) | a6 & 1;
  v11 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 40) + 4);
  if ( v10 <= 0 )
  {
    v12 = v11[3];
  }
  else
  {
    v12 = v11[5];
    v13 = v10 - 1;
    if ( v11[4] > v13 )
      v12 += 936 * v13;
  }
  sub_6091DD8C(v12, a1);
  sub_6093F284(a1, v12, a2, a3, (float *)&dword_60B3B954, a7);
}
