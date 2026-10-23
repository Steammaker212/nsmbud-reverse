/* sub_60880F00
 * address: 0x60880F00   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60880F00(int a1)
{
  int *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r1
  int i; // r5
  _DWORD *v7; // r6
  int v8; // r8
  int v9; // r1
  int v10; // r0
  _QWORD *v11; // r1
  _QWORD *v12; // r0

  FIELD_U32(a1, 336) = **(_DWORD **)(a1 + 516);
  v2 = (int *)sub_60885CA8();
  v3 = *v2;
  *v2 = v2[1];
  v2[1] = v2[2];
  v4 = v2[3];
  v2[2] = v4;
  v5 = v3 ^ (v3 << 11) ^ ((v3 ^ (unsigned int)(v3 << 11)) >> 8) ^ v4 ^ (v4 >> 19);
  v2[3] = v5;
  FIELD_U32(a1, 40) = v5;
  for ( i = *(_DWORD *)(FIELD_U32(a1, 516) + 16); i; i = FIELD_U32(i, 152) )
  {
    v7 = (_DWORD *)sub_60881158(a1, i, FIELD_U32(a1, 56), 0, -1);
    if ( v7 )
    {
      ++FIELD_U32(a1, 412);
      ++FIELD_U32(a1, 352);
      if ( !*(_BYTE *)(FIELD_U32(i, 12) + 2032) )
        FIELD_U8(a1, 4) = 1;
      if ( *(int *)(v7[87] + 84) >= 1 )
      {
        v8 = 0;
        do
        {
          v9 = v7[v8 + 88];
          if ( v9 )
          {
            if ( !*(_BYTE *)(FIELD_U32(v9, 12) + 2020) )
            {
              v10 = sub_60881158(a1, v9, 0, v7, v8);
              if ( v10 )
              {
                FIELD_U32(v10, 904) = v7[5];
                FIELD_U64(v10, 544) = 1065353216;
                FIELD_U64(v10, 552) = 0;
                FIELD_U64(v10, 560) = 0x3F80000000000000LL;
                FIELD_U64(v10, 568) = 0;
                FIELD_U64(v10, 576) = 0;
                FIELD_U64(v10, 584) = 1065353216;
                FIELD_U64(v10, 592) = 0;
                FIELD_U64(v10, 600) = 0;
                FIELD_U64(v10, 608) = 1065353216;
                FIELD_U64(v10, 616) = 0;
                FIELD_U64(v10, 624) = 0x3F80000000000000LL;
                FIELD_U64(v10, 632) = 0;
                FIELD_U64(v10, 640) = 0;
                FIELD_U64(v10, 648) = 1065353216;
                FIELD_U64(v10, 656) = 0;
                FIELD_U64(v10, 664) = 0;
                FIELD_U32(v10, 908) = -1;
                FIELD_F32(v10, 916) = (float)*(int *)(v7[34] + 2232);
                FIELD_U32(v10, 920) = 0;
                FIELD_U32(v10, 912) = -1;
                FIELD_U64(v10, 928) = unk_60B152CC;
                FIELD_U64(v10, 936) = 0;
                FIELD_U64(v10, 944) = unk_60B152CC;
                FIELD_U64(v10, 952) = 0;
                FIELD_U64(v10, 960) = unk_60B152DC;
                FIELD_U64(v10, 968) = unk_60B152E4;
                v11 = (_QWORD *)(v10 + 976);
                v12 = (_QWORD *)(v10 + 992);
                *v11 = unk_60B152CC;
                v11[1] = unk_60B152D4;
                *v12 = unk_60B152CC;
                v12[1] = unk_60B152D4;
              }
            }
          }
          ++v8;
        }
        while ( v8 < *(_DWORD *)(v7[87] + 84) );
      }
    }
  }
  FIELD_U8(a1, 8) = 1;
  return 1;
}
