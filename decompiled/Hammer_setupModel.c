/* line: 0, address: 0x6013fcd4 */ int __fastcall HammerActor_setupModel(int a1)
/* line: 1 */ {
/* line: 2 */   int ResArchiveById; // r5
/* line: 3 */   int v3; // r6
/* line: 4 */   int v4; // r7
/* line: 5 */   int v5; // r0
/* line: 6 */   _DWORD v7[2]; // [sp+18h] [bp-8h] BYREF
/* line: 7 */ 
/* line: 8, address: 0x6013fcf0 */   ResArchiveById = Profile::getResArchiveById(*(Profile **)(a1 + 12), 0);
/* line: 9, address: 0x6013fd20 */   v7[0] = 12321336;
/* line: 10, address: 0x6013fd2c */   v7[1] = "bros_hammer";
/* line: 11, address: 0x6013fd38 */   v3 = ((int (__fastcall *)(int, _DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))Resource_getModel2)(
/* line: 12 */          ResArchiveById,
/* line: 13 */          v7,
/* line: 14 */          1,
/* line: 15 */          0,
/* line: 16 */          0,
/* line: 17 */          0,
/* line: 18 */          0,
/* line: 19 */          0,
/* line: 20 */          0);
/* line: 21, address: 0x6013fd60 */   v4 = operator new(48, 0, 4);
/* line: 22, address: 0x6013fd68 */   v5 = ModelWrapper_ctor(v4, v3, 1, 0, 0, 0, 0);
/* line: 23, address: 0x6013fd78 */   ModelWrapper_setup(v5, ResArchiveById, 0, 0);
/* line: 24, address: 0x6013fd80 */   *(_DWORD *)(a1 + 11824) = v4;
/* line: 25, address: 0x6013fd88 */   return 11824;
/* line: 26 */ }