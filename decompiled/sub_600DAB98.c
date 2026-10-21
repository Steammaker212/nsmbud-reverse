/* line: 0, address: 0x600dab98 */ int __fastcall sub_600DAB98(int a1)
/* line: 1 */ {
/* line: 2 */   _DWORD *v2; // r0
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // t1
/* line: 5 */   _DWORD **v5; // r5
/* line: 6 */   int (*v6)(void); // r2
/* line: 7 */   const char *v7; // r1
/* line: 8 */   int v8; // r0
/* line: 9 */   _DWORD v10[12]; // [sp+4h] [bp-3Ch] BYREF
/* line: 10 */   _DWORD v11[3]; // [sp+34h] [bp-Ch] BYREF
/* line: 11 */ 
/* line: 12, address: 0x600daba8 */   v4 = *(_DWORD *)(a1 + 7092);
/* line: 13, address: 0x600daba8 */   v2 = (_DWORD *)(a1 + 7092);
/* line: 14, address: 0x600daba8 */   v3 = v4;
/* line: 15, address: 0x600dabb0 */   if ( v4 == 1 )
/* line: 16 */   {
/* line: 17, address: 0x600dac18 */     if ( !*(_WORD *)(a1 + 6276) )
/* line: 18 */     {
/* line: 19, address: 0x600dac2c */       *v2 = 2;
/* line: 20, address: 0x600dac34 */       v5 = (_DWORD **)(a1 + 7096);
/* line: 21, address: 0x600dac40 */       v6 = *(int (**)(void))(***(_DWORD ***)(a1 + 7096) + 84);
/* line: 22, address: 0x600dac50 */       v10[0] = 12321336;
/* line: 23, address: 0x600dac58 */       v7 = "ankle_l1";
/* line: 24, address: 0x600dac58 */       goto LABEL_7;
/* line: 25 */     }
/* line: 26 */   }
/* line: 27, address: 0x600dabc4 */   else if ( !v3 && !*(_WORD *)(a1 + 6276) )
/* line: 28 */   {
/* line: 29, address: 0x600dabd8 */     *(_WORD *)(a1 + 6276) = 20;
/* line: 30, address: 0x600dabe0 */     *v2 = 1;
/* line: 31, address: 0x600dabe8 */     v5 = (_DWORD **)(a1 + 7096);
/* line: 32, address: 0x600dabf4 */     v6 = *(int (**)(void))(***(_DWORD ***)(a1 + 7096) + 84);
/* line: 33, address: 0x600dac04 */     v10[0] = 12321336;
/* line: 34, address: 0x600dac0c */     v7 = "ankle_r1";
/* line: 35 */ LABEL_7:
/* line: 36, address: 0x600dac5c */     v10[1] = v7;
/* line: 37, address: 0x600dac64 */     v8 = v6();
/* line: 38, address: 0x600dac80 */     (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v5 + 108))(**v5, v8, v10);
/* line: 39, address: 0x600dac9c */     v11[0] = v10[3];
/* line: 40, address: 0x600daca8 */     v11[2] = v10[11];
/* line: 41, address: 0x600dacb0 */     *(float *)&v11[1] = *(float *)&v10[7] + -4.0;
/* line: 42, address: 0x600dacb4 */     EffectData_create(759, v11, 0, 0);
/* line: 43 */   }
/* line: 44, address: 0x600dacc4 */   return KoopalingBase::vf670((KoopalingBase *)a1);
/* line: 45 */ }