/* sub_6093AC5C
 * address: 0x6093AC5C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093AC5C(int a1, int a2, int a3)
{
  int v6; // r7
  _DWORD *v7; // r0
  unsigned int v8; // r2
  _DWORD *v9; // r1

  v6 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x38u )
    v6 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 220);
  sub_6091DD8C(v6, a1);
  v7 = *(_DWORD **)(v6 + 612);
  if ( *v7 != -1 )
  {
    sub_6091B890(v7, a1, 12, (int)&qword_60B3B8CC);
    v7 = *(_DWORD **)(v6 + 612);
  }
  v8 = FIELD_U32(v6, 608);
  v9 = v7;
  if ( v8 > 1 )
    v9 = v7 + 3;
  if ( *v9 != -1 )
  {
    sub_6091B890(v9, a1, 12, a2);
    v8 = FIELD_U32(v6, 608);
    v7 = *(_DWORD **)(v6 + 612);
  }
  if ( v8 > 2 )
    v7 += 6;
  if ( *v7 != -1 )
    sub_6091B890(v7, a1, 16, a3);
  nullsub_122();
}
