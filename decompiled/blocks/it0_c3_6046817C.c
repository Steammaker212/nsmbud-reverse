/* line: 0, address: 0x6046817c */ int __fastcall sub_6046817C(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   _DWORD *v2; // r5
/* line: 3 */   sead::IDisposer *v3; // r6
/* line: 4 */ 
/* line: 5, address: 0x6046819c */   *a1 = 12564060;
/* line: 6, address: 0x6046819c */   v2 = a1 + 1583;
/* line: 7, address: 0x604681b0 */   a1[1671] = 12325992;
/* line: 8, address: 0x604681b0 */   v3 = (sead::IDisposer *)(a1 + 1671);
/* line: 9, address: 0x604681b8 */   sub_60237560(a1 + 1671);
/* line: 10, address: 0x604681c0 */   sead::IDisposer::~IDisposer(v3);
/* line: 11, address: 0x604681c8 */   ActiveCollider_dtor(v2);
/* line: 12, address: 0x604681dc */   *a1 = 12321080;
/* line: 13, address: 0x604681e0 */   CollisionMgr_dtor(a1 + 162);
/* line: 14, address: 0x604681e8 */   StageActor::~StageActor((Actor *)a1);
/* line: 15 */   return operator delete();
/* line: 16 */ }