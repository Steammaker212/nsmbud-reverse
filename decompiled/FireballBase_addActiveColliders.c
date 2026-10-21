/* line: 0, address: 0x601361fc */ int __fastcall FireballBase_addActiveColliders(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r4
/* line: 3 */   int v3; // r5
/* line: 4 */   int result; // r0
/* line: 5 */ 
/* line: 6, address: 0x60136204 */   StageActor::addActiveColliders(a1);
/* line: 7, address: 0x6013620c */   v2 = a1 + 6436;
/* line: 8, address: 0x6013621c */   v3 = MEMORY[0xC88234];
/* line: 9, address: 0x60136224 */   result = ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], v2);
/* line: 10, address: 0x6013622c */   if ( !result )
/* line: 11 */   {
/* line: 12, address: 0x60136238 */     result = ActiveColliderMgr_isInCreateList(v3, v2);
/* line: 13, address: 0x60136240 */     if ( !result )
/* line: 14, address: 0x60136254 */       return ActiveColliderMgr_addToCreateList(v3, v2);
/* line: 15 */   }
/* line: 16, address: 0x6013622c */   return result;
/* line: 17 */ }