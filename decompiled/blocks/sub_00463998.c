#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);
/* line: 0, address: 0x60463998 */ int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4)
/* line: 1 */ {
/* line: 2 */   int v6; // r5
/* line: 3 */   unsigned int v9; // r0
/* line: 4 */   _DWORD *v10; // r4
/* line: 5 */   int v11; // r7
/* line: 6 */   int v12; // r0
/* line: 7 */   bool v13; // zf
/* line: 8 */   _DWORD *v15; // r10
/* line: 9 */   int ProfileId; // r0
/* line: 10 */ 
/* line: 11, address: 0x604639a4 */   v6 = 0;
/* line: 12, address: 0x604639b4 */   *a2 = 0;
/* line: 13, address: 0x604639bc */   v10 = (_DWORD *)((char *)a1 + 6208);
/* line: 14, address: 0x604639bc */   v9 = *((_DWORD *)a1 + 1552);
/* line: 15, address: 0x604639c4 */   if ( v9 != -1 )
/* line: 16 */   {
/* line: 17, address: 0x604639d0 */     if ( v9 >= 4 )
/* line: 18, address: 0x604639d0 */       v9 = 0;
/* line: 19, address: 0x604639e0 */     v11 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v9 + 48);
/* line: 20, address: 0x60463a00 */     if ( _cxa_guard_acquire_0(13087612) )
/* line: 21 */     {
/* line: 22, address: 0x60463a20 */       MEMORY[0xC7B378] = 12320956;
/* line: 23, address: 0x60463a2c */       _cxa_guard_release_0(13087612);
/* line: 24 */     }
/* line: 25, address: 0x60463a4c */     if ( !v11 || !(**(int (__fastcall ***)(int, int))v11)(v11, 13087608) )
/* line: 26, address: 0x60463a4c */       goto LABEL_11;
/* line: 27, address: 0x60463a5c */     v12 = sub_60766708(v11);
/* line: 28, address: 0x60463a60 */     v13 = v12 == 0;
/* line: 29, address: 0x60463a64 */     if ( !v12 )
/* line: 30, address: 0x60463a68 */       v13 = (*(_BYTE *)(v11 + 1219) & 8) == 0;
/* line: 31, address: 0x60463a6c */     if ( !v13 )
/* line: 32, address: 0x60463a6c */       goto LABEL_11;
/* line: 33, address: 0x60463a84 */     v6 = 1;
/* line: 34, address: 0x60463a8c */     if ( a4 == 1 )
/* line: 35 */     {
/* line: 36, address: 0x60463aac */       if ( _cxa_guard_acquire_0(13087604) )
/* line: 37 */       {
/* line: 38, address: 0x60463acc */         MEMORY[0xC7B370] = 12320944;
/* line: 39, address: 0x60463ad8 */         _cxa_guard_release_0(13087604);
/* line: 40 */       }
/* line: 41, address: 0x60463af4 */       v15 = (_DWORD *)(**(int (__fastcall ***)(int, int))v11)(v11, 13087600);
/* line: 42, address: 0x60463b00 */       if ( v15 )
/* line: 43, address: 0x60463b00 */         v15 = (_DWORD *)v11;
/* line: 44, address: 0x60463b10 */       if ( sub_607A2820((int)v15, a3) == 1 )
/* line: 45 */       {
/* line: 46 */ LABEL_11:
/* line: 47, address: 0x60463a70 */         *v10 = -1;
/* line: 48, address: 0x60463a80 */         return 0;
/* line: 49 */       }
/* line: 50, address: 0x60463b2c */       if ( (*(int (__fastcall **)(_DWORD *, int))(*v15 + 1376))(v15, a3) == 1 )
/* line: 51 */       {
/* line: 52, address: 0x60463b40 */         if ( sub_607A27A8(v15, a3) == 1 )
/* line: 53 */         {
/* line: 54, address: 0x60463b4c */           *a2 = 1;
/* line: 55, address: 0x60463b50 */           return 1;
/* line: 56 */         }
/* line: 57 */       }
/* line: 58 */       else
/* line: 59 */       {
/* line: 60, address: 0x60463b58 */         *a2 = 2;
/* line: 61, address: 0x60463b78 */         if ( _cxa_guard_acquire_0(13226964) )
/* line: 62 */         {
/* line: 63, address: 0x60463b98 */           MEMORY[0xC9D3D0] = 12564600;
/* line: 64, address: 0x60463ba4 */           _cxa_guard_release_0(13226964);
/* line: 65 */         }
/* line: 66, address: 0x60463bc4 */         if ( (*(int (__fastcall **)(_DWORD *, int))*v15)(v15, 13226960) == 1 )
/* line: 67 */         {
/* line: 68, address: 0x60463bcc */           ProfileId = Actor__getProfileId(a1);
/* line: 69, address: 0x60463bd8 */           sub_607C9370(v15, ProfileId);
/* line: 70 */         }
/* line: 71 */       }
/* line: 72 */     }
/* line: 73 */   }
/* line: 74, address: 0x60463a80 */   return v6;
/* line: 75 */ }