/* sub_6074B5F8
 * address: 0x6074B5F8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074B5F8(int a1)
{
  int v2; // r0
  _DWORD v4[14]; // [sp+0h] [bp-38h] BYREF

  sub_6074B6DC();
  ++FIELD_U32(a1, 652);
  v2 = FIELD_U32(a1, 644);
  if ( v2 )
    FIELD_U32(a1, 644) = v2 - 1;
  StateMgr__execute((StateMgr *)(a1 + 1240));
  if ( FIELD_U8(a1, 1212) )
  {
    v4[0] = 1065353216;
    v4[1] = 0;
    v4[2] = 0;
    v4[4] = 0;
    v4[5] = 1065353216;
    v4[6] = 0;
    v4[8] = 0;
    v4[9] = 0;
    v4[10] = 1065353216;
    v4[3] = FIELD_U32(a1, 1200);
    v4[7] = FIELD_U32(a1, 1204);
    v4[11] = FIELD_U32(a1, 1208);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 1196) + 60))(FIELD_U32(a1, 1196), v4);
    (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 1196) + 68))(FIELD_U32(a1, 1196), &dword_60B3B98C);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1196) + 52))(FIELD_U32(a1, 1196));
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1196) + 56))(FIELD_U32(a1, 1196));
  }
  return 1;
}
