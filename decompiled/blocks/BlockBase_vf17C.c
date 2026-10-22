
// ---- addr: 0x60563fc0 */ int __fastcall BlockBase::vf17C(int a1)
/* line: 1 */ {
/* line: 2 */   _DWORD v3[2]; // [sp+4h] [bp-Ch] BYREF
/* line: 3 */   char v4; // [sp+Ch] [bp-4h]
/* line: 4 */   char v5; // [sp+Dh] [bp-3h]
/* line: 5 */   __int16 v6; // [sp+Eh] [bp-2h]
/* line: 6 */ 
/* line: 7, address: 0x60563fe0 */   v3[0] = *(_DWORD *)(a1 + 108);
/* line: 8, address: 0x60563ff0 */   *(float *)&v3[1] = *(float *)(a1 + 112) + 8.0;
/* line: 9, address: 0x60563ff8 */   v4 = *(_BYTE *)(a1 + 6849);
/* line: 10, address: 0x60564004 */   v5 = *(_BYTE *)(a1 + 6850);
/* line: 11, address: 0x6056401c */   v6 = *(_WORD *)(2 * *(_DWORD *)(a1 + 7368) + 0xB0545C);
/* line: 12, address: 0x60564034 */   sub_605B9AD4(MEMORY[0xCB061C], v3, 0, *(unsigned __int8 *)(a1 + 6879));
/* line: 13, address: 0x60564058 */   sub_605BA078(MEMORY[0xCB061C], a1 + 6980, 2, *(unsigned __int8 *)(MEMORY[0xC9A684] + 18));
/* line: 14, address: 0x60564070 */   ColliderMgr_removeRelated1(MEMORY[0xC8820C], a1 + 6120);
/* line: 15, address: 0x60564084 */   return StageActor::delete((StageActor *)a1, 1u);
/* line: 16 */ }