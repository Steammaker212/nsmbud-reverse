/* sub_6088ECAC
 * address: 0x6088ECAC   size: 2928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6088ECAC(int a1, int a2, int a3, int a4)
{
  int v7; // r1
  int v8; // r5
  int v9; // r8
  int v10; // r6
  unsigned int v11; // r12
  int v12; // r11
  unsigned int v13; // r2
  unsigned int v14; // r7
  int v15; // r3
  unsigned int v16; // r5
  unsigned int v17; // r6
  unsigned int v18; // r5
  nn__lmem *v19; // r0
  int v20; // r3
  int FrameHeap; // r5
  void *v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r8
  void *v28; // r0
  _DWORD *v29; // r5
  _DWORD *v30; // r7
  int v31; // r0
  int v32; // r1
  int v33; // r0
  int v34; // r5
  int v35; // r5
  int v36; // r0
  int v37; // r1
  unsigned int v38; // r2
  int v39; // r3
  int v40; // r3
  int v41; // r1
  unsigned int v42; // r2
  int v43; // r0
  int v44; // r0
  unsigned int v45; // r2
  int v46; // r1
  int v47; // r1
  int v48; // r0
  int v49; // r6
  int v50; // r10
  int v51; // r9
  int v52; // r8
  int v53; // r6
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r1
  int v60; // [sp+Ch] [bp-74h]
  int v61; // [sp+18h] [bp-68h]
  int v62; // [sp+18h] [bp-68h]
  int v63; // [sp+38h] [bp-48h] BYREF
  int v64; // [sp+3Ch] [bp-44h]
  int v65; // [sp+40h] [bp-40h]
  int v66; // [sp+44h] [bp-3Ch]
  int v67; // [sp+48h] [bp-38h]
  int v68; // [sp+4Ch] [bp-34h]
  int v69; // [sp+50h] [bp-30h]
  int v70; // [sp+54h] [bp-2Ch]

  FIELD_U32(a1, 32) = FIELD_U32(a4, 4);
  FIELD_U32(a1, 60) = FIELD_U32(a4, 32);
  FIELD_U32(a1, 56) = FIELD_U32(a4, 32) + 32;
  FIELD_U32(a1, 64) = FIELD_U32(a4, 20);
  FIELD_U32(a1, 68) = FIELD_U32(a4, 16);
  FIELD_U32(a1, 4) = FIELD_U32(a4, 48);
  FIELD_U32(a1, 96) = FIELD_U32(a4, 24);
  FIELD_U32(a1, 100) = FIELD_U32(a4, 28);
  FIELD_U32(a1, 40) = a2;
  FIELD_U8(a1, 30) = FIELD_U8(a4, 52);
  v61 = a1 + 36;
  sub_60882010(a1 + 36);
  sub_608820C0(a3);
  FIELD_U32(a1, 3368) = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 8))(a3);
  v70 = 0;
  v69 = 0;
  v68 = 0;
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  sub_6083D5C0(&v63);
  v63 = 18;
  sub_6083650C();
  v70 = 0;
  v69 = 0;
  v68 = 0;
  v67 = 0;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  sub_6083D5C0(&v63);
  v63 = 18;
  sub_60836514();
  FIELD_U32(a1, 3372) = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 8))(a3);
  sub_60897044();
  v7 = 2;
  if ( FIELD_U8(a1, 30) )
    v7 = 3;
  FIELD_U32(a1, 52) = v7;
  Texture_Sampler_Table_Already_Created_ref(FIELD_U32(a1, 32), v61);
  v8 = sub_608820AC();
  sub_608821A8(2 * FIELD_U32(a1, 68));
  FIELD_U32(a1, 2368) = sub_608820AC() - v8;
  sub_60882388(FIELD_U8(a4, 44));
  FIELD_U8(a1, 26) = 1;
  FIELD_U8(a1, 27) = 1;
  FIELD_U8(a1, 28) = 1;
  FIELD_U8(a1, 29) = FIELD_U8(a4, 55);
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  v9 = FIELD_U32(a1, 68);
  FIELD_U32(a1, 84) = v9;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  memset((void *)(a1 + 2404), 0, 60);
  v10 = FIELD_U32(a4, 40);
  FIELD_U32(a1, 2472) = v10;
  FIELD_U32(a1, 2272) = 0;
  FIELD_U32(a1, 2276) = 0;
  memset((void *)(a1 + 116), 0, 1032);
  FIELD_U32(a1, 2344) = 0;
  FIELD_U32(a1, 2348) = 0;
  FIELD_U32(a1, 2352) = 0;
  FIELD_U32(a1, 2356) = 0;
  memset((void *)(a1 + 2480), 0, 40);
  v11 = (4 * FIELD_U32(a1, 56) + 15) & 0xFFFFFFF0;
  FIELD_U32(a1, 2372) = v11;
  v12 = FIELD_U32(a1, 64);
  FIELD_U32(a1, 2376) = 560 * v12;
  v13 = (4 * v12 + 15) & 0xFFFFFFF0;
  FIELD_U32(a1, 2380) = v13;
  FIELD_U32(a1, 2384) = 1488 * v9;
  v14 = (4 * v9 + 15) & 0xFFFFFFF0;
  FIELD_U32(a1, 2388) = v14;
  FIELD_U32(a1, 2392) = 80;
  v15 = FIELD_U32(a1, 4);
  v16 = (8 * v10 + 15) & 0xFFFFFFF0;
  FIELD_U32(a1, 2476) = v16 * v15;
  v17 = (8 * v12 + 15) & 0xFFFFFFF0;
  FIELD_U32(a1, 2400) = v17 * v15;
  FIELD_U32(a1, 12) = 2416 * v15;
  FIELD_U32(a1, 20) = 48 * v15;
  v18 = (v11 + 48 * v15 + 560 * v12 + v13 + 1488 * v9 + v14 + v16 * v15 + v17 * v15 + 2416 * v15 + 351) & 0xFFFFFFF0;
  v19 = (nn__lmem *)(*(int (__fastcall **)(_DWORD, unsigned int, int))(**(_DWORD **)(a1 + 40) + 8))(
                      FIELD_U32(a1, 40),
                      v18,
                      256);
  FIELD_U32(a1, 44) += v18;
  ++FIELD_U32(a1, 48);
  FIELD_U32(a1, 2360) = v19;
  FrameHeap = nn__lmem__CreateFrameHeap(v19, (void *)v18, 1u, v20);
  FIELD_U32(a1, 2372) = 4 * FIELD_U32(a1, 56);
  v22 = (void *)nn__lmem__AllocateFromFrameHeap(FrameHeap);
  FIELD_U32(a1, 104) = v22;
  memset(v22, 0, FIELD_U32(a1, 2372));
  v23 = nn__lmem__AllocateFromFrameHeap(FrameHeap);
  FIELD_U32(a1, 108) = v23;
  memset(v23, 0, FIELD_U32(a1, 2376));
  if ( FIELD_S32(a1, 64) >= 1 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      ++v25;
      *(_DWORD *)(FIELD_U32(a1, 108) + v24 + 24) = a1;
      v26 = FIELD_U32(a1, 108) + v24;
      v24 += 560;
      FIELD_U8(v26, 8) = 0;
    }
    while ( v25 < FIELD_U32(a1, 64) );
  }
  FIELD_U32(a1, 1140) = nn__lmem__AllocateFromFrameHeap(FrameHeap);
  v27 = FIELD_U32(a1, 52);
  v60 = FrameHeap;
  v28 = (void *)nn__lmem__AllocateFromFrameHeap(FrameHeap);
  FIELD_U32(a1, 112) = v28;
  memset(v28, 0, FIELD_U32(a1, 2384));
  v29 = *(_DWORD **)(a1 + 32);
  v30 = *(_DWORD **)(a1 + 112);
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v63 = 0;
  sub_6083D5B0(&v63);
  v64 = 16;
  v31 = sub_608352A0(v29, (int)&v63);
  v32 = -v31;
  v33 = v31 + 191;
  if ( v27 != 3 )
    v27 = 2;
  v34 = FIELD_U32(a1, 68) * v27 * (v33 & v32);
  if ( sub_6089632C(a1 + 2520, FIELD_U32(a1, 32), v61, 16, v34) )
    sub_60835528(a1 + 2520, a1 + 2904);
  FIELD_U32(a1, 2396) = v34;
  FIELD_U32(a1, 2920) = 0;
  FIELD_U32(a1, 2924) = sub_608354C4(a1 + 2520);
  if ( FIELD_S32(a1, 68) > 0 )
  {
    v35 = 0;
    do
    {
      sub_60885CB8((int)(v30 + 35));
      sub_608964E8(v30 + 344);
      v36 = 0;
      v30[314] = 0;
      v30[315] = 0;
      v30[316] = 0;
      v30[366] = &off_60C5AAB8;
      v30[367] = 0;
      v30[368] = 0;
      v30[317] = a1 + 2520;
      v30[322] = a1 + 2928;
      v37 = FIELD_U32(a1, 2920);
      v38 = ((FIELD_U32(a1, 2896) + 191) & -FIELD_U32(a1, 2896)) + v37;
      v39 = 0;
      if ( v38 <= FIELD_U32(a1, 2592) )
      {
        v40 = FIELD_U32(a1, 2924);
        FIELD_U32(a1, 2920) = v38;
        v39 = v40 + v37;
      }
      v30[314] = v39;
      v41 = FIELD_U32(a1, 2920);
      v42 = ((FIELD_U32(a1, 2896) + 191) & -FIELD_U32(a1, 2896)) + v41;
      if ( v42 <= FIELD_U32(a1, 2592) )
      {
        v43 = FIELD_U32(a1, 2924);
        FIELD_U32(a1, 2920) = v42;
        v36 = v43 + v41;
      }
      v30[315] = v36;
      if ( FIELD_U8(a1, 30) )
      {
        v44 = FIELD_U32(a1, 2920);
        v45 = ((FIELD_U32(a1, 2896) + 191) & -FIELD_U32(a1, 2896)) + v44;
        v46 = 0;
        if ( v45 <= FIELD_U32(a1, 2592) )
        {
          v47 = FIELD_U32(a1, 2924);
          FIELD_U32(a1, 2920) = v45;
          v46 = v47 + v44;
        }
        v30[316] = v46;
      }
      ++v35;
      v30 += 372;
    }
    while ( v35 < FIELD_U32(a1, 68) );
  }
  sub_608354E0(a1 + 2520);
  nullsub_66();
  v48 = nn__lmem__AllocateFromFrameHeap(v60);
  FIELD_U32(a1, 1148) = sub_60898270(v48, a1);
  v49 = sub_608820AC();
  sub_60885D58();
  FIELD_U32(a1, 2364) = sub_608820AC() - v49;
  sub_60897E40(FIELD_U32(a1, 32), v61);
  FIELD_U8(a1, 1152) = 0;
  FIELD_U32(a1, 1172) = sub_6087ECE8;
  FIELD_U32(a1, 1212) = sub_6087ECF0;
  FIELD_U8(a1, 1153) = 0;
  FIELD_U32(a1, 1216) = sub_6087ECE8;
  FIELD_U32(a1, 1256) = sub_6087ECF0;
  FIELD_U8(a1, 1154) = 0;
  FIELD_U32(a1, 1260) = sub_6087ECE8;
  FIELD_U32(a1, 1300) = sub_6087ECF0;
  FIELD_U8(a1, 1155) = 0;
  FIELD_U32(a1, 1304) = sub_6087ECE8;
  FIELD_U32(a1, 1344) = sub_6087ECF0;
  FIELD_U8(a1, 1156) = 0;
  FIELD_U32(a1, 1348) = sub_6087ECE8;
  FIELD_U32(a1, 1388) = sub_6087ECF0;
  FIELD_U8(a1, 1157) = 0;
  FIELD_U32(a1, 1392) = sub_6087ECE8;
  FIELD_U32(a1, 1432) = sub_6087ECF0;
  FIELD_U8(a1, 1158) = 0;
  FIELD_U32(a1, 1436) = sub_6087ECE8;
  FIELD_U32(a1, 1476) = sub_6087ECF0;
  FIELD_U8(a1, 1159) = 0;
  FIELD_U32(a1, 1480) = sub_6087ECE8;
  FIELD_U32(a1, 1520) = sub_6087ECF0;
  FIELD_U8(a1, 1160) = 0;
  FIELD_U32(a1, 1524) = sub_6087ECE8;
  FIELD_U32(a1, 1564) = sub_6087ECF0;
  FIELD_U8(a1, 1161) = 0;
  FIELD_U32(a1, 1568) = sub_6087ECE8;
  FIELD_U32(a1, 1608) = sub_6087ECF0;
  FIELD_U8(a1, 1162) = 0;
  FIELD_U32(a1, 1612) = sub_6087ECE8;
  FIELD_U32(a1, 1652) = sub_6087ECF0;
  FIELD_U8(a1, 1163) = 0;
  FIELD_U32(a1, 1656) = sub_6087ECE8;
  FIELD_U32(a1, 1696) = sub_6087ECF0;
  FIELD_U8(a1, 1164) = 0;
  FIELD_U32(a1, 1700) = sub_6087ECE8;
  FIELD_U32(a1, 1740) = sub_6087ECF0;
  FIELD_U8(a1, 1165) = 0;
  FIELD_U32(a1, 1744) = sub_6087ECE8;
  FIELD_U32(a1, 1784) = sub_6087ECF0;
  FIELD_U8(a1, 1166) = 0;
  FIELD_U32(a1, 1788) = sub_6087ECE8;
  FIELD_U32(a1, 1828) = sub_6087ECF0;
  FIELD_U8(a1, 1167) = 0;
  FIELD_U32(a1, 1832) = sub_6087ECE8;
  FIELD_U32(a1, 1872) = sub_6087ECF0;
  FIELD_U8(a1, 1168) = 0;
  FIELD_U32(a1, 1876) = sub_6087ECE8;
  FIELD_U32(a1, 1916) = sub_6087ECF0;
  sub_60889028(v61, a1, FIELD_U32(a1, 52), FIELD_U32(a1, 96));
  sub_608A5588(v61, a1, FIELD_U32(a1, 52));
  sub_6088B4A8(v61, a1, FIELD_U32(a1, 52), FIELD_U32(a1, 100));
  sub_608966F8(a1);
  FIELD_U32(a1, 8) = nn__lmem__AllocateFromFrameHeap(v60);
  FIELD_U32(a1, 16) = nn__lmem__AllocateFromFrameHeap(v60);
  v62 = FIELD_U32(a4, 36);
  if ( FIELD_S32(a1, 4) >= 1 )
  {
    v50 = 0;
    v51 = 0;
    v52 = 0;
    do
    {
      *(_DWORD *)(FIELD_U32(a1, 8) + v51) = -1;
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 4) = 0;
      memset((void *)(FIELD_U32(a1, 8) + v51 + 8), 0, 0x100u);
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 264) = 0;
      v53 = FIELD_U32(a1, 8) + v51;
      sub_608353A4(v53 + 304);
      FIELD_U8(v53, 380) = 0;
      sub_6083651C(v53 + 384);
      FIELD_U32(v53, 688) = 0;
      FIELD_U32(v53, 692) = 0;
      FIELD_U32(v53, 696) = 0;
      FIELD_U32(v53, 700) = 0;
      FIELD_U32(v53, 704) = 0;
      FIELD_U32(v53, 708) = 0;
      sub_608353A4(v53 + 712);
      FIELD_U8(v53, 788) = 0;
      sub_6083651C(v53 + 792);
      FIELD_U32(v53, 1096) = 0;
      FIELD_U32(v53, 1100) = 0;
      FIELD_U32(v53, 1104) = 0;
      FIELD_U32(v53, 1108) = 0;
      FIELD_U32(v53, 1112) = 0;
      FIELD_U32(v53, 1116) = 0;
      sub_608353A4(v53 + 1120);
      FIELD_U8(v53, 1196) = 0;
      sub_6083651C(v53 + 1200);
      FIELD_U32(v53, 1504) = 0;
      FIELD_U32(v53, 1508) = 0;
      FIELD_U32(v53, 1512) = 0;
      FIELD_U32(v53, 1516) = 0;
      FIELD_U32(v53, 1520) = 0;
      FIELD_U32(v53, 1524) = 0;
      sub_60895C04(v53 + 272);
      sub_60895AD8(FIELD_U32(a1, 8) + v51 + 272, FIELD_U32(a1, 32), v62, FIELD_U32(a1, 52));
      v54 = FIELD_U32(a1, 8) + v51;
      FIELD_U32(v54, 1864) = -1;
      FIELD_U32(v54, 1868) = -1;
      v55 = FIELD_U32(a1, 8) + v51;
      FIELD_U32(v55, 1872) = -1;
      FIELD_U32(v55, 1876) = -1;
      memset((void *)(FIELD_U32(a1, 8) + v51 + 1880), 0, 0x100u);
      memset((void *)(FIELD_U32(a1, 8) + v51 + 2136), 0, 0x100u);
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 2392) = 0;
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 2396) = 6;
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 2404) = 0;
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 2400) = nn__lmem__AllocateFromFrameHeap(v60);
      *(_DWORD *)(FIELD_U32(a1, 8) + v51 + 2408) = nn__lmem__AllocateFromFrameHeap(v60);
      *(_DWORD *)(FIELD_U32(a1, 16) + v50) = v52++;
      *(_DWORD *)(FIELD_U32(a1, 16) + v50 + 4) = FIELD_U32(a1, 8) + v51 + 1528;
      *(_DWORD *)(FIELD_U32(a1, 16) + v50 + 8) = -1;
      *(_DWORD *)(FIELD_U32(a1, 16) + v50 + 12) = 0;
      *(_DWORD *)(FIELD_U32(a1, 16) + v50 + 36) = FIELD_U32(a1, 8) + v51 + 272;
      *(_DWORD *)(FIELD_U32(a1, 16) + v50 + 32) = FIELD_U32(a1, 8) + v51 + 1848;
      v56 = FIELD_U32(a1, 16) + v50;
      FIELD_U32(v56, 16) = -1;
      FIELD_U32(v56, 20) = -1;
      v57 = FIELD_U32(a1, 16) + v50;
      FIELD_U32(v57, 24) = -1;
      FIELD_U32(v57, 28) = -1;
      v58 = FIELD_U32(a1, 8) + v51;
      v59 = FIELD_U32(a1, 16) + v50;
      v50 += 48;
      v51 += 2416;
      FIELD_U32(v59, 40) = FIELD_U32(v58, 2408);
    }
    while ( v52 < FIELD_U32(a1, 4) );
  }
  nn__lmem__DestroyFrameHeap(v60);
  memset((void *)(a1 + 2280), 0, 64);
  debugPrintRelated("\n");
  debugPrintRelated("System Static     WorkSize : %d \n");
  debugPrintRelated("System Static     AlcCount : %d \n");
  debugPrintRelated("  DelayFree       WorkSize : %d \n");
  debugPrintRelated("  Random          WorkSize : %d \n");
  debugPrintRelated("  Resource        WorkSize : %d \n");
  debugPrintRelated("  EmitterSet      WorkSize : %d ( EmitterSetNum:%d )\n");
  debugPrintRelated("  Emitter         WorkSize : %d ( EmitterNum:%d )\n");
  debugPrintRelated("  EmitterCalc     WorkSize : %d \n");
  debugPrintRelated("  EmitterConstBuf WorkSize : %d \n");
  debugPrintRelated("  EmitterSetSort  WorkSize : %d \n");
  debugPrintRelated("  ParticleSort    WorkSize : %d \n");
  sub_608981CC();
  debugPrintRelated("  NoiseTexture    WorkSize : %d \n");
  debugPrintRelated("  TempBuffer      WorkSize : %d \n");
  debugPrintRelated("-------------------------------\n");
  debugPrintRelated("Stripe            WorkSize : %d \n");
  debugPrintRelated("-------------------------------\n");
}
