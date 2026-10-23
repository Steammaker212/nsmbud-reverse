/* BooCircle_onExecute
 * address: 0x603B2604   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BooCircle_onExecute(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0
  float v6; // s0

  v4 = FIELD_U32(a1, 6464);
  v2 = (_DWORD *)(a1 + 6464);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U32(a1, 6496) )
  {
    v5 = sub_603B27D8(a1);
    if ( v5 )
    {
      FIELD_F32(a1, 108) = FIELD_F32(v5, 108) + 8.0;
      v6 = FIELD_F32(v5, 112);
      FIELD_F32(a1, 112) = v6 + -16.0;
      return 1;
    }
  }
  else
  {
    StageActor__cullCheck((StageActor *)a1, 2);
  }
  return 1;
}
