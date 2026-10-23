/* sub_60600808
 * address: 0x60600808   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60600808(int a1)
{
  int v2; // r8
  int v3; // r11
  int v4; // r0
  int *v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  unsigned __int8 v10; // r0
  int v11; // r4
  int v12; // r1
  int v13; // r10
  int v14; // r9
  int v15; // r4
  unsigned int i; // r8
  unsigned int v17; // r0
  int v18; // r1
  unsigned int v19; // r0
  int ProfileId; // [sp+4h] [bp-34h]
  unsigned __int8 *v22; // [sp+8h] [bp-30h]
  int v23; // [sp+Ch] [bp-2Ch]
  int a3; // [sp+10h] [bp-28h]

  v2 = -byte_60B06218[FIELD_U32(a1, 6104)];
  ProfileId = Actor__getProfileId((Actor *)a1);
  if ( ProfileId == 376 )
    FIELD_U32(a1, 6116) = (v2 * FIELD_U16(a1, 22)) << 28;
  FIELD_U32(a1, 144) = 1065353216;
  v3 = a1 + 144;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 116) = 1166843904;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1140850688;
  a3 = a1;
  v5 = (int *)((char *)&unk_60CB2808 + 16 * FIELD_U32(a1, 30672));
  v4 = *v5;
  v6 = v5[1];
  v7 = v5[2];
  v8 = v5[3];
  FIELD_U32(a1, 6828) = 0;
  FIELD_U32(a1, 6824) = 0;
  FIELD_U32(a1, 6820) = 0;
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6832) = v4;
  FIELD_U32(a1, 6836) = v6;
  FIELD_U32(a1, 6840) = v7;
  FIELD_U32(a1, 6844) = v8;
  FIELD_U32(a1, 6848) = 0;
  sub_60602AA8(a1, dword_60B061C4, dword_60AF21B8[FIELD_U8(a1, 6108)] * (char)v2);
  ((void (__fastcall *)(int))loc_60602DF0)(a1);
  sub_60600A8C(a1);
  sub_60600E5C(a1);
  v9 = a1;
  v10 = FIELD_U8(a1, 6101);
  v22 = (unsigned __int8 *)(a1 + 6101);
  if ( v10 )
  {
    v11 = 0;
    do
    {
      v12 = 0;
      if ( (unsigned int)v11 < 4 )
        v12 = v11;
      v13 = v9 + 220 * v12;
      v14 = FIELD_U32(v13, 6868);
      if ( v14 >= 1 )
      {
        v23 = v11;
        v15 = v14 * v11;
        for ( i = 0; i != v14; ++i )
        {
          v17 = 0;
          if ( i < 0x10 )
            v17 = i;
          v18 = v13 + 12 * v17 + 6884;
          v19 = v15 + i;
          if ( v15 + i >= 0x20 )
            v19 = 0;
          sub_6060352C(v9 + 104 * v19 + 27344, v18, 0, v3);
          v9 = a3;
        }
        v11 = v23;
        v10 = *v22;
      }
      ++v11;
    }
    while ( v11 < v10 );
  }
  if ( ProfileId == 376 )
    FIELD_U8(v9, 534) = 0;
  StateMgr__changeState((StateMgr *)(v9 + 6084), (StateBase *)&dword_60CB27E4);
  return 1;
}
