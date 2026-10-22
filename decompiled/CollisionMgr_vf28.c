#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60152c18 */ int __fastcall CollisionMgr_vf28(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   _DWORD *v3; // r8
/* line: 4 */   int *v4; // r7
/* line: 5 */   int v5; // r6
/* line: 6 */   int v6; // r0
/* line: 7 */   int v7; // r1
/* line: 8 */   int v8; // r2
/* line: 9 */   bool v9; // zf
/* line: 10 */   int v10; // r0
/* line: 11 */   int *v11; // r7
/* line: 12 */   int v12; // r6
/* line: 13 */   int v13; // r0
/* line: 14 */   int v14; // r1
/* line: 15 */   int v15; // r2
/* line: 16 */   bool v16; // zf
/* line: 17 */   int v17; // r0
/* line: 18 */   int result; // r0
/* line: 19 */   int *v19; // r7
/* line: 20 */   int v20; // r6
/* line: 21 */   unsigned __int8 v21; // r1
/* line: 22 */   int v22; // r1
/* line: 23 */   int v23; // r2
/* line: 24 */   bool v24; // zf
/* line: 25 */   int *v25; // r6
/* line: 26 */   int v26; // r7
/* line: 27 */   unsigned __int8 v27; // r1
/* line: 28 */   int v28; // r1
/* line: 29 */   int v29; // r2
/* line: 30 */   bool v30; // zf
/* line: 31 */ 
/* line: 32, address: 0x60152c24 */   v2 = a1 + 2272;
/* line: 33, address: 0x60152c2c */   v3 = (_DWORD *)MEMORY[0xC8820C];
/* line: 34, address: 0x60152c30 */   v4 = *(int **)(MEMORY[0xC8820C] + 32);
/* line: 35, address: 0x60152c38 */   while ( v4 )
/* line: 36 */   {
/* line: 37, address: 0x60152c5c */     v5 = *v4;
/* line: 38, address: 0x60152c5c */     v4 = (int *)v4[1];
/* line: 39, address: 0x60152cb8 */     if ( sub_6015A9F4(v2, v5 + 112)
/* line: 40 */       && *(_QWORD *)(v5 + 304)
/* line: 41 */       && **(unsigned __int8 **)(a1 + 2212) == **(unsigned __int8 **)(v5 + 160)
/* line: 42 */       && (**(_BYTE **)(a1 + 2216) & **(_BYTE **)(v5 + 164)) != 0
/* line: 43 */       && !*(_BYTE *)(v5 + 220) )
/* line: 44 */     {
/* line: 45, address: 0x60152cc4 */       v6 = *(_DWORD *)(v5 + 144);
/* line: 46, address: 0x60152ccc */       if ( !v6 )
/* line: 47, address: 0x60152ccc */         goto LABEL_15;
/* line: 48, address: 0x60152cd0 */       v7 = *(_DWORD *)(a1 + 2196);
/* line: 49, address: 0x60152cd8 */       if ( v7 != v6 )
/* line: 50 */       {
/* line: 51, address: 0x60152cdc */         v8 = *(_DWORD *)(a1 + 2200);
/* line: 52, address: 0x60152ce0 */         v9 = v8 == v6;
/* line: 53, address: 0x60152ce4 */         if ( v8 != v6 )
/* line: 54, address: 0x60152ce8 */           v9 = v7 == *(_DWORD *)(v5 + 148);
/* line: 55, address: 0x60152cf0 */         if ( !v9 && !*(_BYTE *)(v6 + 19) )
/* line: 56 */         {
/* line: 57 */ LABEL_15:
/* line: 58, address: 0x60152cfc */           v10 = *(_DWORD *)(a1 + 88);
/* line: 59, address: 0x60152d08 */           if ( v10 < *(_DWORD *)(a1 + 92) )
/* line: 60 */           {
/* line: 61, address: 0x60152c44 */             *(_DWORD *)(*(_DWORD *)(a1 + 96) + 4 * v10) = v5;
/* line: 62, address: 0x60152c50 */             ++*(_DWORD *)(a1 + 88);
/* line: 63 */           }
/* line: 64 */         }
/* line: 65 */       }
/* line: 66 */     }
/* line: 67 */   }
/* line: 68, address: 0x60152d10 */   v11 = (int *)v3[20];
/* line: 69, address: 0x60152d18 */   while ( v11 )
/* line: 70 */   {
/* line: 71, address: 0x60152d3c */     v12 = *v11;
/* line: 72, address: 0x60152d3c */     v11 = (int *)v11[1];
/* line: 73, address: 0x60152d98 */     if ( sub_6015A9F4(v2, v12 + 112)
/* line: 74 */       && *(_QWORD *)(v12 + 304)
/* line: 75 */       && **(unsigned __int8 **)(a1 + 2212) == **(unsigned __int8 **)(v12 + 160)
/* line: 76 */       && (**(_BYTE **)(a1 + 2216) & **(_BYTE **)(v12 + 164)) != 0
/* line: 77 */       && !*(_BYTE *)(v12 + 220) )
/* line: 78 */     {
/* line: 79, address: 0x60152da4 */       v13 = *(_DWORD *)(v12 + 144);
/* line: 80, address: 0x60152dac */       if ( !v13 )
/* line: 81, address: 0x60152dac */         goto LABEL_31;
/* line: 82, address: 0x60152db0 */       v14 = *(_DWORD *)(a1 + 2196);
/* line: 83, address: 0x60152db8 */       if ( v14 != v13 )
/* line: 84 */       {
/* line: 85, address: 0x60152dbc */         v15 = *(_DWORD *)(a1 + 2200);
/* line: 86, address: 0x60152dc0 */         v16 = v15 == v13;
/* line: 87, address: 0x60152dc4 */         if ( v15 != v13 )
/* line: 88, address: 0x60152dc8 */           v16 = v14 == *(_DWORD *)(v12 + 148);
/* line: 89, address: 0x60152dd0 */         if ( !v16 && !*(_BYTE *)(v13 + 19) )
/* line: 90 */         {
/* line: 91 */ LABEL_31:
/* line: 92, address: 0x60152ddc */           v17 = *(_DWORD *)(a1 + 88);
/* line: 93, address: 0x60152de8 */           if ( v17 < *(_DWORD *)(a1 + 92) )
/* line: 94 */           {
/* line: 95, address: 0x60152d24 */             *(_DWORD *)(*(_DWORD *)(a1 + 96) + 4 * v17) = v12;
/* line: 96, address: 0x60152d30 */             ++*(_DWORD *)(a1 + 88);
/* line: 97 */           }
/* line: 98 */         }
/* line: 99 */       }
/* line: 100 */     }
/* line: 101 */   }
/* line: 102, address: 0x60152dfc */   sub_608DECA0(a1 + 88, sub_60152FF4);
/* line: 103, address: 0x60152e18 */   result = *(_DWORD *)(a1 + 2528) | *(_DWORD *)(a1 + 2536) | *(_DWORD *)(a1 + 2544) | *(_DWORD *)(a1 + 2552);
/* line: 104, address: 0x60152e20 */   if ( (result & 0x1C) != 0 )
/* line: 105 */   {
/* line: 106, address: 0x60152e24 */     v19 = (int *)v3[11];
/* line: 107, address: 0x60152e2c */     while ( v19 )
/* line: 108 */     {
/* line: 109, address: 0x60152e50 */       v20 = *v19;
/* line: 110, address: 0x60152e50 */       v19 = (int *)v19[1];
/* line: 111, address: 0x60152e5c */       result = sub_6015A9F4(v2, v20 + 112);
/* line: 112, address: 0x60152e64 */       if ( result )
/* line: 113 */       {
/* line: 114, address: 0x60152e70 */         result = *(_DWORD *)(v20 + 304) | *(_DWORD *)(v20 + 308);
/* line: 115, address: 0x60152e68 */         if ( *(_QWORD *)(v20 + 304) )
/* line: 116 */         {
/* line: 117, address: 0x60152e80 */           result = **(unsigned __int8 **)(v20 + 160);
/* line: 118, address: 0x60152e8c */           if ( **(unsigned __int8 **)(a1 + 2212) == result )
/* line: 119 */           {
/* line: 120, address: 0x60152e9c */             v21 = **(_BYTE **)(a1 + 2216);
/* line: 121, address: 0x60152ea0 */             result = (unsigned __int8)(v21 & **(_BYTE **)(v20 + 164));
/* line: 122, address: 0x60152ea8 */             if ( (v21 & **(_BYTE **)(v20 + 164)) != 0 )
/* line: 123 */             {
/* line: 124, address: 0x60152eac */               result = *(unsigned __int8 *)(v20 + 220);
/* line: 125, address: 0x60152eac */               if ( !*(_BYTE *)(v20 + 220) )
/* line: 126 */               {
/* line: 127, address: 0x60152eb8 */                 result = *(_DWORD *)(v20 + 144);
/* line: 128, address: 0x60152ec0 */                 if ( !result )
/* line: 129, address: 0x60152ec0 */                   goto LABEL_48;
/* line: 130, address: 0x60152ec4 */                 v22 = *(_DWORD *)(a1 + 2196);
/* line: 131, address: 0x60152ecc */                 if ( v22 != result )
/* line: 132 */                 {
/* line: 133, address: 0x60152ed0 */                   v23 = *(_DWORD *)(a1 + 2200);
/* line: 134, address: 0x60152ed4 */                   v24 = v23 == result;
/* line: 135, address: 0x60152ed8 */                   if ( v23 != result )
/* line: 136, address: 0x60152edc */                     v24 = v22 == *(_DWORD *)(v20 + 148);
/* line: 137, address: 0x60152ee0 */                   if ( !v24 )
/* line: 138 */                   {
/* line: 139, address: 0x60152ee4 */                     result = *(unsigned __int8 *)(result + 19);
/* line: 140, address: 0x60152eec */                     if ( !result )
/* line: 141 */                     {
/* line: 142 */ LABEL_48:
/* line: 143, address: 0x60152ef0 */                       result = *(_DWORD *)(a1 + 88);
/* line: 144, address: 0x60152efc */                       if ( result < *(_DWORD *)(a1 + 92) )
/* line: 145 */                       {
/* line: 146, address: 0x60152e38 */                         *(_DWORD *)(*(_DWORD *)(a1 + 96) + 4 * result) = v20;
/* line: 147, address: 0x60152e40 */                         result = *(_DWORD *)(a1 + 88) + 1;
/* line: 148, address: 0x60152e44 */                         *(_DWORD *)(a1 + 88) = result;
/* line: 149 */                       }
/* line: 150 */                     }
/* line: 151 */                   }
/* line: 152 */                 }
/* line: 153 */               }
/* line: 154 */             }
/* line: 155 */           }
/* line: 156 */         }
/* line: 157 */       }
/* line: 158 */     }
/* line: 159, address: 0x60152f04 */     v25 = (int *)v3[14];
/* line: 160, address: 0x60152f0c */     while ( v25 )
/* line: 161 */     {
/* line: 162, address: 0x60152f30 */       v26 = *v25;
/* line: 163, address: 0x60152f34 */       v25 = (int *)v25[1];
/* line: 164, address: 0x60152f40 */       result = sub_6015A9F4(v2, v26 + 112);
/* line: 165, address: 0x60152f48 */       if ( result )
/* line: 166 */       {
/* line: 167, address: 0x60152f54 */         result = *(_DWORD *)(v26 + 304) | *(_DWORD *)(v26 + 308);
/* line: 168, address: 0x60152f4c */         if ( *(_QWORD *)(v26 + 304) )
/* line: 169 */         {
/* line: 170, address: 0x60152f64 */           result = **(unsigned __int8 **)(v26 + 160);
/* line: 171, address: 0x60152f70 */           if ( **(unsigned __int8 **)(a1 + 2212) == result )
/* line: 172 */           {
/* line: 173, address: 0x60152f80 */             v27 = **(_BYTE **)(a1 + 2216);
/* line: 174, address: 0x60152f84 */             result = (unsigned __int8)(v27 & **(_BYTE **)(v26 + 164));
/* line: 175, address: 0x60152f8c */             if ( (v27 & **(_BYTE **)(v26 + 164)) != 0 )
/* line: 176 */             {
/* line: 177, address: 0x60152f90 */               result = *(unsigned __int8 *)(v26 + 220);
/* line: 178, address: 0x60152f90 */               if ( !*(_BYTE *)(v26 + 220) )
/* line: 179 */               {
/* line: 180, address: 0x60152f9c */                 result = *(_DWORD *)(v26 + 144);
/* line: 181, address: 0x60152fa4 */                 if ( !result )
/* line: 182, address: 0x60152fa4 */                   goto LABEL_64;
/* line: 183, address: 0x60152fa8 */                 v28 = *(_DWORD *)(a1 + 2196);
/* line: 184, address: 0x60152fb0 */                 if ( v28 != result )
/* line: 185 */                 {
/* line: 186, address: 0x60152fb4 */                   v29 = *(_DWORD *)(a1 + 2200);
/* line: 187, address: 0x60152fb8 */                   v30 = v29 == result;
/* line: 188, address: 0x60152fbc */                   if ( v29 != result )
/* line: 189, address: 0x60152fc0 */                     v30 = v28 == *(_DWORD *)(v26 + 148);
/* line: 190, address: 0x60152fc4 */                   if ( !v30 )
/* line: 191 */                   {
/* line: 192, address: 0x60152fc8 */                     result = *(unsigned __int8 *)(result + 19);
/* line: 193, address: 0x60152fd0 */                     if ( !result )
/* line: 194 */                     {
/* line: 195 */ LABEL_64:
/* line: 196, address: 0x60152fd4 */                       result = *(_DWORD *)(a1 + 88);
/* line: 197, address: 0x60152fe0 */                       if ( result < *(_DWORD *)(a1 + 92) )
/* line: 198 */                       {
/* line: 199, address: 0x60152f18 */                         *(_DWORD *)(*(_DWORD *)(a1 + 96) + 4 * result) = v26;
/* line: 200, address: 0x60152f20 */                         result = *(_DWORD *)(a1 + 88) + 1;
/* line: 201, address: 0x60152f24 */                         *(_DWORD *)(a1 + 88) = result;
/* line: 202 */                       }
/* line: 203 */                     }
/* line: 204 */                   }
/* line: 205 */                 }
/* line: 206 */               }
/* line: 207 */             }
/* line: 208 */           }
/* line: 209 */         }
/* line: 210 */       }
/* line: 211 */     }
/* line: 212 */   }
/* line: 213, address: 0x60152fe8 */   return result;
/* line: 214 */ }