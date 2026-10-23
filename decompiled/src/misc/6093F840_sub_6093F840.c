/* sub_6093F840
 * address: 0x6093F840   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093F840(int a1, int a2, float *a3, float *a4, float a5, float *a6)
{
  int v11; // r0
  int v12; // r4
  unsigned int v13; // r1
  _DWORD *v14; // r0
  float v15[11]; // [sp+Ch] [bp-2Ch] BYREF

  v11 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 8) + 4);
  v12 = FIELD_U32(v11, 20);
  if ( FIELD_U32(v11, 16) > 1u )
    v12 += 936;
  sub_6091DD8C(v12, a1);
  v13 = FIELD_U32(v12, 608);
  v14 = *(_DWORD **)(v12 + 612);
  v15[0] = a5;
  if ( v13 > 2 )
    v14 += 6;
  if ( *v14 != -1 )
    sub_6091B890(v14, a1, 1, (int)v15);
  sub_6093F284(a1, v12, a2, a3, a4, a6);
}
