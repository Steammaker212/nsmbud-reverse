#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall FireballBase_removeActiveColliders(int a1);
/* line: 0, address: 0x601361b0 */ int __fastcall FireballBase_removeActiveColliders(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r4
/* line: 3 */   int v2; // r5
/* line: 4 */ 
/* line: 5, address: 0x601361b4 */   v1 = a1;
/* line: 6, address: 0x601361b8 */   StageActor::removeActiveColliders(a1);
/* line: 7, address: 0x601361c0 */   v1 += 6436;
/* line: 8, address: 0x601361d0 */   v2 = MEMORY[0xC88234];
/* line: 9, address: 0x601361d8 */   ActiveColldierMgr_removeFromActiveList(MEMORY[0xC88234], v1);
/* line: 10, address: 0x601361e4 */   ActiveColldierMgr_removeFromCreateList(v2, v1);
/* line: 11 */   return ActiveColldierMgr_removeFromList3(v2, v1);
/* line: 12 */ }