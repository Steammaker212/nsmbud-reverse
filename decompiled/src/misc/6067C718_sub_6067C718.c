/* sub_6067C718
 * address: 0x6067C718   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067C718(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  unsigned int v4; // r7
  float *v5; // r0
  float **v6; // r10
  unsigned int *v7; // r9
  int v8; // t1
  float v9; // s0
  float *v10; // r0
  float v12; // s0
  float *v13; // r0
  float v15; // [sp+4h] [bp-2Ch] BYREF
  float v16; // [sp+8h] [bp-28h]

  v2 = *(_DWORD **)(a1 + 6132);
  sub_6067DD1C(*(v2 - 1), &v15);
  v3 = 8;
  v4 = 1;
  v15 = v15 - FIELD_F32(a1, 108);
  v16 = v16 - FIELD_F32(a1, 112);
  v6 = (float **)(a1 + 9496);
  v5 = *(float **)(a1 + 9496);
  v7 = (unsigned int *)(a1 + 9492);
  *v5 = v15;
  v5[1] = v16;
  do
  {
    v8 = *--v2;
    sub_6067DBD0(v8, &v15);
    v9 = v15 - FIELD_F32(a1, 108);
    v15 = v9;
    v16 = v16 - FIELD_F32(a1, 112);
    v10 = *v6;
    if ( *v7 > v4++ )
      v10 = (float *)((char *)v10 + v3);
    v3 += 8;
    *v10 = v9;
    v10[1] = v16;
  }
  while ( (unsigned int)v2 > a1 + 6100 );
  sub_6067DC50(*v2, &v15);
  v12 = v15 - FIELD_F32(a1, 108);
  v15 = v12;
  v16 = v16 - FIELD_F32(a1, 112);
  v13 = *v6;
  if ( *v7 > v4 )
    v13 = (float *)((char *)v13 + v3);
  *v13 = v12;
  v13[1] = v16;
  return SolidOnTopCollider_execute((ColliderBase *)(a1 + 9152));
}
