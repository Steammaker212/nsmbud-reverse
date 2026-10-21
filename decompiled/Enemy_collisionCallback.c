/* line: 0, address: 0x602a21b0 */ unsigned int __fastcall Enemy::collisionCallback(int a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   int (__fastcall ***v4)(_DWORD, int); // r7
/* line: 3 */   int v5; // r6
/* line: 4 */   unsigned int result; // r0
/* line: 5 */   int (__fastcall ***v7)(_DWORD, int); // r5
/* line: 6 */   int v8; // r7
/* line: 7 */   unsigned int v9; // r0
/* line: 8 */   int v10; // t1
/* line: 9 */   unsigned int v11; // r5
/* line: 10 */   unsigned int v12; // r0
/* line: 11 */   int v13; // t1
/* line: 12 */   unsigned __int8 v14; // [sp+7h] [bp-1h] BYREF
/* line: 13 */ 
/* line: 14, address: 0x602a21c4 */   v4 = *(int (__fastcall ****)(_DWORD, int))(a1 + 64);
/* line: 15, address: 0x602a21e0 */   if ( _cxa_guard_acquire_0(13087792) )
/* line: 16 */   {
/* line: 17, address: 0x602a2200 */     MEMORY[0xC7B42C] = 12320968;
/* line: 18, address: 0x602a220c */     _cxa_guard_release_0(13087792);
/* line: 19 */   }
/* line: 20, address: 0x602a2214 */   if ( v4 )
/* line: 21 */   {
/* line: 22, address: 0x602a2230 */     v5 = (**v4)(v4, 13087788);
/* line: 23, address: 0x602a2238 */     if ( v5 )
/* line: 24, address: 0x602a2238 */       v5 = (int)v4;
/* line: 25 */   }
/* line: 26 */   else
/* line: 27 */   {
/* line: 28, address: 0x602a2240 */     v5 = 0;
/* line: 29 */   }
/* line: 30, address: 0x602a2248 */   if ( *(_BYTE *)(v5 + 6136) )
/* line: 31 */   {
/* line: 32 */ LABEL_9:
/* line: 33, address: 0x602a2254 */     result = *(unsigned __int8 *)(a1 + 110) | 2;
/* line: 34, address: 0x602a225c */     *(_BYTE *)(a1 + 110) = result;
/* line: 35 */   }
/* line: 36 */   else
/* line: 37 */   {
/* line: 38, address: 0x602a226c */     v7 = (int (__fastcall ***)(_DWORD, int))a2[16];
/* line: 39, address: 0x602a2288 */     if ( _cxa_guard_acquire_0(13087588) )
/* line: 40 */     {
/* line: 41, address: 0x602a22a8 */       MEMORY[0xC7B360] = 12320920;
/* line: 42, address: 0x602a22b4 */       _cxa_guard_release_0(13087588);
/* line: 43 */     }
/* line: 44, address: 0x602a22bc */     if ( v7 )
/* line: 45 */     {
/* line: 46, address: 0x602a22d8 */       v8 = (**v7)(v7, 13087584);
/* line: 47, address: 0x602a22e0 */       if ( v8 )
/* line: 48, address: 0x602a22e0 */         v8 = (int)v7;
/* line: 49 */     }
/* line: 50 */     else
/* line: 51 */     {
/* line: 52, address: 0x602a22e8 */       v8 = 0;
/* line: 53 */     }
/* line: 54, address: 0x602a22f0 */     result = *(unsigned __int8 *)(v8 + 533) - 1;
/* line: 55, address: 0x602a2308 */     switch ( *(_BYTE *)(v8 + 533) )
/* line: 56 */     {
/* line: 57, address: 0x602a2308 */       case 1:
/* line: 58, address: 0x602a2358 */         if ( (*(_BYTE *)(v5 + 6151) & 1) != 0
/* line: 59 */           || (result = MEMORY[0xCC6484],
/* line: 60 */               (float)((float)(*(float *)(v5 + 112) + *(float *)(a1 + 120)) - *(float *)(a1 + 128)) <= *(float *)(MEMORY[0xCC6484] + 124)) )
/* line: 61 */         {
/* line: 62, address: 0x602a2378 */           if ( (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 236))(v5, a1, a2) == 1 )
/* line: 63, address: 0x602a2378 */             goto LABEL_39;
/* line: 64, address: 0x602a237c */           result = a2[34];
/* line: 65, address: 0x602a2384 */           if ( result != 1 )
/* line: 66 */           {
/* line: 67, address: 0x602a2388 */             result = *(char *)(v8 + 84);
/* line: 68, address: 0x602a2390 */             if ( result <= 3 )
/* line: 69 */             {
/* line: 70, address: 0x602a2394 */               v9 = v5 + 2 * result;
/* line: 71, address: 0x602a239c */               v10 = *(unsigned __int16 *)(v9 + 6140);
/* line: 72, address: 0x602a239c */               result = v9 + 6140;
/* line: 73, address: 0x602a23a4 */               if ( !v10 )
/* line: 74 */               {
/* line: 75, address: 0x602a23ac */                 *(_WORD *)result = 5;
/* line: 76, address: 0x602a23b8 */                 result = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 264))(v5, a1, a2);
/* line: 77 */               }
/* line: 78 */             }
/* line: 79 */           }
/* line: 80 */         }
/* line: 81, address: 0x602a23b8 */         break;
/* line: 82, address: 0x602a2308 */       case 2:
/* line: 83, address: 0x602a23e0 */         v11 = *(char *)(v8 + 84);
/* line: 84, address: 0x602a23e8 */         if ( v11 <= 3 )
/* line: 85 */         {
/* line: 86, address: 0x602a23f4 */           if ( a2[35] == 15 )
/* line: 87 */           {
/* line: 88, address: 0x602a2400 */             result = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 244))(v5, a1, a2);
/* line: 89 */           }
/* line: 90 */           else
/* line: 91 */           {
/* line: 92, address: 0x602a24f0 */             result = MEMORY[0xCC6484];
/* line: 93, address: 0x602a2504 */             if ( (float)((float)(*(float *)(v5 + 112) + *(float *)(a1 + 120)) - *(float *)(a1 + 128)) <= *(float *)(MEMORY[0xCC6484] + 124) )
/* line: 94 */             {
/* line: 95, address: 0x602a2524 */               if ( (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 248))(v5, a1, a2) == 1 )
/* line: 96, address: 0x602a2524 */                 goto LABEL_39;
/* line: 97, address: 0x602a2528 */               v12 = v5 + 2 * v11;
/* line: 98, address: 0x602a2530 */               v13 = *(unsigned __int16 *)(v12 + 6140);
/* line: 99, address: 0x602a2530 */               result = v12 + 6140;
/* line: 100, address: 0x602a2538 */               if ( !v13 )
/* line: 101 */               {
/* line: 102, address: 0x602a2540 */                 *(_WORD *)result = 5;
/* line: 103, address: 0x602a2560 */                 result = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 268))(v5, a1, a2);
/* line: 104 */               }
/* line: 105 */             }
/* line: 106 */           }
/* line: 107 */         }
/* line: 108, address: 0x602a2400 */         break;
/* line: 109, address: 0x602a2308 */       case 3:
/* line: 110, address: 0x602a2414 */         v14 = 0;
/* line: 111, address: 0x602a242c */         if ( (*(int (__fastcall **)(int, unsigned __int8 *, int, _DWORD *))(*(_DWORD *)v5 + 240))(v5, &v14, a1, a2) == 1 )
/* line: 112 */         {
/* line: 113, address: 0x602a2430 */           result = v14;
/* line: 114, address: 0x602a2438 */           if ( v14 )
/* line: 115, address: 0x602a2438 */             goto LABEL_9;
/* line: 116 */         }
/* line: 117 */         else
/* line: 118 */         {
/* line: 119, address: 0x602a24c4 */           if ( (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 232))(v5, a1, a2) == 1 )
/* line: 120, address: 0x602a24c4 */             goto LABEL_39;
/* line: 121, address: 0x602a2578 */           result = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 260))(v5, a1, a2);
/* line: 122 */         }
/* line: 123, address: 0x602a2438 */         break;
/* line: 124, address: 0x602a2308 */       case 4:
/* line: 125, address: 0x602a2458 */         result = MEMORY[0xCC6484];
/* line: 126, address: 0x602a246c */         if ( (float)((float)(*(float *)(v5 + 112) + *(float *)(a1 + 120)) - *(float *)(a1 + 128)) <= *(float *)(MEMORY[0xCC6484] + 124) )
/* line: 127 */         {
/* line: 128, address: 0x602a248c */           if ( (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 252))(v5, a1, a2) == 1 )
/* line: 129, address: 0x602a248c */             goto LABEL_39;
/* line: 130, address: 0x602a2490 */           result = a2[35];
/* line: 131, address: 0x602a2498 */           if ( !result )
/* line: 132, address: 0x602a24a4 */             result = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 272))(v5, a1, a2);
/* line: 133 */         }
/* line: 134, address: 0x602a24a4 */         break;
/* line: 135 */       default:
/* line: 136, address: 0x602a23d0 */         result = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 256))(v5, a1, a2);
/* line: 137, address: 0x602a23d8 */         if ( result == 1 )
/* line: 138 */         {
/* line: 139 */ LABEL_39:
/* line: 140, address: 0x602a24c8 */           *(_BYTE *)(v5 + 6296) = 1;
/* line: 141, address: 0x602a24d4 */           goto LABEL_9;
/* line: 142 */         }
/* line: 143, address: 0x602a24d4 */         break;
/* line: 144 */     }
/* line: 145 */   }
/* line: 146, address: 0x602a2264 */   return result;
/* line: 147 */ }