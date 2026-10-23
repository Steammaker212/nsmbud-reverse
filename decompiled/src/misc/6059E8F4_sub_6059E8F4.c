/* sub_6059E8F4
 * address: 0x6059E8F4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059E8F4(int a1)
{
  int result; // r0
  int *v3; // r7
  unsigned int v4; // r4
  ActiveColliderMgr *v5; // r5
  unsigned int v6; // r0
  ActiveCollider *v7; // r6

  v3 = (int *)(a1 + 7764);
  result = FIELD_U32(a1, 7764);
  if ( result >= 1 )
  {
    v4 = 0;
    v5 = ActiveColliderMgr_instance;
    do
    {
      v6 = 0;
      if ( v4 < 0xA )
        v6 = v4;
      v7 = (ActiveCollider *)(a1 + 304 * v6 + 7780);
      if ( !ActiveColliderMgr_isInActiveList(v5, v7) && !ActiveColliderMgr_isInCreateList(v5, v7) )
        ActiveColliderMgr_addToCreateList(v5, v7);
      result = *v3;
      ++v4;
    }
    while ( (int)v4 < *v3 );
  }
  return result;
}
