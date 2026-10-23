/* sub_606D2F94
 * address: 0x606D2F94   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D2F94(int a1)
{
  int v2; // r0
  int v3; // r5
  ColliderBase *v4; // r4
  _BOOL4 v5; // r0

  if ( !FIELD_U8(a1, 6896) )
    JUMPOUT(0x60000CD0);
  StageActor__cullCheck((StageActor *)a1, 2);
  v3 = v2;
  v4 = (ColliderBase *)(a1 + 6192);
  v5 = sub_601536B0((int)ColliderMgr_instance, (int)v4);
  if ( v3 == 1 )
  {
    if ( v5 )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, v4);
      return 0;
    }
  }
  else if ( !v5 )
  {
    ColliderMgr_add(ColliderMgr_instance, v4);
  }
  return 0;
}
