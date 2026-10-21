/* line: 0, address: 0x607b792c */ unsigned int __fastcall sub_607B792C(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   int v3; // r0
/* line: 4 */   unsigned int result; // r0
/* line: 5 */   unsigned int *v5; // r6
/* line: 6 */   _DWORD *v6; // r4
/* line: 7 */   int v7; // t1
/* line: 8 */ 
/* line: 9, address: 0x607b7940 */   if ( (*(_BYTE *)(a1 + 1217) & 0x10) == 0 )
/* line: 10, address: 0x607b7940 */     return Player_changeState(a1, 13388804, 1);
/* line: 11, address: 0x607b7964 */   v2 = ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 12, address: 0x607b7984 */   if ( _cxa_guard_acquire_0(13087604) )
/* line: 13 */   {
/* line: 14, address: 0x607b79a4 */     MEMORY[0xC7B370] = 12320944;
/* line: 15, address: 0x607b79b0 */     _cxa_guard_release_0(13087604);
/* line: 16 */   }
/* line: 17, address: 0x607b79e4 */   if ( !v2 || (**(int (__fastcall ***)(int, int))v2)(v2, 13087600) != 1 || !sub_6079D270(v2, a1) )
/* line: 18, address: 0x607b7a54 */     return Player_changeState(a1, 13388804, 1);
/* line: 19, address: 0x607b79f0 */   v3 = *(_DWORD *)(a1 + 1228);
/* line: 20, address: 0x607b79fc */   *(_DWORD *)(a1 + 1228) = v3 & 0xFFDFFFFF;
/* line: 21, address: 0x607b7a08 */   if ( (*(_BYTE *)(v2 + 1217) & 0x20) != 0 )
/* line: 22, address: 0x607b7a0c */     *(_DWORD *)(a1 + 1228) = v3 | 0x200000;
/* line: 23, address: 0x607b7a20 */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1088))(a1);
/* line: 24, address: 0x607b7a28 */   result = sub_607B7C9C(a1);
/* line: 25, address: 0x607b7a30 */   if ( !result )
/* line: 26 */   {
/* line: 27, address: 0x607b7a64 */     if ( (*(_BYTE *)(a1 + 6907) & 8) != 0 )
/* line: 28, address: 0x607b7a68 */       *(_BYTE *)(a1 + 87) = *(_BYTE *)(v2 + 87);
/* line: 29, address: 0x607b7a9c */     if ( (*(_BYTE *)(v2 + 1217) & 0x20) != 0 || (result = sub_607B74E0(a1)) == 0 )
/* line: 30 */     {
/* line: 31, address: 0x607b7aac */       *(_DWORD *)(a1 + 7104) = *(_DWORD *)(v2 + 7104);
/* line: 32, address: 0x607b7ab4 */       v5 = (unsigned int *)(a1 + 9940);
/* line: 33, address: 0x607b7ab4 */       result = *(_DWORD *)(a1 + 9940);
/* line: 34, address: 0x607b7acc */       switch ( result )
/* line: 35 */       {
/* line: 36, address: 0x607b7acc */         case 0u:
/* line: 37 */           goto LABEL_19;
/* line: 38, address: 0x607b7acc */         case 1u:
/* line: 39, address: 0x607b7c28 */           if ( sub_60793CA8(*(_DWORD *)(a1 + 11360)) == 1 )
/* line: 40, address: 0x607b7c3c */             sub_607948E8(a1 + 11356, 20);
/* line: 41, address: 0x607b7c40 */           result = *(unsigned __int8 *)(v2 + 1217);
/* line: 42, address: 0x607b7c48 */           if ( (result & 0x40) == 0 )
/* line: 43 */           {
/* line: 44, address: 0x607b7c54 */             sub_607B7FC0(a1);
/* line: 45, address: 0x607b7c5c */             result = *(_DWORD *)(a1 + 1216) & 0xFBFFFFFF;
/* line: 46, address: 0x607b7c60 */             *(_DWORD *)(a1 + 1216) = result;
/* line: 47 */           }
/* line: 48, address: 0x607b7c60 */           return result;
/* line: 49, address: 0x607b7acc */         case 2u:
/* line: 50, address: 0x607b7acc */         case 4u:
/* line: 51, address: 0x607b7af4 */           if ( sub_60793CA8(*(_DWORD *)(a1 + 11360)) == 1 )
/* line: 52, address: 0x607b7b00 */             sub_607B7FC0(a1);
/* line: 53 */ LABEL_19:
/* line: 54, address: 0x607b7b10 */           if ( sub_607AA954(a1) == 1 )
/* line: 55 */           {
/* line: 56, address: 0x607b7b34 */             *(_DWORD *)(*(_DWORD *)(a1 + 11360) + 208) |= 0x400u;
/* line: 57, address: 0x607b7b44 */             sub_60794954(a1 + 11356, 143);
/* line: 58, address: 0x607b7b50 */             sub_60793114(*(_DWORD *)(a1 + 11360));
/* line: 59, address: 0x607b7b60 */             *(_DWORD *)(a1 + 160) = sub_60773F3C(a1, *(_DWORD *)(a1 + 80));
/* line: 60, address: 0x607b7b6c */             *(_DWORD *)(a1 + 12048) = *(_DWORD *)(a1 + 80);
/* line: 61, address: 0x607b7b70 */             result = 3;
/* line: 62 */ LABEL_25:
/* line: 63, address: 0x607b7c0c */             *v5 = result;
/* line: 64 */           }
/* line: 65 */           else
/* line: 66 */           {
/* line: 67, address: 0x607b7b78 */             result = *(unsigned __int8 *)(v2 + 1217);
/* line: 68, address: 0x607b7b80 */             if ( (result & 0x40) != 0 )
/* line: 69 */             {
/* line: 70, address: 0x607b7b90 */               v7 = *(_DWORD *)(a1 + 11360);
/* line: 71, address: 0x607b7b90 */               v6 = (_DWORD *)(a1 + 11360);
/* line: 72, address: 0x607b7ba0 */               *(_DWORD *)(v7 + 208) |= 0x400u;
/* line: 73, address: 0x607b7bb4 */               (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 84))(*v6, 21);
/* line: 74, address: 0x607b7bbc */               *v5 = 1;
/* line: 75, address: 0x607b7bd0 */               *(v6 - 2536) |= 0x4000000u;
/* line: 76, address: 0x607b7bc0 */               result = -10144;
/* line: 77 */             }
/* line: 78 */           }
/* line: 79, address: 0x607b7c14 */           break;
/* line: 80, address: 0x607b7acc */         case 3u:
/* line: 81, address: 0x607b7bf0 */           result = sub_60793DA0(*(_DWORD *)(a1 + 11360));
/* line: 82, address: 0x607b7bf8 */           if ( result != 1 )
/* line: 83, address: 0x607b7bf8 */             return result;
/* line: 84, address: 0x607b7c04 */           sub_607AABA0(a1, 0);
/* line: 85, address: 0x607b7c08 */           result = 4;
/* line: 86, address: 0x607b7c08 */           goto LABEL_25;
/* line: 87 */         default:
/* line: 88 */           return result;
/* line: 89 */       }
/* line: 90 */     }
/* line: 91 */   }
/* line: 92, address: 0x607b7a38 */   return result;
/* line: 93 */ }