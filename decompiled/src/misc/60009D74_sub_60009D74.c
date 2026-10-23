/* sub_60009D74
 * address: 0x60009D74   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60009D74(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r5
  int v6; // r6
  _BYTE *v7; // r4

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
  result = 256;
  v3 = 0;
  do
  {
    v4 = a1 + v3;
    v3 += 20;
    FIELD_U32(v4, 284) = 0;
    FIELD_U32(v4, 288) = 0;
    FIELD_U32(v4, 292) = 0;
    FIELD_U32(v4, 296) = 256;
    FIELD_U16(v4, 300) = 0;
  }
  while ( v3 != 640 );
  FIELD_U32(a1, 948) = 0;
  FIELD_U32(a1, 952) = 0;
  FIELD_U32(a1, 956) = 0;
  FIELD_U32(a1, 960) = 0;
  v5 = FIELD_U32(a1, 972);
  if ( v5 != a1 + 968 )
  {
    do
    {
      v6 = FIELD_U32(v5, 4);
      sead__ListNode__erase(v5);
      --FIELD_U32(a1, 976);
      *(_DWORD *)(v5 - 4) = FIELD_U32(a1, 980);
      result = v5 - 4;
      v5 = v6;
      FIELD_U32(a1, 980) = result;
    }
    while ( v6 != a1 + 968 );
  }
  FIELD_U8(a1, 2528) = 0;
  v7 = (_BYTE *)(a1 + 2528);
  v7[12] = 0;
  v7 += 12;
  *(v7 - 4) = 0;
  v7 -= 4;
  *(v7 - 4) = 0;
  v7 -= 4;
  v7[11] = 0;
  v7[10] = 0;
  v7[9] = 0;
  v7[7] = 0;
  v7[6] = 0;
  v7[5] = 0;
  v7[3] = 0;
  v7[2] = 0;
  v7[1] = 0;
  *(v7 - 1) = 0;
  *(v7 - 2) = 0;
  *(v7 - 3) = 0;
  v7[12] = 0;
  return result;
}
