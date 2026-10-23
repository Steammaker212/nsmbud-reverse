/* sub_60252DA4
 * address: 0x60252DA4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60252DA4(int a1)
{
  _DWORD *v1; // r1
  int *v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1
  int v5; // r1

  v1 = *(_DWORD **)(a1 + 6304);
  v2 = (int *)v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += v4;
  v5 = *v2;
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  if ( !FIELD_U8(a1, 6220) )
    StateMgrExt_changeState((StateMgr *)(a1 + 0x17C4), &Enemy_StateId_Frozen._._);
  return 1;
}
