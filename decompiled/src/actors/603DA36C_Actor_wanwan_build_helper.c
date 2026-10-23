/* Actor_wanwan_build_helper
 * address: 0x603DA36C   size: 228   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_wanwan_build_helper(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r2

  memset((void *)(a1 + 408), 0, 204);
  FIELD_U32(a1, 1040) = a2;
  FIELD_U32(a1, 1044) = 0;
  FIELD_U32(a1, 1048) = &off_60BF8470;
  FIELD_U32(a1, 1052) = &off_60BF8480;
  FIELD_U32(a1, 1056) = &off_60BF84A4;
  FIELD_U32(a1, 1060) = a1;
  FIELD_U32(a1, 1064) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 1068), (StateExecuter *)(a1 + 1052), &NullState);
  v4 = 0;
  FIELD_U32(a1, 1048) = &off_60BF8460;
  v5 = 1020;
  do
  {
    *(_DWORD *)(a1 + v4) = 0;
    v6 = (_DWORD *)(a1 + v4);
    v4 += 12;
    v6[1] = 0;
    v6[2] = 0;
    v6[51] = 0;
    v6[52] = 0;
    v6[53] = 0;
    v6[102] = 0;
    v6[103] = 0;
    v6[104] = 0;
    v6[153] = 0;
    v6[154] = 0;
    v6[155] = 0;
    v6[204] = 0;
    v6[205] = 0;
    v6[206] = 0;
    *(_BYTE *)(a1 + v5++) = 0;
  }
  while ( v4 != 204 );
  return a1;
}
