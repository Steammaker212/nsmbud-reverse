/* line: 0, address: 0x60134dd4 */ int __fastcall sub_60134DD4(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v3; // r0
/* line: 3 */   bool v4; // fnf
/* line: 4 */   int v5; // r1
/* line: 5 */   int v6; // r1
/* line: 6 */   int v7; // r5
/* line: 7 */   _DWORD v9[3]; // [sp+0h] [bp-28h] BYREF
/* line: 8 */   float v10[3]; // [sp+Ch] [bp-1Ch] BYREF
/* line: 9 */   _BYTE v11[8]; // [sp+18h] [bp-10h] BYREF
/* line: 10 */   _DWORD v12[2]; // [sp+20h] [bp-8h] BYREF
/* line: 11 */ 
/* line: 12, address: 0x60134de0 */   v3 = *(_DWORD *)(a2 + 64);
/* line: 13, address: 0x60134dfc */   v4 = *(float *)(a1 + 108) < *(float *)(v3 + 108);
/* line: 14, address: 0x60134e0c */   *(_DWORD *)(a1 + 6104) = v4;
/* line: 15, address: 0x60134e3c */   v10[0] = (float)((float)(fabsf(*(float *)(v3 + 120)) * 0.35) + 1.75) * *(float *)(4 * v4 + 0xAF6638);
/* line: 16, address: 0x60134e40 */   v10[1] = 3.75;
/* line: 17, address: 0x60134e44 */   v10[2] = 0.0;
/* line: 18, address: 0x60134e58 */   (*(void (__fastcall **)(int, float *, int))(*(_DWORD *)a1 + 308))(a1, v10, 0x10000000);
/* line: 19, address: 0x60134e60 */   v5 = *(_DWORD *)(a1 + 276);
/* line: 20, address: 0x60134e6c */   v9[0] = *(_DWORD *)(a1 + 272);
/* line: 21, address: 0x60134e6c */   v9[1] = v5;
/* line: 22, address: 0x60134e7c */   v9[2] = 1166843904;
/* line: 23, address: 0x60134e84 */   EffectData_create(21, v9, 0, 0);
/* line: 24, address: 0x60134e8c */   v6 = *(_DWORD *)(a1 + 112);
/* line: 25, address: 0x60134e98 */   v7 = MEMORY[0xC7F530];
/* line: 26, address: 0x60134ea0 */   v12[0] = *(_DWORD *)(a1 + 108);
/* line: 27, address: 0x60134ea4 */   v12[1] = v6;
/* line: 28, address: 0x60134eb0 */   mapPositionToScreen(v11, v12);
/* line: 29, address: 0x60134ec8 */   BasicSoundActor1_playSound(v7, "SE_EMY_DOWN_NO_SCORE", v11, 0);
/* line: 30, address: 0x60134ed4 */   *(_DWORD *)(a1 + 6108) = 2;
/* line: 31, address: 0x60134ee0 */   return 1;
/* line: 32 */ }