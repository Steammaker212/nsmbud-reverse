#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607b3318 */ unsigned int __fastcall sub_607B3318(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int result; // r0
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r1
/* line: 6 */   int v6; // r1
/* line: 7 */   int v7; // r1
/* line: 8 */   int v8; // r1
/* line: 9 */   int v9; // r1
/* line: 10 */   int v10; // r1
/* line: 11 */   int v11; // r1
/* line: 12 */   int v12; // r1
/* line: 13 */   int v13; // r1
/* line: 14 */   int v14; // r1
/* line: 15 */   int v15; // r1
/* line: 16 */   int v16; // r1
/* line: 17 */   int v17; // r1
/* line: 18 */   int v18; // r1
/* line: 19 */   int v19; // r1
/* line: 20 */   int v20; // r1
/* line: 21 */   int v21; // r1
/* line: 22 */   int v22; // r1
/* line: 23 */   int v23; // r1
/* line: 24 */   int v24; // r1
/* line: 25 */   int v25; // r1
/* line: 26 */   int v26; // r1
/* line: 27 */   int v27; // r1
/* line: 28 */   int v28; // r1
/* line: 29 */   int v29; // r1
/* line: 30 */   int v30; // r1
/* line: 31 */   float v31; // s0
/* line: 32 */   int v32; // r1
/* line: 33 */   int v33; // r1
/* line: 34 */   int v34; // r1
/* line: 35 */   int v35; // r1
/* line: 36 */ 
/* line: 37, address: 0x607b3320 */   result = *(unsigned __int8 *)(a1 + 1205);
/* line: 38, address: 0x607b3328 */   if ( (result & 0x40) == 0 )
/* line: 39 */   {
/* line: 40, address: 0x607b3330 */     sub_6075FD24(a1);
/* line: 41, address: 0x607b333c */     v3 = *(_DWORD *)(a1 + 11400);
/* line: 42, address: 0x607b3344 */     if ( v3 )
/* line: 43 */     {
/* line: 44, address: 0x607b336c */       if ( !*(_DWORD *)(MEMORY[0xC995D0] + 32) && !*(_BYTE *)(MEMORY[0xCC436C] + 136) )
/* line: 45 */       {
/* line: 46, address: 0x607b3378 */         v4 = v3 - 1;
/* line: 47, address: 0x607b337c */         *(_DWORD *)(a1 + 11400) = v4;
/* line: 48, address: 0x607b3380 */         if ( !v4 )
/* line: 49, address: 0x607b3390 */           sub_60409C18(MEMORY[0xC9A1F0]);
/* line: 50 */       }
/* line: 51 */     }
/* line: 52, address: 0x607b339c */     v5 = *(_DWORD *)(a1 + 14868);
/* line: 53, address: 0x607b33a4 */     if ( v5 )
/* line: 54, address: 0x607b33a8 */       *(_DWORD *)(a1 + 14868) = v5 - 1;
/* line: 55, address: 0x607b33b0 */     sub_60797430(a1);
/* line: 56, address: 0x607b33bc */     v6 = *(_DWORD *)(a1 + 12060);
/* line: 57, address: 0x607b33c4 */     if ( v6 )
/* line: 58, address: 0x607b33c8 */       *(_DWORD *)(a1 + 12060) = v6 - 1;
/* line: 59, address: 0x607b33d4 */     v7 = *(_DWORD *)(a1 + 12064);
/* line: 60, address: 0x607b33dc */     if ( v7 )
/* line: 61, address: 0x607b33e0 */       *(_DWORD *)(a1 + 12064) = v7 - 1;
/* line: 62, address: 0x607b33ec */     v8 = *(_DWORD *)(a1 + 12076);
/* line: 63, address: 0x607b33f4 */     if ( v8 )
/* line: 64, address: 0x607b33f8 */       *(_DWORD *)(a1 + 12076) = v8 - 1;
/* line: 65, address: 0x607b3404 */     v9 = *(_DWORD *)(a1 + 12080);
/* line: 66, address: 0x607b340c */     if ( v9 )
/* line: 67, address: 0x607b3410 */       *(_DWORD *)(a1 + 12080) = v9 - 1;
/* line: 68, address: 0x607b341c */     v10 = *(_DWORD *)(a1 + 12380);
/* line: 69, address: 0x607b3424 */     if ( v10 )
/* line: 70, address: 0x607b3428 */       *(_DWORD *)(a1 + 12380) = v10 - 1;
/* line: 71, address: 0x607b3434 */     v11 = *(_DWORD *)(a1 + 12084);
/* line: 72, address: 0x607b343c */     if ( v11 )
/* line: 73, address: 0x607b3440 */       *(_DWORD *)(a1 + 12084) = v11 - 1;
/* line: 74, address: 0x607b344c */     v12 = *(_DWORD *)(a1 + 12088);
/* line: 75, address: 0x607b3454 */     if ( v12 )
/* line: 76, address: 0x607b3458 */       *(_DWORD *)(a1 + 12088) = v12 - 1;
/* line: 77, address: 0x607b3464 */     v13 = *(_DWORD *)(a1 + 12092);
/* line: 78, address: 0x607b346c */     if ( v13 )
/* line: 79, address: 0x607b3470 */       *(_DWORD *)(a1 + 12092) = v13 - 1;
/* line: 80, address: 0x607b347c */     v14 = *(_DWORD *)(a1 + 11480);
/* line: 81, address: 0x607b3484 */     if ( v14 )
/* line: 82, address: 0x607b3488 */       *(_DWORD *)(a1 + 11480) = v14 - 1;
/* line: 83, address: 0x607b3494 */     v15 = *(_DWORD *)(a1 + 12136);
/* line: 84, address: 0x607b349c */     if ( v15 )
/* line: 85, address: 0x607b34a0 */       *(_DWORD *)(a1 + 12136) = v15 - 1;
/* line: 86, address: 0x607b34ac */     v16 = *(_DWORD *)(a1 + 12204);
/* line: 87, address: 0x607b34b4 */     if ( v16 )
/* line: 88, address: 0x607b34b8 */       *(_DWORD *)(a1 + 12204) = v16 - 1;
/* line: 89, address: 0x607b34c4 */     v17 = *(_DWORD *)(a1 + 12208);
/* line: 90, address: 0x607b34cc */     if ( v17 )
/* line: 91, address: 0x607b34d0 */       *(_DWORD *)(a1 + 12208) = v17 - 1;
/* line: 92, address: 0x607b34dc */     v18 = *(_DWORD *)(a1 + 12216);
/* line: 93, address: 0x607b34e4 */     if ( v18 )
/* line: 94, address: 0x607b34e8 */       *(_DWORD *)(a1 + 12216) = v18 - 1;
/* line: 95, address: 0x607b34f4 */     v19 = *(_DWORD *)(a1 + 12840);
/* line: 96, address: 0x607b34fc */     if ( v19 )
/* line: 97, address: 0x607b3500 */       *(_DWORD *)(a1 + 12840) = v19 - 1;
/* line: 98, address: 0x607b350c */     v20 = *(_DWORD *)(a1 + 12920);
/* line: 99, address: 0x607b3514 */     if ( v20 )
/* line: 100, address: 0x607b3518 */       *(_DWORD *)(a1 + 12920) = v20 - 1;
/* line: 101, address: 0x607b3524 */     v21 = *(_DWORD *)(a1 + 12924);
/* line: 102, address: 0x607b352c */     if ( v21 )
/* line: 103, address: 0x607b3530 */       *(_DWORD *)(a1 + 12924) = v21 - 1;
/* line: 104, address: 0x607b353c */     v22 = *(_DWORD *)(a1 + 12268);
/* line: 105, address: 0x607b3544 */     if ( v22 )
/* line: 106, address: 0x607b3548 */       *(_DWORD *)(a1 + 12268) = v22 - 1;
/* line: 107, address: 0x607b3554 */     v23 = *(_DWORD *)(a1 + 12412);
/* line: 108, address: 0x607b355c */     if ( v23 )
/* line: 109, address: 0x607b3560 */       *(_DWORD *)(a1 + 12412) = v23 - 1;
/* line: 110, address: 0x607b356c */     v24 = *(_DWORD *)(a1 + 13056);
/* line: 111, address: 0x607b3580 */     if ( !v24 || (v25 = v24 - 1, (*(_DWORD *)(a1 + 13056) = v25) == 0) )
/* line: 112, address: 0x607b358c */       *(_BYTE *)(a1 + 13060) = 0;
/* line: 113, address: 0x607b3598 */     v26 = *(_DWORD *)(a1 + 12184);
/* line: 114, address: 0x607b35a0 */     if ( v26 )
/* line: 115, address: 0x607b35a4 */       *(_DWORD *)(a1 + 12184) = v26 - 1;
/* line: 116, address: 0x607b35b0 */     v27 = *(_DWORD *)(a1 + 12188);
/* line: 117, address: 0x607b35b8 */     if ( v27 )
/* line: 118, address: 0x607b35bc */       *(_DWORD *)(a1 + 12188) = v27 - 1;
/* line: 119, address: 0x607b35c8 */     v28 = *(_DWORD *)(a1 + 13000);
/* line: 120, address: 0x607b35d0 */     if ( v28 )
/* line: 121, address: 0x607b35d4 */       *(_DWORD *)(a1 + 13000) = v28 - 1;
/* line: 122, address: 0x607b35e0 */     v29 = *(_DWORD *)(a1 + 13052);
/* line: 123, address: 0x607b35e8 */     if ( v29 )
/* line: 124, address: 0x607b35ec */       *(_DWORD *)(a1 + 13052) = v29 - 1;
/* line: 125, address: 0x607b35f8 */     v30 = *(_DWORD *)(a1 + 12788);
/* line: 126, address: 0x607b3600 */     if ( v30 )
/* line: 127, address: 0x607b3604 */       *(_DWORD *)(a1 + 12788) = v30 - 1;
/* line: 128, address: 0x607b3610 */     v31 = *(float *)(a1 + 15060);
/* line: 129, address: 0x607b361c */     if ( v31 != 0.0 )
/* line: 130, address: 0x607b3628 */       *(float *)(a1 + 15060) = v31 + -1.0;
/* line: 131, address: 0x607b3634 */     v32 = *(_DWORD *)(a1 + 15068);
/* line: 132, address: 0x607b363c */     if ( v32 )
/* line: 133, address: 0x607b3640 */       *(_DWORD *)(a1 + 15068) = v32 - 1;
/* line: 134, address: 0x607b364c */     v33 = *(_DWORD *)(a1 + 15084);
/* line: 135, address: 0x607b3654 */     if ( v33 )
/* line: 136, address: 0x607b3658 */       *(_DWORD *)(a1 + 15084) = v33 - 1;
/* line: 137, address: 0x607b3664 */     result = a1 + 12124;
/* line: 138, address: 0x607b3664 */     v34 = *(_DWORD *)(a1 + 12124);
/* line: 139, address: 0x607b3678 */     if ( !v34 || (v35 = v34 - 1, (*(_DWORD *)result = v35) == 0) )
/* line: 140 */     {
/* line: 141, address: 0x607b3680 */       result = *(_DWORD *)(a1 + 1220) & 0xBFFFFFFF;
/* line: 142, address: 0x607b3684 */       *(_DWORD *)(a1 + 1220) = result;
/* line: 143 */     }
/* line: 144 */   }
/* line: 145, address: 0x607b3678 */   return result;
/* line: 146 */ }