
// ---- addr: 0x60563ed8 */ int __fastcall BlockBase::vf178(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   float v4[2]; // [sp+0h] [bp-10h] BYREF
/* line: 4 */   char v5; // [sp+8h] [bp-8h]
/* line: 5 */   char v6; // [sp+9h] [bp-7h]
/* line: 6 */   char v7; // [sp+Ah] [bp-6h]
/* line: 7 */   char v8; // [sp+Bh] [bp-5h]
/* line: 8 */   __int16 v9; // [sp+Ch] [bp-4h]
/* line: 9 */ 
/* line: 10, address: 0x60563efc */   v4[0] = *(float *)(a1 + 108) + -8.0;
/* line: 11, address: 0x60563f08 */   v4[1] = *(float *)(a1 + 112) + 16.0;
/* line: 12, address: 0x60563f10 */   v5 = *(_BYTE *)(a1 + 6849);
/* line: 13, address: 0x60563f18 */   v2 = *(_DWORD *)(a1 + 7368);
/* line: 14, address: 0x60563f1c */   v6 = v2;
/* line: 15, address: 0x60563f20 */   v7 = 1;
/* line: 16, address: 0x60563f2c */   v8 = *(_BYTE *)(a1 + 6850);
/* line: 17, address: 0x60563f44 */   v9 = *(_WORD *)(2 * v2 + 0xB0545C);
/* line: 18, address: 0x60563f5c */   ((void (__fastcall *)(_DWORD, float *, _DWORD))sub_605B8E44)(MEMORY[0xCB061C], v4, *(unsigned __int8 *)(a1 + 6879));
/* line: 19, address: 0x60563f80 */   sub_605BA078(MEMORY[0xCB061C], a1 + 6980, 2, *(unsigned __int8 *)(MEMORY[0xC9A684] + 18));
/* line: 20, address: 0x60563f98 */   ColliderMgr_removeRelated1(MEMORY[0xC8820C], a1 + 6120);
/* line: 21, address: 0x60563fac */   return StageActor::delete((StageActor *)a1, 1u);
/* line: 22 */ }