/* RedCoin_vf55
 * address: 0x606C9470   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RedCoin_vf55(int a1, float a2)
{
  int result; // r0
  __int64 v4; // r0

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  result = SE_OBJ_GET_RED_COIN_ref(a1);
  if ( !result )
  {
    v4 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    result = FIELD_U32(EventMgr__instance, 16) & v4
           | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v4) >> 32);
    if ( !result )
    {
      FIELD_U8(a1, 7080) = 4;
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC38);
    }
  }
  return result;
}
