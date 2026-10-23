/* CollisionMgr_process_helper_14D020
 * address: 0x6014D020   size: 1632   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_process_helper_14D020(int a1)
{
  int result; // r0
  char v3; // r12
  char v4; // r3
  char v5; // r1
  char v6; // r2
  char v7; // r3
  char v8; // r1
  char v9; // r3
  char v10; // r1
  char v11; // lr
  char v12; // r5
  char v13; // r1
  char v14; // r7
  char v15; // r3
  char v16; // r3
  char v17; // r0
  char *v18; // r0
  char v19; // r2
  char v20; // lr
  char v21; // r12
  char v22; // r5
  char v23; // r8
  char v24; // r9
  char v25; // r6
  char v26; // r1
  char v27; // r1
  char v28; // r2
  char v29; // r3
  char v30; // r6
  char v31; // r5
  char v32; // r7
  char v33; // r3
  _BYTE *v34; // r0
  char v35; // t1
  char v36; // r3
  char *v37; // r0
  char v38; // r2
  char v39; // lr
  char v40; // r12
  char v41; // r5
  char v42; // r8
  char v43; // r9
  char v44; // r6
  char v45; // r1
  char v46; // r1
  char v47; // r2
  char v48; // lr
  char v49; // r6
  char v50; // r5
  char v51; // r7
  char v52; // r3
  _BYTE *v53; // r0
  char v54; // t1
  char v55; // r2
  char *v56; // r0
  char v57; // r2
  char v58; // lr
  char v59; // r12
  char v60; // r5
  char v61; // r8
  char v62; // r9
  char v63; // r6
  char v64; // r1
  char v65; // r1
  char v66; // r2
  char v67; // lr
  char v68; // r6
  char v69; // r5
  char v70; // r3
  char v71; // r1
  _BYTE *v72; // r0
  char v73; // t1
  char v74; // r3

  qmemcpy((void *)(a1 + 2452), (const void *)(a1 + 2404), 0x30u);
  result = FIELD_U8(a1, 2338);
  if ( FIELD_U8(a1, 2338) )
  {
    FIELD_U8(a1, 2338) = 0;
    if ( FIELD_U8(a1, 2341) )
    {
      FIELD_U8(a1, 2341) = 0;
      if ( FIELD_U8(a1, 2345) )
      {
        FIELD_U8(a1, 2345) = 0;
        FIELD_U8(a1, 2349) = 0;
        FIELD_U32(a1, 2404) = 0;
        FIELD_U32(a1, 2408) = 0;
        FIELD_U32(a1, 2412) = 0;
      }
      else
      {
        if ( !FIELD_U8(a1, 2349) )
        {
          v3 = FIELD_U8(a1, 2356);
          FIELD_U8(a1, 2461) = FIELD_U8(a1, 2365);
          v4 = FIELD_U8(a1, 2357);
          v5 = FIELD_U8(a1, 2358);
          v6 = FIELD_U8(a1, 2359);
          FIELD_U8(a1, 2457) = FIELD_U8(a1, 2361);
          FIELD_U8(a1, 2453) = v4;
          FIELD_U8(a1, 2452) = v3;
          FIELD_U8(a1, 2455) = v6;
          FIELD_U8(a1, 2454) = v5;
          v7 = FIELD_U8(a1, 2366);
          v8 = FIELD_U8(a1, 2367);
          FIELD_U8(a1, 2460) = FIELD_U8(a1, 2364);
          FIELD_U8(a1, 2463) = v8;
          FIELD_U8(a1, 2462) = v7;
          v9 = FIELD_U8(a1, 2362);
          v10 = FIELD_U8(a1, 2363);
          FIELD_U8(a1, 2456) = FIELD_U8(a1, 2360);
          FIELD_U8(a1, 2459) = v10;
          FIELD_U8(a1, 2458) = v9;
        }
        FIELD_U8(a1, 2349) = 1;
        FIELD_U8(a1, 2413) = FIELD_U8(a1, 2365);
        FIELD_U8(a1, 2409) = FIELD_U8(a1, 2361);
        v11 = FIELD_U8(a1, 2356);
        v12 = FIELD_U8(a1, 2358);
        v13 = FIELD_U8(a1, 2359);
        FIELD_U8(a1, 2405) = FIELD_U8(a1, 2357);
        FIELD_U8(a1, 2404) = v11;
        FIELD_U8(a1, 2407) = v13;
        FIELD_U8(a1, 2406) = v12;
        v14 = FIELD_U8(a1, 2366);
        v15 = FIELD_U8(a1, 2367);
        FIELD_U8(a1, 2412) = FIELD_U8(a1, 2364);
        FIELD_U8(a1, 2415) = v15;
        FIELD_U8(a1, 2414) = v14;
        v16 = FIELD_U8(a1, 2362);
        v17 = FIELD_U8(a1, 2363);
        FIELD_U8(a1, 2408) = FIELD_U8(a1, 2360);
        FIELD_U8(a1, 2411) = v17;
        FIELD_U8(a1, 2410) = v16;
      }
    }
    if ( FIELD_U8(a1, 2342) )
    {
      FIELD_U8(a1, 2342) = 0;
      if ( FIELD_U8(a1, 2346) )
      {
        FIELD_U8(a1, 2346) = 0;
        FIELD_U8(a1, 2350) = 0;
        FIELD_U32(a1, 2416) = 0;
        FIELD_U32(a1, 2420) = 0;
        FIELD_U32(a1, 2424) = 0;
      }
      else
      {
        if ( FIELD_U8(a1, 2350) )
        {
          v18 = (char *)(a1 + 2368);
        }
        else
        {
          v19 = FIELD_U8(a1, 2376);
          v20 = FIELD_U8(a1, 2372);
          v18 = (char *)(a1 + 2368);
          v21 = FIELD_U8(a1, 2368);
          FIELD_U8(a1, 2473) = FIELD_U8(a1, 2377);
          v22 = FIELD_U8(a1, 2369);
          v23 = FIELD_U8(a1, 2370);
          v24 = FIELD_U8(a1, 2371);
          FIELD_U8(a1, 2469) = FIELD_U8(a1, 2373);
          FIELD_U8(a1, 2465) = v22;
          v25 = FIELD_U8(a1, 2379);
          v26 = FIELD_U8(a1, 2378);
          FIELD_U8(a1, 2472) = v19;
          FIELD_U8(a1, 2475) = v25;
          FIELD_U8(a1, 2474) = v26;
          v27 = FIELD_U8(a1, 2375);
          v28 = FIELD_U8(a1, 2374);
          FIELD_U8(a1, 2468) = v20;
          FIELD_U8(a1, 2471) = v27;
          FIELD_U8(a1, 2470) = v28;
          FIELD_U8(a1, 2464) = v21;
          FIELD_U8(a1, 2467) = v24;
          FIELD_U8(a1, 2466) = v23;
        }
        FIELD_U8(a1, 2350) = 1;
        FIELD_U8(a1, 2425) = v18[9];
        FIELD_U8(a1, 2421) = v18[5];
        v29 = *v18;
        v30 = v18[2];
        v31 = v18[3];
        FIELD_U8(a1, 2417) = v18[1];
        FIELD_U8(a1, 2416) = v29;
        FIELD_U8(a1, 2419) = v31;
        FIELD_U8(a1, 2418) = v30;
        v32 = v18[10];
        v33 = v18[11];
        FIELD_U8(a1, 2424) = v18[8];
        FIELD_U8(a1, 2427) = v33;
        FIELD_U8(a1, 2426) = v32;
        v35 = v18[4];
        v34 = v18 + 4;
        v36 = v34[2];
        LOBYTE(v34) = v34[3];
        FIELD_U8(a1, 2420) = v35;
        FIELD_U8(a1, 2423) = (_BYTE)v34;
        FIELD_U8(a1, 2422) = v36;
      }
    }
    if ( FIELD_U8(a1, 2343) )
    {
      FIELD_U8(a1, 2343) = 0;
      if ( FIELD_U8(a1, 2347) )
      {
        FIELD_U8(a1, 2347) = 0;
        FIELD_U8(a1, 2351) = 0;
        FIELD_U32(a1, 2428) = 0;
        FIELD_U32(a1, 2432) = 0;
        FIELD_U32(a1, 2436) = 0;
      }
      else
      {
        if ( FIELD_U8(a1, 2351) )
        {
          v37 = (char *)(a1 + 2380);
        }
        else
        {
          v38 = FIELD_U8(a1, 2388);
          v39 = FIELD_U8(a1, 2384);
          v37 = (char *)(a1 + 2380);
          v40 = FIELD_U8(a1, 2380);
          FIELD_U8(a1, 2485) = FIELD_U8(a1, 2389);
          v41 = FIELD_U8(a1, 2381);
          v42 = FIELD_U8(a1, 2382);
          v43 = FIELD_U8(a1, 2383);
          FIELD_U8(a1, 2481) = FIELD_U8(a1, 2385);
          FIELD_U8(a1, 2477) = v41;
          v44 = FIELD_U8(a1, 2391);
          v45 = FIELD_U8(a1, 2390);
          FIELD_U8(a1, 2484) = v38;
          FIELD_U8(a1, 2487) = v44;
          FIELD_U8(a1, 2486) = v45;
          v46 = FIELD_U8(a1, 2387);
          v47 = FIELD_U8(a1, 2386);
          FIELD_U8(a1, 2480) = v39;
          FIELD_U8(a1, 2483) = v46;
          FIELD_U8(a1, 2482) = v47;
          FIELD_U8(a1, 2476) = v40;
          FIELD_U8(a1, 2479) = v43;
          FIELD_U8(a1, 2478) = v42;
        }
        FIELD_U8(a1, 2351) = 1;
        FIELD_U8(a1, 2437) = v37[9];
        FIELD_U8(a1, 2433) = v37[5];
        v48 = *v37;
        v49 = v37[2];
        v50 = v37[3];
        FIELD_U8(a1, 2429) = v37[1];
        FIELD_U8(a1, 2428) = v48;
        FIELD_U8(a1, 2431) = v50;
        FIELD_U8(a1, 2430) = v49;
        v51 = v37[10];
        v52 = v37[11];
        FIELD_U8(a1, 2436) = v37[8];
        FIELD_U8(a1, 2439) = v52;
        FIELD_U8(a1, 2438) = v51;
        v54 = v37[4];
        v53 = v37 + 4;
        v55 = v53[2];
        LOBYTE(v53) = v53[3];
        FIELD_U8(a1, 2432) = v54;
        FIELD_U8(a1, 2435) = (_BYTE)v53;
        FIELD_U8(a1, 2434) = v55;
      }
    }
    result = FIELD_U8(a1, 2344);
    if ( FIELD_U8(a1, 2344) )
    {
      result = 0;
      FIELD_U8(a1, 2344) = 0;
      if ( FIELD_U8(a1, 2348) )
      {
        FIELD_U8(a1, 2348) = 0;
        FIELD_U8(a1, 2352) = 0;
        FIELD_U32(a1, 2440) = 0;
        FIELD_U32(a1, 2444) = 0;
        FIELD_U32(a1, 2448) = 0;
      }
      else
      {
        if ( FIELD_U8(a1, 2352) )
        {
          v56 = (char *)(a1 + 2392);
        }
        else
        {
          v57 = FIELD_U8(a1, 2400);
          v58 = FIELD_U8(a1, 2396);
          v56 = (char *)(a1 + 2392);
          v59 = FIELD_U8(a1, 2392);
          FIELD_U8(a1, 2497) = FIELD_U8(a1, 2401);
          v60 = FIELD_U8(a1, 2393);
          v61 = FIELD_U8(a1, 2394);
          v62 = FIELD_U8(a1, 2395);
          FIELD_U8(a1, 2493) = FIELD_U8(a1, 2397);
          FIELD_U8(a1, 2489) = v60;
          v63 = FIELD_U8(a1, 2403);
          v64 = FIELD_U8(a1, 2402);
          FIELD_U8(a1, 2496) = v57;
          FIELD_U8(a1, 2499) = v63;
          FIELD_U8(a1, 2498) = v64;
          v65 = FIELD_U8(a1, 2399);
          v66 = FIELD_U8(a1, 2398);
          FIELD_U8(a1, 2492) = v58;
          FIELD_U8(a1, 2495) = v65;
          FIELD_U8(a1, 2494) = v66;
          FIELD_U8(a1, 2488) = v59;
          FIELD_U8(a1, 2491) = v62;
          FIELD_U8(a1, 2490) = v61;
        }
        FIELD_U8(a1, 2352) = 1;
        FIELD_U8(a1, 2449) = v56[9];
        FIELD_U8(a1, 2445) = v56[5];
        v67 = *v56;
        v68 = v56[2];
        v69 = v56[3];
        FIELD_U8(a1, 2441) = v56[1];
        FIELD_U8(a1, 2440) = v67;
        FIELD_U8(a1, 2443) = v69;
        FIELD_U8(a1, 2442) = v68;
        v70 = v56[10];
        v71 = v56[11];
        FIELD_U8(a1, 2448) = v56[8];
        FIELD_U8(a1, 2451) = v71;
        FIELD_U8(a1, 2450) = v70;
        v73 = v56[4];
        v72 = v56 + 4;
        v74 = v72[2];
        result = (unsigned __int8)v72[3];
        FIELD_U8(a1, 2444) = v73;
        FIELD_U8(a1, 2447) = result;
        FIELD_U8(a1, 2446) = v74;
      }
    }
  }
  return result;
}
