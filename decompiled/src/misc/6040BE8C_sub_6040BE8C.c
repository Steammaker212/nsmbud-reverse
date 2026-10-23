/* sub_6040BE8C
 * address: 0x6040BE8C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040BE8C(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r0
  int i; // r6
  int v6; // r7
  unsigned int v8[13]; // [sp+4h] [bp-34h] BYREF

  FIELD_U32(a1, 16) = &off_60BF9B1C;
  FIELD_U32(a1, 20) = &off_60BF9B2C;
  FIELD_U32(a1, 24) = &off_60BF9B50;
  FIELD_U32(a1, 28) = a1;
  FIELD_U32(a1, 32) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 36), (StateExecuter *)(a1 + 20), &NullState);
  FIELD_U32(a1, 16) = &off_60BF9B0C;
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  sub_6045BF30();
  FIELD_U32(a1, 2096) = 0;
  FIELD_U8(a1, 2084) = 0;
  FIELD_U32(a1, 2080) = 0;
  FIELD_U32(a1, 2076) = 0;
  FIELD_U32(a1, 2072) = 0;
  FIELD_U32(a1, 2092) = a1 + 2088;
  FIELD_U32(a1, 2088) = a1 + 2088;
  FIELD_U32(a1, 2100) = a1 + 2112;
  FIELD_U32(a1, 2112) = a1 + 2124;
  FIELD_U32(a1, 2124) = a1 + 2136;
  FIELD_U32(a1, 2136) = a1 + 2148;
  FIELD_U32(a1, 2148) = a1 + 2160;
  FIELD_U32(a1, 2160) = a1 + 2172;
  FIELD_U32(a1, 2172) = a1 + 2184;
  FIELD_U32(a1, 2184) = a1 + 2196;
  FIELD_U32(a1, 2196) = a1 + 2208;
  FIELD_U32(a1, 2208) = 0;
  FIELD_U32(a1, 2104) = a1 + 2112;
  FIELD_U32(a1, 2108) = 9;
  FIELD_U32(a1, 2220) = 0;
  FIELD_U32(a1, 2224) = 180;
  sub_6045BF58(a1 + 52, 0);
  sub_6045BF58(a1 + 456, 1);
  sub_6045BF58(a1 + 860, 2);
  sub_6045BF58(a1 + 1264, 3);
  sub_6045BF58(a1 + 1668, 4);
  v2 = FIELD_U32(a1, 2092);
  if ( v2 != a1 + 2088 )
  {
    do
    {
      v3 = FIELD_U32(v2, 4);
      sead__ListNode__erase(v2);
      --FIELD_U32(a1, 2096);
      *(_DWORD *)(v2 - 4) = FIELD_U32(a1, 2100);
      v4 = v2 - 4;
      v2 = v3;
      FIELD_U32(a1, 2100) = v4;
    }
    while ( v3 != a1 + 2088 );
  }
  for ( i = 0; i != 9; ++i )
  {
    v6 = FIELD_U32(a1, 2100);
    if ( v6 )
      FIELD_U32(a1, 2100) = *(_DWORD *)v6;
    else
      v6 = 0;
    *(_DWORD *)v6 = 0;
    FIELD_U32(v6, 4) = 0;
    FIELD_U32(v6, 8) = 0;
    sead__ListNode__insertFront((sead_ListNode *)(a1 + 2088), (sead_ListNode *)(v6 + 4));
    ++FIELD_U32(a1, 2096);
    *(_DWORD *)v6 = i;
  }
  sead__Random__init(v8);
  sub_608DE844(a1 + 2088, v8);
  return a1;
}
