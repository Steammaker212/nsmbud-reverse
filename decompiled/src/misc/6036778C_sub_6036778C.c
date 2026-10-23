/* sub_6036778C
 * address: 0x6036778C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036778C(int a1)
{
  int v2; // r1
  int result; // r0
  ActiveColliderMgr *v4; // r5

  v2 = FIELD_U32(a1, 80);
  result = dword_60CC6484;
  if ( v2 )
  {
    if ( FIELD_F32(a1, 108) < (float)(FIELD_F32(dword_60CC6484, 120) + 16.0) )
      return result;
  }
  else if ( FIELD_F32(a1, 108) > (float)(FIELD_F32(dword_60CC6484, 112) + -16.0) )
  {
    return result;
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95D38);
}
