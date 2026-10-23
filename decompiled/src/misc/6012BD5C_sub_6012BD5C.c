/* sub_6012BD5C
 * address: 0x6012BD5C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012BD5C(int a1)
{
  _DWORD *v2; // r0
  _DWORD **v3; // r1
  int *v4; // r4
  unsigned int v5; // t1
  _DWORD *v6; // r3
  _DWORD *v7; // r3
  int result; // r0
  _DWORD *v9; // r1

  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6304));
  v3 = (_DWORD **)(a1 + 6648);
  v2 = *(_DWORD **)(a1 + 6648);
  *v2 = 0;
  v2[1] = 0;
  v5 = FIELD_U32(a1, 6644);
  v4 = (int *)(a1 + 6644);
  v6 = *v3;
  if ( v5 > 1 )
    v6 += 2;
  *v6 = 0;
  v6[1] = 0;
  v7 = *v3;
  if ( (unsigned int)*v4 > 2 )
    v7 += 4;
  *v7 = 0;
  v7[1] = 0;
  result = *v4;
  v9 = *v3;
  if ( (unsigned int)*v4 > 3 )
    v9 += 6;
  *v9 = 0;
  v9[1] = 0;
  return result;
}
