/* sub_60173634
 * address: 0x60173634   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60173634(__n64 *a1, unsigned int *a2)
{
  int v4; // r0
  _DWORD *v5; // r0
  unsigned int v6; // r7
  unsigned __int32 v7; // r1
  unsigned __int32 v8; // r2
  unsigned __int32 v9; // r0
  int v10; // r3
  __n64 v11; // d0
  unsigned __int32 v12; // s2
  unsigned int v13; // r1
  unsigned int v14; // r2
  int result; // r0
  unsigned __int32 v16; // r1
  unsigned int v17; // r2
  int v18; // r2
  _DWORD *v19; // r2
  unsigned __int32 v20; // s6
  unsigned __int32 v21; // s8
  unsigned __int32 v22; // s4
  unsigned int v23; // r3
  unsigned int v24; // r1
  int v25; // r1
  _DWORD *v26; // r0
  unsigned __int32 v27; // r1
  unsigned __int32 v28; // r2

  v4 = sub_601A4454(dword_60C89E18, *a2, a2[1]);
  v5 = (_DWORD *)sub_60178780(v4, a2[2]);
  v6 = 0;
  a1[64].n64_u32[1] = *a2;
  FIELD_U32(a1 + (65) * 8, 0x0)[0] = a2[1];
  v7 = v5[18];
  FIELD_U32(a1 + (8) * 8, 0x0)[0] = v7;
  v8 = v5[19];
  FIELD_U32(a1 + (8) * 8, 0x0)[1] = v8;
  v9 = v5[20];
  FIELD_U32(a1 + (9) * 8, 0x0)[0] = v9;
  a1[12].n64_u32[1] = v7;
  FIELD_U32(a1 + (13) * 8, 0x0)[0] = v8;
  FIELD_U32(a1 + (13) * 8, 0x0)[1] = v9;
  a1[21].n64_u32[1] = v7;
  FIELD_U32(a1 + (22) * 8, 0x0)[0] = v8;
  FIELD_U32(a1 + (22) * 8, 0x0)[1] = v9;
  v10 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 2112) = v7;
  FIELD_U32(v10, 2116) = v8;
  FIELD_U32(v10, 2120) = v9;
  v11.n64_u64[0] = sub_60170BD8((int)a1, a2).n64_u64[0];
  FIELD_U64(a1 + (8) * 8, 0x0)[0] = v11.n64_u64[0];
  FIELD_U32(a1 + (9) * 8, 0x0)[0] = v12;
  v13 = *a2;
  v14 = a2[1];
  result = dword_60C89E18;
  if ( v14 >= 2 )
    v14 = 0;
  if ( v13 >= 9 )
    v13 = 0;
  v16 = *(_DWORD *)(dword_60C89E18 + 8 * v13 + 4 * v14 + 2336);
  a1[7].n64_u32[1] = v16;
  if ( v16 == 5 )
    goto LABEL_17;
  v17 = *a2;
  if ( *a2 >= 9 )
    v17 = 0;
  v18 = 3 * v17;
  if ( a2[1] < 2 )
    v6 = a2[1];
  v19 = (_DWORD *)(result + 8 * v18 + 12 * v6);
  v20 = v19[604];
  v21 = v19[603];
  v22 = v19[602];
  if ( v16 == 3 )
  {
    v11.n64_u32[1] = v19[603];
    v12 = v19[604];
    goto LABEL_19;
  }
  if ( v16 != 2 )
  {
LABEL_17:
    v22 = v11.n64_u32[0];
  }
  else
  {
    a1[15].n64_u32[1] = v22;
    FIELD_U32(a1 + (16) * 8, 0x0)[0] = v21;
    FIELD_U32(a1 + (16) * 8, 0x0)[1] = v20;
    v23 = 0;
    v24 = *a2;
    if ( *a2 >= 9 )
      v24 = 0;
    v25 = 3 * v24;
    if ( a2[1] < 2 )
      v23 = a2[1];
    v26 = (_DWORD *)(result + 8 * v25 + 12 * v23);
    v27 = v26[656];
    v28 = v26[657];
    result = v26[658];
    FIELD_U32(a1 + (17) * 8, 0x0)[0] = v27;
    FIELD_U32(a1 + (17) * 8, 0x0)[1] = v28;
    FIELD_U32(a1 + (18) * 8, 0x0)[0] = result;
    v11.n64_u32[1] = FIELD_U32(a1 + (13) * 8, 0x0)[0];
    v12 = FIELD_U32(a1 + (13) * 8, 0x0)[1];
  }
LABEL_19:
  FIELD_U32(a1 + (8) * 8, 0x0)[0] = v22;
  FIELD_U32(a1 + (8) * 8, 0x0)[1] = v11.n64_u32[1];
  FIELD_U32(a1 + (9) * 8, 0x0)[0] = v12;
  a1[12].n64_u32[1] = v22;
  FIELD_U32(a1 + (13) * 8, 0x0)[0] = v11.n64_u32[1];
  FIELD_U32(a1 + (13) * 8, 0x0)[1] = v12;
  return result;
}
