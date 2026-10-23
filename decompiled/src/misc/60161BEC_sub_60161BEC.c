/* sub_60161BEC
 * address: 0x60161BEC   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60161BEC(_DWORD *a1, int a2, _DWORD *a3, signed int a4, int a5)
{
  int v9; // r7
  __int64 v10; // r0
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r6
  int v14; // r4
  int v15; // r8
  int v16; // r4
  int v17; // r7
  int v18; // r0
  int v19; // r1
  _DWORD *v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r3
  int v24; // r7
  int v25; // r7
  _DWORD *v26; // r1
  int v27; // r2
  unsigned int v28; // r3
  int v29; // r6
  int v30; // r7
  int v31; // r6
  bool v32; // cc
  int v33; // r7
  int result; // r0
  _DWORD v35[14]; // [sp+0h] [bp-38h] BYREF

  if ( a4 >= 1 )
  {
    v9 = a5;
    v10 = 8LL * (unsigned int)a4;
    if ( !is_mul_ok(8u, a4) )
      HIDWORD(v10) = 1;
    if ( HIDWORD(v10) )
      LODWORD(v10) = -1;
    v11 = sub_608DE334(v10, a5, 4);
    if ( v11 )
    {
      a1[85] = a4;
      a1[86] = v11;
    }
    __SET_PAIR__(v12, v13, 32LL * (unsigned int)a4);
    if ( !is_mul_ok(0x20u, a4) )
      v12 = 1;
    if ( v12 )
      v13 = -1;
    v14 = sub_608DE334(v13, a5, 4);
    if ( v14 )
    {
      v15 = 0;
      do
      {
        ColliderNode_ctor((ColliderNode *)(v14 + v15));
        v15 += 32;
      }
      while ( 32 * a4 != v15 );
      v9 = a5;
      a1[87] = a4;
      a1[88] = v14;
    }
    v16 = sub_608DE334(v13, v9, 4);
    if ( v16 )
    {
      v17 = 0;
      do
      {
        ColliderNode_ctor((ColliderNode *)(v16 + v17));
        v17 += 32;
      }
      while ( 32 * a4 != v17 );
      a1[89] = a4;
      a1[90] = v16;
    }
  }
  v18 = a1[85];
  if ( v18 >= 1 )
  {
    v19 = 0;
    if ( (v18 & 1) != 0 )
    {
      v20 = (_DWORD *)a1[86];
      *v20 = 0;
      v20[1] = 0;
      v19 = 1;
    }
    if ( v18 != 1 )
    {
      v21 = v19 - v18;
      v22 = 8 * v19;
      v23 = 0;
      do
      {
        v24 = a1[86] + v22;
        *(_DWORD *)(v24 - 8 * v23) = 0;
        *(_DWORD *)(v24 - 8 * v23 + 4) = 0;
        v25 = a1[86] + v22 - 8 * v23;
        v23 -= 2;
        FIELD_U32(v25, 8) = 0;
        FIELD_U32(v25, 12) = 0;
      }
      while ( v21 != v23 );
    }
  }
  if ( a4 >= 2 )
  {
    v26 = a1 + 76;
    v27 = 0;
    v28 = 0;
    do
    {
      v29 = a1[88];
      v30 = a1[77];
      if ( a1[87] > v28 )
        v29 += v27;
      FIELD_U32(v29, 24) = *v26;
      FIELD_U32(v29, 28) = v30;
      v31 = a1[90];
      v32 = a1[89] > v28;
      v33 = a1[77];
      ++v28;
      if ( v32 )
        v31 += v27;
      v27 += 32;
      FIELD_U32(v31, 24) = *v26;
      FIELD_U32(v31, 28) = v33;
    }
    while ( a4 - 1 != v28 );
  }
  v35[0] = a2 + 108;
  v35[1] = a2 + 584;
  v35[2] = a2 + 86;
  v35[3] = a2 + 87;
  v35[4] = a2 + 84;
  result = sub_60161E68(a1, v35, a3);
  a1[36] = a2;
  return result;
}
