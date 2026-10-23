/* sub_6035DF70
 * address: 0x6035DF70   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035DF70(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  ActiveColliderMgr *v5; // r6
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9578C + 8))();
  if ( v2 != result )
  {
    FIELD_U8(a1, 6693) = 1;
    v4 = FIELD_U32(a1, 6304);
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = "ready";
    sub_6040F4B8(v4, v6, 1);
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 140) = 0;
    if ( FIELD_U32(a1, 6668) )
    {
      FIELD_U32(a1, 6684) = 1099431936;
      FIELD_U32(a1, 6688) = 0;
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -17.0;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
    v5 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
    }
    sub_6015913C((ActiveCollider *)(a1 + 188), 32775);
    sub_6015913C((ActiveCollider *)(a1 + 188), 128);
    sub_6015913C((ActiveCollider *)(a1 + 12288), 2048);
    FIELD_U8(a1, 6677) = 0;
    return 6677;
  }
  return result;
}
