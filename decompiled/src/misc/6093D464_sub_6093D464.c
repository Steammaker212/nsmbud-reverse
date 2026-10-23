/* sub_6093D464
 * address: 0x6093D464   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093D464(int a1, int *a2, int a3, float32x2_t *a4, float a5, int a6, int a7)
{
  int v12; // r4
  unsigned int v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r1
  _DWORD *v16; // r1
  float v18[9]; // [sp+Ch] [bp-24h] BYREF

  v12 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x2Bu )
    v12 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 168);
  sub_6091DD8C(v12, a1);
  v13 = FIELD_U32(v12, 608);
  v14 = *(_DWORD **)(v12 + 612);
  v15 = v14;
  if ( v13 > 4 )
    v15 = v14 + 12;
  if ( *v15 != -1 )
  {
    sub_6091B890(v15, a1, 2, a6);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v16 = v14;
  v18[0] = a5;
  if ( v13 > 5 )
    v16 = v14 + 15;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a1, 1, (int)v18);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  if ( v13 > 6 )
    v14 += 18;
  if ( *v14 != -1 )
    sub_6091B890(v14, a1, 2, a7);
  return sub_6093D260(a1, v12, a2, a3, a4, (int)&dword_60B45CEC);
}
