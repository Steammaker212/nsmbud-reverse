/* sub_602F3414
 * address: 0x602F3414   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F3414(_BYTE *a1, float *a2, float *a3, unsigned int a4)
{
  float v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r8
  void *v11; // r7
  unsigned int U32; // r6
  unsigned int v13; // r0
  float v14; // s20
  float v15; // s22
  unsigned int v16; // r5
  float v17; // s20
  float v18; // s22
  int result; // r0
  int v20; // [sp+10h] [bp-58h]
  float v21; // [sp+14h] [bp-54h] BYREF
  float v22; // [sp+18h] [bp-50h]
  int v23; // [sp+1Ch] [bp-4Ch]

  a1[120] = 0;
  a1[248] = 0;
  a1[561] = 0;
  if ( a4 >= 0xD )
    a4 = 0;
  v7 = a2[1];
  v21 = *a2;
  v22 = v7;
  v23 = 1166843904;
  sub_602F2BF8(*(_DWORD *)&a1[4 * a4], (int)&v21, (int)(a1 + 548), (unsigned __int8)a1[560], 0);
  v8 = (unsigned __int8)a1[560];
  v9 = 4096;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 1166843904;
  v10 = 5;
  if ( v8 > 2 )
    v9 = 4112;
  v20 = v9;
  v11 = (void *)(dword_60C9CF0C + 1340);
  do
  {
    U32 = sead__Random__getU32(v11);
    v13 = sead__Random__getU32(v11);
    v14 = *a3;
    v15 = *a2;
    v16 = v13;
    v21 = (float)(v15 + (float)(v14 * (float)(COERCE_FLOAT((sead__Random__getU32(v11) >> 9) | 0x3F800000) + -1.0)))
        - (float)(*a3 * 0.5);
    v17 = a3[1];
    v18 = a2[1];
    v22 = (float)(v18 + (float)(v17 * (float)(COERCE_FLOAT((sead__Random__getU32(v11) >> 9) | 0x3F800000) + -1.0)))
        - (float)(v17 * 0.5);
    result = IceFragmentHeap_ref(
               dword_60C99CDC,
               &v21,
               v20 | (U32 >> 30) | (v16 >> 22) & 0x300,
               &dword_60B3B98C,
               &dword_60B3B95C);
    --v10;
  }
  while ( v10 );
  return result;
}
