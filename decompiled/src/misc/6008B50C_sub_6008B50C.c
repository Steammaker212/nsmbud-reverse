/* sub_6008B50C
 * address: 0x6008B50C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B50C(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  signed int List; // r1
  int result; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188)) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 896))(a1) ^ 1;
  List = ActiveColliderMgr_isInCreateList(v3, v2);
  result = 0;
  if ( List == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 896))(a1) ^ 1;
  return result;
}
