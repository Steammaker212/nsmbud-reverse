#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);
/* line: 0, address: 0x605b5a3c */ int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5)
/* line: 1 */ {
/* line: 2 */   int *v9; // r5
/* line: 3 */   int v10; // r1
/* line: 4 */   int v11; // r1
/* line: 5 */   int v12; // r1
/* line: 6 */   int v13; // r1
/* line: 7 */   int v14; // r3
/* line: 8 */   int *v15; // r6
/* line: 9 */   int v16; // r2
/* line: 10 */   _DWORD v18[3]; // [sp+4h] [bp-44h] BYREF
/* line: 11 */   char v19; // [sp+10h] [bp-38h]
/* line: 12 */   char v20; // [sp+11h] [bp-37h]
/* line: 13 */   int v21; // [sp+18h] [bp-30h]
/* line: 14 */   int v22; // [sp+1Ch] [bp-2Ch]
/* line: 15 */   int v23; // [sp+20h] [bp-28h]
/* line: 16 */   int v24; // [sp+24h] [bp-24h]
/* line: 17 */   int v25; // [sp+28h] [bp-20h]
/* line: 18 */   int v26; // [sp+2Ch] [bp-1Ch]
/* line: 19 */   int v27; // [sp+34h] [bp-14h]
/* line: 20 */   int v28; // [sp+3Ch] [bp-Ch]
/* line: 21 */   int v29; // [sp+40h] [bp-8h]
/* line: 22 */   int v30; // [sp+44h] [bp-4h]
/* line: 23 */ 
/* line: 24, address: 0x605b5a5c */   v9 = (int *)(a1 + 6860);
/* line: 25, address: 0x605b5a90 */   if ( sub_6078A3DC(MEMORY[0xCC436C], *(_DWORD *)(a1 + 6860)) == 1
/* line: 26 */     && Actor__getProfileId((Actor *)a1) != MEMORY[0xAF322C] )
/* line: 27 */   {
/* line: 28, address: 0x605b5a9c */     v10 = *(_DWORD *)(a1 + 6856);
/* line: 29, address: 0x605b5aa4 */     if ( v10 == 2 )
/* line: 30 */     {
/* line: 31, address: 0x605b5ab8 */       v11 = 11;
/* line: 32 */     }
/* line: 33 */     else
/* line: 34 */     {
/* line: 35, address: 0x605b5aac */       if ( v10 != 10 )
/* line: 36, address: 0x605b5aac */         goto LABEL_8;
/* line: 37, address: 0x605b5ab0 */       v11 = 22;
/* line: 38 */     }
/* line: 39, address: 0x605b5abc */     *(_DWORD *)(a1 + 6856) = v11;
/* line: 40 */   }
/* line: 41 */ LABEL_8:
/* line: 42, address: 0x605b5ac0 */   v12 = *(_DWORD *)(a1 + 6872);
/* line: 43, address: 0x605b5ad0 */   if ( v12 == 1 )
/* line: 44 */   {
/* line: 45, address: 0x605b5afc */     v13 = 3;
/* line: 46, address: 0x605b5b04 */     if ( a5 )
/* line: 47, address: 0x605b5b04 */       goto LABEL_17;
/* line: 48 */   }
/* line: 49 */   else
/* line: 50 */   {
/* line: 51, address: 0x605b5ad8 */     if ( v12 == 2 )
/* line: 52 */     {
/* line: 53, address: 0x605b5ae4 */       v13 = 5;
/* line: 54, address: 0x605b5aec */       if ( *(_DWORD *)(a1 + 6864) == 2 )
/* line: 55, address: 0x605b5aec */         v13 = 4;
/* line: 56, address: 0x605b5af4 */       if ( !a5 )
/* line: 57, address: 0x605b5af4 */         goto LABEL_18;
/* line: 58 */ LABEL_17:
/* line: 59, address: 0x605b5b18 */       v14 = *(_DWORD *)(a1 + 8);
/* line: 60, address: 0x605b5b1c */       goto LABEL_19;
/* line: 61 */     }
/* line: 62, address: 0x605b5b0c */     v13 = 0;
/* line: 63, address: 0x605b5b14 */     if ( a5 )
/* line: 64, address: 0x605b5b14 */       goto LABEL_17;
/* line: 65 */   }
/* line: 66 */ LABEL_18:
/* line: 67, address: 0x605b5b20 */   v14 = 0;
/* line: 68 */ LABEL_19:
/* line: 69, address: 0x605b5b24 */   v15 = (int *)(a1 + 6864);
/* line: 70, address: 0x605b5b2c */   if ( *(_BYTE *)(a1 + 6868) )
/* line: 71 */   {
/* line: 72, address: 0x605b5b3c */     v16 = 2;
/* line: 73, address: 0x605b5b40 */     *v15 = 2;
/* line: 74 */   }
/* line: 75 */   else
/* line: 76 */   {
/* line: 77, address: 0x605b5b48 */     v16 = *v15;
/* line: 78 */   }
/* line: 79, address: 0x605b5b4c */   v18[0] = a2;
/* line: 80, address: 0x605b5b54 */   v19 = *(_BYTE *)(a1 + 86);
/* line: 81, address: 0x605b5b5c */   v18[2] = 1;
/* line: 82, address: 0x605b5b68 */   v20 = *(_BYTE *)(a1 + 6877);
/* line: 83, address: 0x605b5b6c */   v21 = v16;
/* line: 84, address: 0x605b5b70 */   v22 = a4;
/* line: 85, address: 0x605b5b74 */   v23 = a3;
/* line: 86, address: 0x605b5b7c */   v24 = *v9;
/* line: 87, address: 0x605b5b80 */   v25 = v16;
/* line: 88, address: 0x605b5b84 */   v26 = a5;
/* line: 89, address: 0x605b5b88 */   v27 = v13;
/* line: 90, address: 0x605b5b98 */   v28 = *(unsigned __int8 *)(a1 + 6851);
/* line: 91, address: 0x605b5ba0 */   v29 = *(_DWORD *)(a1 + 80);
/* line: 92, address: 0x605b5bac */   v30 = *(_DWORD *)(a1 + 6908);
/* line: 93, address: 0x605b5bcc */   return sub_60466328(MEMORY[0xC9D3E4], v18, *(_DWORD *)(a1 + 6856), v14);
/* line: 94 */ }