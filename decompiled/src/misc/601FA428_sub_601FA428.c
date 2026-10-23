/* sub_601FA428
 * address: 0x601FA428   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FA428(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v5; // r1
  _DWORD *v8; // r0
  int v9; // r2
  int v10; // r3
  int result; // r0

  v5 = FIELD_U32(a1, 16);
  if ( v5 && (v8 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v5)) != 0 )
  {
    *a2 = v8[32];
    a2[1] = v8[33];
    a2[2] = v8[34];
    v9 = v8[45];
    v10 = v8[46];
    *a3 = v8[44];
    a3[1] = v9;
    a3[2] = v10;
    *a4 = v8[20];
    a4[1] = v8[21];
    result = v8[22];
    a4[2] = result;
  }
  else
  {
    *a2 = 1059313418;
    a2[1] = 1059313418;
    a2[2] = 1059313418;
    *a3 = -174599257;
    a3[1] = -1785467282;
    a3[2] = 221109434;
    *a4 = 1166807518;
    a4[1] = -1023609939;
    a4[2] = -991982617;
    return 1166807518;
  }
  return result;
}
