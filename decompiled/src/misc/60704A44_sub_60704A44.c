/* sub_60704A44
 * address: 0x60704A44   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60704A44(int a1)
{
  unsigned __int8 v1; // r1
  char v2; // r7
  int v3; // r2
  int v4; // r1
  unsigned int v5; // r3
  char *v6; // r5
  int v7; // r4
  ActiveCollider *v8; // r6
  ActiveColliderMgr *v9; // r8
  ActiveCollider *v11; // r6
  ActiveColliderMgr *v12; // r8

  if ( !FIELD_U8(a1, 539) )
    return 1;
  v1 = FIELD_U8(a1, 539) - 1;
  v2 = 1;
  v3 = v1 - 32;
  v4 = 1 << v1;
  v5 = 1u >> (33 - FIELD_U8(a1, 539));
  if ( v3 >= 0 )
  {
    v5 = 1 << v3;
    v4 = 0;
  }
  v6 = (char *)(a1 + 6312);
  if ( FIELD_U32(EventMgr__instance, 16) & v4 | FIELD_U32(EventMgr__instance, 20) & v5 )
  {
    v7 = 0;
    if ( !FIELD_U8(a1, 6312) )
    {
      v8 = (ActiveCollider *)(a1 + 188);
      v9 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromCreateList(v9, v8);
      ActiveColldierMgr_removeFromList3(v9, (int)v8);
    }
  }
  else
  {
    v7 = 1;
    v2 = 0;
    if ( FIELD_U8(a1, 6312) )
    {
      v11 = (ActiveCollider *)(a1 + 188);
      v12 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v12, v11) )
      {
        ActiveColliderMgr_addToCreateList(v12, v11);
      }
    }
  }
  *v6 = v2;
  return v7;
}
