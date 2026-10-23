/* sub_60158FA8
 * address: 0x60158FA8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60158FA8(ActiveCollider *a1, int a2)
{
  int v4; // r1
  signed int result; // r0
  unsigned int v6; // r1
  int v7; // r2
  bool v8; // zf
  ActiveColliderMgr *v9; // r6

  v4 = FIELD_U32(a1, 0x74).field_1C;
  result = (a2 & 0x800) == 0;
  v6 = v4 & 0x800;
  v7 = (v6 == 0) | ((unsigned __int16)(a2 & 0x800) >> 11);
  v8 = v7 == 0;
  if ( v7 )
  {
    result |= v6 >> 11;
    v8 = result == 0;
  }
  if ( v8 )
  {
    v9 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, a1)
      || (result = ActiveColliderMgr_isInCreateList(v9, a1), result == 1) )
    {
      ActiveColldierMgr_removeFromActiveList(v9, a1);
      ActiveColldierMgr_removeFromCreateList(v9, a1);
      ActiveColldierMgr_removeFromList3(v9, (int)a1);
      result = ActiveColliderMgr_isInActiveList(v9, a1);
      if ( !result )
      {
        result = ActiveColliderMgr_isInCreateList(v9, a1);
        if ( !result )
          result = (signed int)ActiveColliderMgr_addToCreateList(v9, a1);
      }
    }
  }
  FIELD_U32(a1, 0x74).field_1C = a2;
  return result;
}
