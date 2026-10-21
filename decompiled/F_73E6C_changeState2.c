/* line: 0, address: 0x60773e6c */ int __fastcall sub_60773E6C(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */ 
/* line: 4, address: 0x60773e7c */   result = *(unsigned __int8 *)(a1 + 1204);
/* line: 5, address: 0x60773e84 */   if ( (result & 0x10) == 0 )
/* line: 6 */   {
/* line: 7, address: 0x60773e94 */     sub_6040A1D8(MEMORY[0xC9A1F0]);
/* line: 8, address: 0x60773ea0 */     *(_BYTE *)(a1 + 1296) = 0;
/* line: 9, address: 0x60773ea4 */     *(_BYTE *)(a1 + 1314) = 0;
/* line: 10, address: 0x60773ea8 */     *(_DWORD *)(a1 + 9940) = 0;
/* line: 11, address: 0x60773eb0 */     *(_DWORD *)(a1 + 9944) = 0;
/* line: 12, address: 0x60773eb8 */     *(_DWORD *)(a1 + 9948) = 0;
/* line: 13, address: 0x60773ec4 */     *(_DWORD *)(a1 + 1228) &= 0xFFFFD3FF;
/* line: 14, address: 0x60773ed0 */     *(_DWORD *)(a1 + 1208) &= ~8u;
/* line: 15, address: 0x60773edc */     *(_DWORD *)(a1 + 1204) &= ~0x400u;
/* line: 16, address: 0x60773ee4 */     *(_DWORD *)(a1 + 9932) = a3;
/* line: 17, address: 0x60773eec */     *(_DWORD *)(a1 + 9936) = 0;
/* line: 18, address: 0x60773efc */     StateMgr::changeState((_DWORD *)(a1 + 9916), a2);
/* line: 19, address: 0x60773f10 */     return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
/* line: 20 */   }
/* line: 21, address: 0x60773e84 */   return result;
/* line: 22 */ }