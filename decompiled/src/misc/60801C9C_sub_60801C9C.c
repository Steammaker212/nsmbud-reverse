/* sub_60801C9C
 * address: 0x60801C9C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801C9C(float *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r0
  float v11; // r1
  int v12; // r2
  int v13; // r3
  float v15; // [sp+8h] [bp-38h] BYREF
  float v16; // [sp+Ch] [bp-34h]
  int v17; // [sp+10h] [bp-30h]
  int v18; // [sp+14h] [bp-2Ch]
  float v19[9]; // [sp+1Ch] [bp-24h] BYREF

  if ( AreaTask_intance && FIELD_U32(AreaTask_intance, 1828) == 1 )
  {
    sub_608009EC((int)a1, (float *)a2);
  }
  else
  {
    v15 = a1[4];
    v10 = sub_60804418(a3);
    sub_60804D64(v10, 0);
    v19[0] = ((float (__fastcall *)(int))loc_608039A4)(a3);
    if ( ((int (__fastcall *)(int, float *, float *))loc_608036C4)(a3, &v15, v19) != 1 )
      v15 = v19[0];
    sub_608009D4((int)a1, a3);
  }
  v11 = FIELD_F32(a2, 4);
  v12 = FIELD_U32(a2, 8);
  v13 = FIELD_U32(a2, 12);
  v15 = *(float *)a2;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  nullsub_60(a3, &v15, a1[4]);
  sub_608009AC(a1);
  sub_60801DB0(a1, a3, a4, a5, v16, a6);
  sub_60800A24((int)a1, &v15);
  return sub_60800A5C((int)a1, (int)&v15);
}
