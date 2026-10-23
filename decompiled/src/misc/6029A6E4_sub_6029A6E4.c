/* sub_6029A6E4
 * address: 0x6029A6E4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029A6E4(int a1)
{
  int v2; // r1
  _DWORD v3[5]; // [sp+0h] [bp-28h] BYREF
  char v4; // [sp+14h] [bp-14h]
  int v5; // [sp+18h] [bp-10h]
  char v6; // [sp+1Ch] [bp-Ch]

  if ( FIELD_U32(a1, 6240) )
    return Enemy__vf25C();
  FIELD_U8(a1, 6672) = 1;
  v2 = FIELD_U32(a1, 6284);
  v3[0] = dword_60AFE3F8[v2];
  v3[1] = 1081711002;
  v3[2] = -1065353216;
  v3[3] = unk_60C906E8;
  v3[4] = &dword_60C8FD58;
  v4 = -1;
  v5 = v2;
  v6 = -1;
  return sub_602A852C(a1 + 6104, v3);
}
