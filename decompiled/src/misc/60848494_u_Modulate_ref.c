/* u_Modulate_ref
 * address: 0x60848494   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall u_Modulate_ref(
        int a1,
        nn__mii__detail__BufferAllocator *a2,
        int a3,
        nn__util__BinaryFileHeader *this,
        int a5,
        int a6)
{
  int v9; // r6
  int v11; // [sp+Ch] [bp-2Ch] BYREF
  int v12; // [sp+10h] [bp-28h]
  int FirstBlock_const; // [sp+14h] [bp-24h] BYREF
  int v14; // [sp+18h] [bp-20h]

  FirstBlock_const = nn__util__BinaryFileHeader__GetFirstBlock_const(this);
  v14 = a5;
  v11 = sub_6083E92C(a6);
  v12 = 4871;
  sub_608485C4(a1, a3, a2, (int)&unk_60B0E94C, 4, (int)&v11, (int)&FirstBlock_const);
  v11 = sub_6083E934(a6);
  v12 = 4871;
  sub_60848778(a1 + 16, a3, a2, (int)&unk_60B0E9CC, 4, (int)&v11, (int)&FirstBlock_const);
  v9 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(FirstBlock_const, 32) + dword_60BF9D80[v14]) + 104);
  FIELD_U32(a1, 36) = sub_6083BDB8(v9, 4, 3, "u_Modulate");
  FIELD_U32(a1, 32) = sub_6083BDB8(v9, 4, 2, "s_Tex");
  FIELD_U8(a1, 40) = sub_6083E93C(a6);
  return 0;
}
