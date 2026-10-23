/* sub_6027BE78
 * address: 0x6027BE78   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027BE78(int a1)
{
  unsigned int v2; // r1
  _DWORD *v3; // r4
  unsigned int v4; // t1
  int v5; // r0

  if ( FIELD_U8(a1, 9323) )
    sub_6040B3B0(dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6546));
  v4 = FIELD_U32(a1, 6304);
  v3 = (_DWORD *)(a1 + 6304);
  v2 = v4;
  if ( v4 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v5 )
      FIELD_U8(v5, 10567) = 1;
    *v3 = 0;
  }
  return 1;
}
