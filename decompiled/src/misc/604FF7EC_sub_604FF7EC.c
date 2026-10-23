/* sub_604FF7EC
 * address: 0x604FF7EC   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FF7EC(_DWORD *a1)
{
  int v1; // r9
  int result; // r0
  int v3; // r5
  unsigned int v4; // r8
  unsigned int v5; // r10
  float *v6; // r11
  _WORD *v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r9
  _DWORD *v10; // r8
  int v11; // r2
  int *v12; // r8
  int v13; // t1
  int v14; // r4
  int v15; // r0
  unsigned int v16; // r7
  unsigned int v17; // r0
  _DWORD *v18; // r6
  int *v19; // r6
  int v20; // t1
  unsigned int v21; // r9
  int v22; // r8
  int v23; // r1
  float v24; // s0
  int v25; // r0
  int v26; // r3
  int v27; // r6
  float v28; // s0
  float v29; // s2
  int v30; // r0
  int v31; // r3
  int v32; // r6
  int *v33; // [sp+10h] [bp-168h]
  int v34; // [sp+1Ch] [bp-15Ch]
  _DWORD *v35; // [sp+30h] [bp-148h]
  unsigned int v36; // [sp+34h] [bp-144h]
  int (**v38)(); // [sp+3Ch] [bp-13Ch] BYREF
  int *v39; // [sp+40h] [bp-138h]
  int v40; // [sp+44h] [bp-134h]
  int v41; // [sp+48h] [bp-130h] BYREF

  v1 = StaffCreditTable_init(10);
  result = FIELD_U32(v1, 8);
  if ( result >= 1 )
  {
    v3 = result - 1;
    v4 = 0;
    v5 = 0;
    v34 = v1;
    v6 = (float *)(a1 + 3997);
    v35 = a1 + 3996;
    v33 = a1 + 3735;
    v36 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( result > v5 )
        v7 = (_WORD *)sub_6091171C(FIELD_U32(v1, 4), v5);
      v39 = &v41;
      v38 = &BufferedSafeStringBase_char_vtable_probably;
      v40 = 256;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v38);
      *(_BYTE *)v39 = 0;
      v38 = &off_60BD94BC;
      sub_60911A10(v1, &v38, v5);
      if ( v7 )
      {
        if ( (*v7 & 0xFFFE) == 0xE )
          break;
      }
      v16 = v36;
      v17 = 0;
      if ( v36 < 0xC8 )
        v17 = v36;
      v18 = &a1[v17];
      v20 = v18[3796];
      v19 = v18 + 3796;
      v11 = v20;
      if ( !v20 )
      {
        v21 = v4;
        v22 = sub_608DE1A4(0x110u);
        LetterAnimOn_ref_98530C(v22, a1[3796], a1[539]);
        *v19 = v22;
        v23 = v22;
        v4 = v21;
        v1 = v34;
        sub_608589FC(*v33, v23);
        v16 = v36;
        v11 = *v19;
      }
      v24 = *(float *)(a1[3741] + 60) * -0.5;
      *v6 = *v6 + v24;
      v25 = *v19;
      v26 = a1[3997];
      v27 = a1[3998];
      FIELD_U32(v25, 24) = *v35;
      FIELD_U32(v25, 28) = v26;
      FIELD_U32(v25, 32) = v27;
      FIELD_U8(v25, 64) |= 0x10u;
      *v6 = v24 + *v6;
      v36 = v16 + 1;
LABEL_24:
      result = sub_6047E13C(10, &v38, v11, 0);
      if ( v3 == v5 )
        return result;
      result = FIELD_U32(v1, 8);
      ++v5;
    }
    v8 = 0;
    v9 = v4;
    if ( v4 < 0x32 )
      v8 = v4;
    v10 = &a1[v8];
    v13 = v10[3746];
    v12 = v10 + 3746;
    v11 = v13;
    if ( !v13 )
    {
      v14 = sub_608DE1A4(0x110u);
      LetterAnimOn_ref_98530C(v14, a1[3746], a1[539]);
      *v12 = v14;
      sub_608589FC(*v33, v14);
      v11 = *v12;
    }
    if ( v7[2] )
    {
      if ( v7[2] != 2 )
      {
        v28 = *v6;
        goto LABEL_23;
      }
      v15 = 3;
    }
    else
    {
      v15 = 4;
    }
    v28 = *v6 - *(float *)(a1[v15 + 3735] + 60);
    *v6 = v28;
LABEL_23:
    v29 = *(float *)(a1[3740] + 60) * -0.5;
    *v6 = v28 + v29;
    v30 = *v12;
    v4 = v9 + 1;
    v31 = a1[3997];
    v32 = a1[3998];
    FIELD_U32(v30, 24) = *v35;
    FIELD_U32(v30, 28) = v31;
    FIELD_U32(v30, 32) = v32;
    FIELD_U8(v30, 64) |= 0x10u;
    *v6 = v29 + *v6;
    v1 = v34;
    goto LABEL_24;
  }
  return result;
}
