/* skl_root_ref_23C438
 * address: 0x6023C438   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_23C438(int a1)
{
  _DWORD **v2; // r7
  int v3; // r0
  int (__fastcall *v4)(int, __int64 *); // r2
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  ActiveColliderMgr *v8; // r6
  int *v9; // r1
  int *v10; // r1
  unsigned int v11; // r0
  __int64 v13[9]; // [sp+0h] [bp-48h] BYREF

  v2 = (_DWORD **)(a1 + 6604);
  v3 = **(_DWORD **)(a1 + 6604);
  v4 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)v3 + 84);
  LODWORD(v13[0]) = &sead__SafeStringBase__vtable;
  HIDWORD(v13[0]) = "skl_root";
  v5 = v4(v3, v13);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v2 + 108))(**v2, v5, v13);
  sub_602372C0((int)(v2 + 1402), 1176, v13, 0);
  v6 = (*v2)[3];
  v7 = (*v2)[17];
  if ( (*v2)[2] > v7 )
    v6 += 4 * v7;
  if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 0x20) != 0 )
  {
    FIELD_U32(a1, 12064) = 1082130432;
    FIELD_U8(a1, 12102) = 0;
    FIELD_U8(a1, 12752) = 0;
    FIELD_U8(a1, 12728) = -1;
    FIELD_U8(a1, 12753) = 0;
    FIELD_U8(a1, 12729) = -1;
    FIELD_U8(a1, 12754) = 0;
    FIELD_U8(a1, 12730) = -1;
    FIELD_U8(a1, 12755) = 0;
    FIELD_U8(a1, 12731) = -1;
    v8 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6300))
      && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 6300)) )
    {
      ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 6300));
    }
    if ( FIELD_U8(a1, 12106) )
      v9 = &dword_60C8DA18;
    else
      v9 = (int *)&unk_60C8DA58;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v9);
  }
  v10 = (int *)(*v2)[3];
  v11 = (*v2)[17];
  if ( (*v2)[2] > v11 )
    v10 += v11;
  return Animation_update(*v10);
}
