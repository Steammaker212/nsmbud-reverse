
// ---- addr: 0x60563984 */ int __fastcall BlockBase::onDraw(int a1)
/* line: 1 */ {
/* line: 2 */   float v1; // r2
/* line: 3 */   int v2; // r3
/* line: 4 */   _DWORD v4[3]; // [sp+8h] [bp-10h] BYREF
/* line: 5 */   int v5; // [sp+14h] [bp-4h] BYREF
/* line: 6 */ 
/* line: 7, address: 0x6056399c */   v5 = 0;
/* line: 8, address: 0x605639a0 */   v1 = *(float *)(a1 + 112);
/* line: 9, address: 0x605639a0 */   v2 = *(_DWORD *)(a1 + 116);
/* line: 10, address: 0x605639a4 */   v4[0] = *(_DWORD *)(a1 + 108);
/* line: 11, address: 0x605639a4 */   v4[2] = v2;
/* line: 12, address: 0x605639c8 */   *(float *)&v4[1] = v1 + 8.0;
/* line: 13, address: 0x605639dc */   ((void (__fastcall *)(_DWORD, _DWORD, _DWORD *, int *, int))DrawMgr_drawTile)(
/* line: 14 */     MEMORY[0xC9CD1C],
/* line: 15 */     *(_DWORD *)(a1 + 7296),
/* line: 16 */     v4,
/* line: 17 */     &v5,
/* line: 18 */     a1 + 144);
/* line: 19, address: 0x605639e8 */   return 1;
/* line: 20 */ }