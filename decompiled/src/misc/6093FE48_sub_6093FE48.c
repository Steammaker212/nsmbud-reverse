/* sub_6093FE48
 * address: 0x6093FE48   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093FE48(int a1, int a2, float a3)
{
  int v6; // r0
  int v7; // r6
  int v9; // r6
  unsigned int v10; // r1
  _DWORD *v11; // r0
  float v12; // [sp+4h] [bp-1Ch] BYREF

  v6 = FIELD_U32(dword_60CD0B60, 28);
  if ( a3 == 1.0 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v6, 8) + 4) + 20);
    sub_6091DD8C(v7, a1);
    return sub_6093F6B4(a1, v7, a2);
  }
  else
  {
    v9 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v6, 212) + 4) + 20);
    sub_6091DD8C(v9, a1);
    v10 = FIELD_U32(v9, 608);
    v11 = *(_DWORD **)(v9 + 612);
    v12 = a3;
    if ( v10 > 0x17 )
      v11 += 69;
    if ( *v11 != -1 )
      sub_6091B890(v11, a1, 1, (int)&v12);
    return sub_6093F6B4(a1, v9, a2);
  }
}
