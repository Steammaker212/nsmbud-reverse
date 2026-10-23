/* sub_603FA204
 * address: 0x603FA204   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FA204(_DWORD *a1, int *a2)
{
  int result; // r0
  int v5; // r0
  int *v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  _BYTE v26[120]; // [sp+0h] [bp-78h] BYREF

  result = *a2;
  if ( *a2 == 2 )
  {
    sub_60239158(dword_60C8D9DC, a2, 14, 0);
    sub_60239158(dword_60C8D9DC, a2, 13, 0);
    v5 = dword_60C8D9DC;
    v6 = a2;
    v7 = 15;
    return sub_60239158(v5, v6, v7, 0);
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
    sub_60239158(dword_60C8D9DC, a2, 10, 0);
    v5 = dword_60C8D9DC;
    v6 = a2;
    v7 = 11;
    return sub_60239158(v5, v6, v7, 0);
  }
  v8 = sub_6090B350(v26);
  v26[89] = 0;
  sub_6090B4B0(v8, a2[10]);
  if ( AreaTask_intance )
    sub_603F4FD8(AreaTask_intance, (int)a2);
  v9 = a1[58];
  if ( v9 )
    sub_604FE788(v9, a2);
  sub_603EFC40(dword_60C99D6C, (int)a2);
  v10 = a1[62];
  if ( v10 )
    sub_604811D4(v10);
  v11 = a1[63];
  if ( v11 )
    sub_604811D4(v11);
  v12 = a1[49];
  if ( v12 )
    sub_604E8710(v12, a2);
  v13 = a1[50];
  if ( v13 )
    sub_60550B84(v13, a2);
  v14 = a1[51];
  if ( v14 )
    sub_6055A604(v14, a2);
  v15 = a1[52];
  if ( v15 )
    sub_604BC580(v15, a2);
  v16 = a1[55];
  if ( v16 )
    sub_6054BDBC(v16, a2);
  v17 = a1[56];
  if ( v17 )
    sub_6054B6D4(v17, a2);
  v18 = a1[57];
  if ( v18 )
    sub_6054A134(v18, a2);
  v19 = a1[53];
  if ( v19 )
    sub_604830AC(v19, a2);
  v20 = a1[54];
  if ( v20 )
    sub_60485068(v20, a2);
  if ( dword_60CA2674 )
    sub_604BBBA4(dword_60CA2674, a2);
  if ( dword_60CAD908 )
    sub_60559CE4(dword_60CAD908, a2);
  v21 = a1[65];
  if ( v21 )
    sub_6055B46C(v21, a2);
  v22 = a1[66];
  if ( v22 )
    sub_6054D180(v22, a2);
  v23 = a1[67];
  if ( v23 )
    sub_6055026C(v23, a2);
  v24 = a1[64];
  if ( v24 )
    sub_6052DC30(v24, a2);
  sub_605425EC(dword_60CABDE4, a2);
  sub_603F808C(dword_60C99DD0);
  if ( dword_60CA83DC )
    sub_60511584(dword_60CA83DC, a2);
  if ( dword_60CA7344 )
    nullsub_32(dword_60CA7344, a2);
  v25 = a1[59];
  if ( v25 )
    sub_60548F10(v25, a2);
  if ( dword_60CA059C )
    sub_604998E4(dword_60CA059C, a2);
  if ( dword_60C9F2CC )
    sub_604DE958(dword_60C9F2CC, a2);
  sub_60401F74(dword_60C99E68, a2);
  return sub_607312F4(dword_60CBDBF8, a2);
}
