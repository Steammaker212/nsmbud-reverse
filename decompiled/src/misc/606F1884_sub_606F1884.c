/* sub_606F1884
 * address: 0x606F1884   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F1884(int a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r1

  v1 = FIELD_U32(a1, 20);
  v2 = 30 * BYTE2(v1);
  if ( !BYTE2(v1) )
    v2 = 10;
  FIELD_U32(a1, 6100) = v2;
  FIELD_U32(a1, 6104) = 60 * ((unsigned __int8)v1 >> 4);
  v3 = BYTE1(v1);
  if ( !v3 )
    v3 = -1;
  FIELD_U32(a1, 6108) = v3;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBC29C);
  return 1;
}
