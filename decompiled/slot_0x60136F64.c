#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);

/* ---- forward declarations for functions defined below ---- */
void __fastcall FireballBase_dtor(int a1);
/* line: 0, address: 0x60136f64 */ void __fastcall FireballBase_dtor(int a1)
/* line: 1 */ {
/* line: 2 */   LightSource *v2; // r5
/* line: 3 */ 
/* line: 4, address: 0x60136f80 */   *(_DWORD *)a1 = 12395168;
/* line: 5, address: 0x60136f80 */   v2 = (LightSource *)(a1 + 6364);
/* line: 6, address: 0x60136f8c */   ActiveCollider_dtor(a1 + 6436);
/* line: 7, address: 0x60136f94 */   LightSource__dtor(v2);
/* line: 8, address: 0x60136fac */   *(_DWORD *)(a1 + 6260) = 12325992;
/* line: 9, address: 0x60136fb4 */   sub_60237560(a1 + 6260);
/* line: 10, address: 0x60136fbc */   sead__IDisposer__dtor((struct sead_IDisposer *)(a1 + 6260));
/* line: 11, address: 0x60136fd0 */   *(_DWORD *)a1 = 12321080;
/* line: 12, address: 0x60136fd4 */   CollisionMgr_dtor(a1 + 648);
/* line: 13, address: 0x60136fe0 */   StageActor__dtor((StageActor *)a1);
/* line: 14 */ }