/* CollisionMgr_vf14
 * address: 0x6014B310   size: 892   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_vf14(int a1)
{
  int v2; // r1
  int v3; // r4
  int v4; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r4
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r4
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  int v16; // r1
  int v17; // r4
  int v18; // r0
  bool v19; // zf
  int v20; // r2
  _DWORD *v21; // r4
  _DWORD *v22; // r3

  FIELD_U32(a1, 88) = 0;
  if ( (FIELD_U8(a1, 2224) & 1) != 0 )
  {
    v2 = FIELD_U32(a1, 2572);
    if ( v2 <= 5 )
    {
      v3 = a1 + 56 * v2;
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v3, 3628));
      v5 = v4 == 0;
      if ( v4 )
        v5 = FIELD_U32(v3, 3632) == 0;
      if ( !v5 )
        sub_6016024C();
    }
  }
  if ( (FIELD_U32(a1, 2224) & 0x10400) == 0x400 )
  {
    v6 = FIELD_U32(a1, 2568);
    if ( v6 <= 5 )
    {
      v7 = a1 + 56 * v6;
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v7, 3292));
      v9 = v8 == 0;
      if ( v8 )
        v9 = FIELD_U32(v7, 3296) == 0;
      if ( !v9 )
        sub_601602C0();
    }
  }
  v10 = FIELD_U32(a1, 2224);
  if ( (v10 & 0x440000) != 0 && (v10 & 0x10000000) == 0 )
  {
    v11 = FIELD_U32(a1, 2560);
    if ( v11 <= 5 )
    {
      v12 = a1 + 56 * v11;
      v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v12, 2620));
      v14 = v13 == 0;
      if ( v13 )
        v14 = FIELD_U32(v12, 2624) == 0;
      if ( !v14 )
        sub_60160334();
    }
  }
  v15 = FIELD_U32(a1, 2224);
  if ( (v15 & 0x880000) != 0 && (v15 & 0x20000000) == 0 )
  {
    v16 = FIELD_U32(a1, 2564);
    if ( v16 <= 5 )
    {
      v17 = a1 + 56 * v16;
      v18 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v17, 2956));
      v19 = v18 == 0;
      if ( v18 )
        v19 = FIELD_U32(v17, 2960) == 0;
      if ( !v19 )
        sub_601603AC();
    }
  }
  FIELD_U8(a1, 2229) = 0;
  FIELD_U8(a1, 2225) = 0;
  FIELD_U8(a1, 2228) = 0;
  FIELD_U8(a1, 2231) = 0;
  FIELD_U8(a1, 2230) = 0;
  FIELD_U8(a1, 2224) = 0;
  FIELD_U8(a1, 2227) = 0;
  FIELD_U8(a1, 2226) = 0;
  FIELD_U8(a1, 2336) = 0;
  FIELD_U8(a1, 2572) = 6;
  FIELD_U8(a1, 2568) = 6;
  FIELD_U8(a1, 2564) = 6;
  FIELD_U8(a1, 2560) = 6;
  FIELD_U8(a1, 2575) = 6;
  FIELD_U8(a1, 2574) = 6;
  FIELD_U8(a1, 2573) = 6;
  FIELD_U8(a1, 2571) = 6;
  FIELD_U8(a1, 2570) = 6;
  FIELD_U8(a1, 2569) = 6;
  FIELD_U8(a1, 2567) = 6;
  FIELD_U8(a1, 2566) = 6;
  FIELD_U8(a1, 2565) = 6;
  FIELD_U8(a1, 2563) = 6;
  FIELD_U8(a1, 2562) = 6;
  FIELD_U8(a1, 2561) = 6;
  FIELD_U8(a1, 2525) = 0;
  FIELD_U8(a1, 2524) = 0;
  memset((void *)(a1 + 5280), 0, 0x40u);
  v20 = 0;
  do
  {
    v21 = (_DWORD *)(a1 + 2760 + v20);
    v22 = (_DWORD *)(a1 + v20);
    v20 += 336;
    *(v21 - 31) = 0;
    *(v21 - 32) = 0;
    v22[648] = 0;
    v22[649] = -1;
    v22[660] = 0;
    v22[661] = 0;
    *(v21 - 34) = 0;
    *(v21 - 35) = 0;
    *(v21 - 36) = 0;
    *(v21 - 37) = 0;
    *(v21 - 38) = 0;
    *(v21 - 39) = 0;
    *(v21 - 40) = 0;
    v22[673] = 0;
    v22[672] = 0;
    v22[662] = 0;
    v22[663] = -1;
    *(v21 - 16) = 0;
    v22[675] = 0;
    v22[670] = 0;
    v22[669] = 0;
    v22[668] = 0;
    v22[667] = 0;
    v22[666] = 0;
    v22[665] = 0;
    v22[664] = 0;
    *(v21 - 3) = 0;
    *(v21 - 4) = 0;
    v22[676] = 0;
    v22[677] = -1;
    v22[688] = 0;
    v22[689] = 0;
    *(v21 - 6) = 0;
    *(v21 - 7) = 0;
    *(v21 - 8) = 0;
    *(v21 - 9) = 0;
    *(v21 - 10) = 0;
    *(v21 - 11) = 0;
    *(v21 - 12) = 0;
    v22[701] = 0;
    v22[700] = 0;
    v22[690] = 0;
    v22[691] = -1;
    v21[12] = 0;
    v22[703] = 0;
    v22[698] = 0;
    v22[697] = 0;
    v22[696] = 0;
    v22[695] = 0;
    v22[694] = 0;
    v22[693] = 0;
    v22[692] = 0;
    v21[25] = 0;
    v21[24] = 0;
    v22[704] = 0;
    v22[705] = -1;
    v22[716] = 0;
    v22[717] = 0;
    v21[22] = 0;
    v21[21] = 0;
    v21[20] = 0;
    v21[19] = 0;
    v21[18] = 0;
    v21[17] = 0;
    v21[16] = 0;
    v22[729] = 0;
    v22[728] = 0;
    v22[718] = 0;
    v22[719] = -1;
    v21[40] = 0;
    v22[731] = 0;
    v22[726] = 0;
    v22[725] = 0;
    v22[724] = 0;
    v22[723] = 0;
    v22[722] = 0;
    v22[721] = 0;
    v22[720] = 0;
  }
  while ( v20 != 1344 );
  FIELD_U32(a1, 2320) = 0;
  FIELD_U32(a1, 2324) = 0;
  FIELD_U32(a1, 2328) = 0;
  FIELD_U32(a1, 5344) = 0;
  return 0;
}
