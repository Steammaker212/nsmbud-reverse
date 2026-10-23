/* sub_6060193C
 * address: 0x6060193C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060193C(int a1)
{
  int v1; // r12
  unsigned int v2; // r1
  int v3; // r1
  int v4; // r2
  _DWORD *v5; // r2
  float v6; // s0
  int *v7; // r2
  int v8; // r3
  int v9; // r7
  int v10; // r6
  int v11; // r2
  int v12; // r2
  unsigned __int8 v13; // r0
  int v14; // r7
  int v15; // r1
  int v16; // r10
  int v17; // r11
  int v18; // r8
  unsigned int i; // r7
  unsigned int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  int v24; // [sp+4h] [bp-2Ch]

  v1 = (char)-byte_60B06218[FIELD_U32(a1, 6104)];
  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6116) = v1 * (v2 & 0xF0000000);
  v3 = HIBYTE(v2) & 1;
  FIELD_U8(a1, 34140) = v3;
  v4 = dword_60B061F8[4 * v3 + 3];
  FIELD_U32(a1, 144) = v4;
  FIELD_U32(a1, 148) = v4;
  FIELD_U32(a1, 152) = v4;
  v5 = (_DWORD *)(a1 + 27216);
  if ( v3 )
  {
    v6 = 1.0;
    *v5 = 1065353216;
    FIELD_U8(a1, 6109) = 1;
  }
  else
  {
    v6 = 0.75;
    *v5 = 1061158912;
  }
  FIELD_F32(a1, 27220) = v6;
  FIELD_F32(a1, 27224) = v6;
  FIELD_U32(a1, 116) = 1166843904;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1149239296;
  FIELD_U32(a1, 504) = 1149239296;
  v7 = (int *)((char *)&unk_60CB2884 + 16 * v3);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  FIELD_U32(a1, 6828) = 0;
  FIELD_U32(a1, 6824) = 0;
  FIELD_U32(a1, 6820) = 0;
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6832) = v8;
  FIELD_U32(a1, 6836) = v9;
  FIELD_U32(a1, 6840) = v10;
  FIELD_U32(a1, 6844) = v11;
  FIELD_U32(a1, 6848) = 0;
  sub_60602AA8(a1, &dword_60B061F8[4 * v3], dword_60AF4CB0[FIELD_U8(a1, 6108)] * v1);
  ((void (__fastcall *)(int))loc_60602DF0)(a1);
  firebar_L_base_ref(a1);
  sub_60601F6C(a1);
  v12 = a1;
  v13 = FIELD_U8(a1, 6101);
  if ( v13 )
  {
    v14 = 0;
    do
    {
      v15 = 0;
      if ( (unsigned int)v14 < 4 )
        v15 = v14;
      v16 = v12 + 220 * v15;
      v17 = FIELD_U32(v16, 6868);
      if ( v17 >= 1 )
      {
        v18 = v17 * v14;
        v24 = v14;
        for ( i = 0; i != v17; ++i )
        {
          v20 = 0;
          if ( i < 0x10 )
            v20 = i;
          v21 = v16 + 12 * v20 + 6884;
          v22 = v18 + i;
          if ( v18 + i >= 0x40 )
            v22 = 0;
          sub_6060352C(v12 + 104 * v22 + 27484, v21, 0, a1 + 144);
          v12 = a1;
        }
        v14 = v24;
        v13 = FIELD_U8(a1, 6101);
      }
      ++v14;
    }
    while ( v14 < v13 );
  }
  StateMgr__changeState((StateMgr *)(v12 + 6084), (StateBase *)&dword_60CB2860);
  return 1;
}
