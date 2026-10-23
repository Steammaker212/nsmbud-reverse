/* sub_60009BA4
 * address: 0x60009BA4   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60009BA4(int a1)
{
  int v2; // r2
  int v3; // r6
  int v4; // r1
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r5
  int v9; // r7
  int v10; // r0

  FIELD_U32(a1, 976) = 0;
  memset((void *)(a1 + 100), 0, 64);
  v2 = -1512;
  v3 = a1 + 968;
  v4 = 1004;
  FIELD_U32(a1, 972) = a1 + 968;
  FIELD_U32(a1, 968) = a1 + 968;
  FIELD_U32(a1, 980) = a1 + 992;
  FIELD_U32(a1, 984) = 0;
  FIELD_U32(a1, 988) = 0;
  while ( 1 )
  {
    v5 = a1 + v2;
    *(_DWORD *)(a1 + v2 + 2504) = a1 + v4;
    if ( !v2 )
      break;
    v2 += 24;
    *(_DWORD *)(a1 + v4) = v5 + 2528;
    v4 += 24;
  }
  FIELD_U32(a1, 2516) = 0;
  FIELD_U32(a1, 984) = a1 + 992;
  FIELD_U32(a1, 988) = 128;
  FIELD_U32(a1, 16) = -973471744;
  FIELD_U8(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 924) = 1176256512;
  FIELD_U8(a1, 928) = 0;
  FIELD_U32(a1, 932) = 0;
  FIELD_U8(a1, 936) = -1;
  FIELD_U32(a1, 964) = 0;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 280) = 0;
  memset((void *)(a1 + 36), 0, 154);
  memset((void *)(a1 + 192), 0, 38);
  memset((void *)(a1 + 232), 0, 41);
  v6 = 0;
  do
  {
    v7 = a1 + v6;
    v6 += 20;
    FIELD_U32(v7, 284) = 0;
    FIELD_U32(v7, 288) = 0;
    FIELD_U32(v7, 292) = 0;
    FIELD_U32(v7, 296) = 256;
    FIELD_U16(v7, 300) = 0;
  }
  while ( v6 != 640 );
  FIELD_U32(a1, 948) = 0;
  FIELD_U32(a1, 952) = 0;
  FIELD_U32(a1, 956) = 0;
  FIELD_U32(a1, 960) = 0;
  v8 = FIELD_U32(a1, 972);
  if ( v8 != v3 )
  {
    do
    {
      v9 = FIELD_U32(v8, 4);
      sead__ListNode__erase(v8);
      --FIELD_U32(a1, 976);
      *(_DWORD *)(v8 - 4) = FIELD_U32(a1, 980);
      v10 = v8 - 4;
      v8 = v9;
      FIELD_U32(a1, 980) = v10;
    }
    while ( v9 != v3 );
  }
  FIELD_U8(a1, 2541) = 0;
  FIELD_U8(a1, 2537) = 0;
  FIELD_U8(a1, 2533) = 0;
  FIELD_U8(a1, 2529) = 0;
  FIELD_U8(a1, 2544) = 0;
  FIELD_U8(a1, 2540) = 0;
  FIELD_U8(a1, 2543) = 0;
  FIELD_U8(a1, 2542) = 0;
  FIELD_U8(a1, 2536) = 0;
  FIELD_U8(a1, 2539) = 0;
  FIELD_U8(a1, 2538) = 0;
  FIELD_U8(a1, 2532) = 0;
  FIELD_U8(a1, 2535) = 0;
  FIELD_U8(a1, 2534) = 0;
  FIELD_U8(a1, 2528) = 0;
  FIELD_U8(a1, 2531) = 0;
  FIELD_U8(a1, 2530) = 0;
  return a1;
}
