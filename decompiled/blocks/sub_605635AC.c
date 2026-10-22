#include "nsmbudx_prelude.h"

/* ---- addr: 0x605635ac */ int __fastcall sub_605635AC(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v4; // r0
/* line: 3 */   int v7; // r7
/* line: 4 */   int v8; // r0
/* line: 5 */   int v9; // r0
/* line: 6 */   int v10; // r1
/* line: 7 */   int result; // r0
/* line: 8 */   _DWORD *v12; // r1
/* line: 9 */   int v13; // r0
/* line: 10 */ 
/* line: 11, address: 0x605635b4 */   v4 = 1140457472;
/* line: 12, address: 0x605635c4 */   *(_DWORD *)(a1 + 116) = 1140457472;
/* line: 13, address: 0x605635dc */   if ( *(_BYTE *)(a1 + 86) || (*(_BYTE *)(a1 + 87) & 2) != 0 )
/* line: 14 */   {
/* line: 15, address: 0x605635e0 */     v4 = -985956352;
/* line: 16, address: 0x605635e8 */     *(_DWORD *)(a1 + 116) = -985956352;
/* line: 17 */   }
/* line: 18, address: 0x605635f4 */   *(_DWORD *)(a1 + 7348) = v4;
/* line: 19, address: 0x605635fc */   *(_DWORD *)(a1 + 6980) = *(_DWORD *)(a1 + 108);
/* line: 20, address: 0x60563608 */   *(_DWORD *)(a1 + 6984) = *(_DWORD *)(a1 + 112);
/* line: 21, address: 0x60563610 */   *(_DWORD *)(a1 + 6988) = v4;
/* line: 22, address: 0x60563624 */   if ( *(_BYTE *)(MEMORY[0xC9A1F0] + 6515) )
/* line: 23 */   {
/* line: 24, address: 0x60563638 */     v7 = MEMORY[0xCB061C];
/* line: 25, address: 0x60563648 */     v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 360))(a1);
/* line: 26, address: 0x6056365c */     v9 = sub_605B9F30(v7, arr_dword_60B04164[v8]);
/* line: 27 */   }
/* line: 28 */   else
/* line: 29 */   {
/* line: 30, address: 0x6056367c */     v9 = arr_dword_60B04164[(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 360))(a1)];
/* line: 31 */   }
/* line: 32, address: 0x60563684 */   *(_DWORD *)(a1 + 6856) = v9;
/* line: 33, address: 0x60563698 */   v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
/* line: 34, address: 0x6056369c */   result = 0;
/* line: 35, address: 0x605636a4 */   if ( v10 == 1 )
/* line: 36 */   {
/* line: 37, address: 0x605636ac */     *(_DWORD *)(a1 + 144) = 1065353216;
/* line: 38, address: 0x605636b0 */     *(_DWORD *)(a1 + 148) = 1065353216;
/* line: 39, address: 0x605636b4 */     *(_DWORD *)(a1 + 152) = 1065353216;
/* line: 40, address: 0x605636c0 */     sub_605B2C10(a1);
/* line: 41, address: 0x605636cc */     *(_BYTE *)(a1 + 6847) = 1;
/* line: 42, address: 0x605636d4 */     sub_605D02D0(a1);
/* line: 43, address: 0x605636dc */     sub_605B5274(a1);
/* line: 44, address: 0x605636e8 */     *(_DWORD *)(a1 + 6776) = -1056964608;
/* line: 45, address: 0x605636f8 */     *(_DWORD *)(a1 + 6780) = 1098907648;
/* line: 46, address: 0x60563704 */     *(_DWORD *)(a1 + 6784) = 1090519040;
/* line: 47, address: 0x60563710 */     *(_DWORD *)(a1 + 6788) = 0;
/* line: 48, address: 0x60563730 */     ShapedCollider_init(a1 + 6120, a1, &dword_60CAE34C);
/* line: 49, address: 0x60563738 */     v12 = (_DWORD *)(a1 + 6432);
/* line: 50, address: 0x60563740 */     v13 = *(_DWORD *)(a1 + 7368);
/* line: 51, address: 0x60563750 */     if ( (v13 & 0xFFFFFFFE) == 2 )
/* line: 52 */     {
/* line: 53, address: 0x60563760 */       *v12 = 5977856;
/* line: 54, address: 0x60563770 */       *(_DWORD *)(a1 + 6436) = 5980176;
/* line: 55, address: 0x60563780 */       *(_DWORD *)(a1 + 6440) = 5982828;
/* line: 56, address: 0x60563784 */       if ( v13 == 2 )
/* line: 57 */       {
/* line: 58, address: 0x60563790 */         ColliderBase_setType(a1 + 6120, 12);
/* line: 59, address: 0x605637a4 */         *(_DWORD *)(a1 + 6256) |= 0x18u;
/* line: 60, address: 0x605637ac */         if ( a3 != 1 )
/* line: 61, address: 0x605637ac */           goto LABEL_16;
/* line: 62 */       }
/* line: 63 */       else
/* line: 64 */       {
/* line: 65, address: 0x60563814 */         *(_DWORD *)(a1 + 6456) = a1 + 7344;
/* line: 66, address: 0x6056381c */         if ( a3 != 1 )
/* line: 67 */         {
/* line: 68 */ LABEL_16:
/* line: 69, address: 0x60563834 */           if ( a2 == 1 )
/* line: 70, address: 0x60563848 */             ColliderMgr_add(MEMORY[0xC8820C], a1 + 6120);
/* line: 71, address: 0x60563850 */           *(_DWORD *)(a1 + 80) = 0;
/* line: 72, address: 0x60563854 */           return 1;
/* line: 73 */         }
/* line: 74 */       }
/* line: 75 */     }
/* line: 76 */     else
/* line: 77 */     {
/* line: 78, address: 0x605637bc */       *v12 = 5977228;
/* line: 79, address: 0x605637cc */       *(_DWORD *)(a1 + 6436) = 5978420;
/* line: 80, address: 0x605637dc */       *(_DWORD *)(a1 + 6440) = 5980432;
/* line: 81, address: 0x605637f0 */       *(_DWORD *)(a1 + 6256) |= 0x18u;
/* line: 82, address: 0x605637f8 */       *(_DWORD *)(a1 + 6456) = a1 + 7344;
/* line: 83, address: 0x60563800 */       if ( a3 != 1 )
/* line: 84, address: 0x60563800 */         goto LABEL_16;
/* line: 85 */     }
/* line: 86, address: 0x6056382c */     *(_DWORD *)(a1 + 6452) = 5650576;
/* line: 87, address: 0x6056382c */     goto LABEL_16;
/* line: 88 */   }
/* line: 89, address: 0x60563858 */   return result;
/* line: 90 */ }