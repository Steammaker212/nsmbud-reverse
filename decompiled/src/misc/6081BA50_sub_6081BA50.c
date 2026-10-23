/* sub_6081BA50
 * address: 0x6081BA50   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081BA50(int a1)
{
  void *v2; // r0
  int MethodTreeMgr_const; // r0
  int v4; // r5
  void (__fastcall ***v5)(_DWORD, int, _DWORD); // r0
  int result; // r0

  FIELD_U32(a1, 264) = 0;
  v2 = *(void **)(a1 + 272);
  if ( v2 )
    operator_delete_8DE3FC(v2);
  FIELD_U32(a1, 272) = 0;
  if ( FIELD_U8(a1, 276) )
    sub_60819C54(dword_60CC6BF4);
  FIELD_U32(a1, 280) = -1;
  MethodTreeMgr_const = sead__TaskBase__getMethodTreeMgr_const(a1);
  v4 = (*(int (__fastcall **)(int, int))(*(_DWORD *)MethodTreeMgr_const + 20))(MethodTreeMgr_const, 1);
  sead__MethodTreeNode__lock(v4);
  v5 = *(void (__fastcall ****)(_DWORD, int, _DWORD))(v4 + 72);
  if ( v5 )
    (**v5)(v5, v4, 0);
  FIELD_U32(v4, 68) = 0;
  sead__MethodTreeNode__unlock(v4);
  sub_60817E08(dword_60CC6B68);
  nullsub_64();
  FIELD_U8(a1, 285) = 1;
  result = dword_60C9CF18;
  if ( dword_60C9CF18 )
    return sub_604574C8(dword_60C9CF18, 2, 0);
  return result;
}
