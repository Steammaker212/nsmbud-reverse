/* line: 0, address: 0x6079ed74 */ int __fastcall sub_6079ED74(int *a1)
/* line: 1 */ {
/* line: 2 */   int (__fastcall ***v2)(_DWORD, int); // r5
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x6079ed88 */   a1[307] &= ~0x400u;
/* line: 6, address: 0x6079ed94 */   a1[304] &= ~0x2000u;
/* line: 7, address: 0x6079ed9c */   a1[3039] = 1065353216;
/* line: 8, address: 0x6079edac */   a1[40] = sub_60773F3C((int)a1, a1[20]);
/* line: 9, address: 0x6079edc0 */   a1[3025] = 0;
/* line: 10, address: 0x6079ede0 */   v2 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 11, address: 0x6079ee00 */   result = _cxa_guard_acquire_0(13087760);
/* line: 12, address: 0x6079ee08 */   if ( result )
/* line: 13 */   {
/* line: 14, address: 0x6079ee20 */     MEMORY[0xC7B40C] = 12320980;
/* line: 15, address: 0x6079ee2c */     result = _cxa_guard_release_0(13087760);
/* line: 16 */   }
/* line: 17, address: 0x6079ee34 */   if ( v2 )
/* line: 18 */   {
/* line: 19, address: 0x6079ee4c */     result = (**v2)(v2, 13087756);
/* line: 20, address: 0x6079ee54 */     if ( result == 1 )
/* line: 21 */     {
/* line: 22, address: 0x6079ee60 */       sub_60794640(a1[2840]);
/* line: 23, address: 0x6079ee74 */       return sub_6079E154(a1, a1[2852], 1);
/* line: 24 */     }
/* line: 25 */   }
/* line: 26, address: 0x6079ee34 */   return result;
/* line: 27 */ }