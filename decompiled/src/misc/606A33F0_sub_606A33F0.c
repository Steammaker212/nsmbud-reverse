/* sub_606A33F0
 * address: 0x606A33F0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A33F0(int a1)
{
  int v2; // r6
  int v3; // r4
  int *v4; // r5
  _DWORD *v5; // r9
  int *v6; // r10
  _DWORD *v7; // r0

  v2 = 52;
  v4 = (int *)(a1 + 6100);
  v3 = FIELD_U32(a1, 6100);
  v5 = (_DWORD *)(a1 + 6108);
  v6 = (int *)(a1 + 6104);
  do
  {
    v7 = (_DWORD *)operator_new(0x10u);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    if ( v3 < *v6 )
    {
      *(_DWORD *)(*v5 + 4 * v3) = v7;
      v3 = *v4 + 1;
      *v4 = v3;
    }
    --v2;
  }
  while ( v2 );
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9A58);
  return 1;
}
