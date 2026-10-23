/* sub_6093FAA8
 * address: 0x6093FAA8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093FAA8(int a1, int a2, float *a3, int a4, int a5, float *a6, float *a7)
{
  _DWORD *v10; // r0
  int v11; // r7
  _DWORD *v12; // r0

  v10 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 48) + 4);
  if ( a4 <= 0 )
  {
    v11 = v10[3];
  }
  else
  {
    v11 = v10[5];
    if ( v10[4] > (unsigned int)(a4 - 1) )
      v11 += 936 * (a4 - 1);
  }
  sub_6091DD8C(v11, a1);
  v12 = *(_DWORD **)(v11 + 612);
  if ( FIELD_U32(v11, 608) > 0x12u )
    v12 += 54;
  if ( *v12 != -1 )
    sub_6091B890(v12, a1, 2, a5);
  sub_6093F284(a1, v11, a2, a3, a6, a7);
}
