/* sub_6091DD8C
 * address: 0x6091DD8C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091DD8C(int a1, int a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r1
  bool v8; // zf
  int v9; // r4
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0

  result = FIELD_U8(a1, 8);
  if ( (result & 2) != 0 )
  {
    v5 = dword_60CCFC8C + 44;
    sead__CriticalSection__lock(dword_60CCFC8C + 44);
    if ( (FIELD_U8(a1, 8) & 2) != 0 )
      sub_6091D9B0(a1);
    sead__CriticalSection__unlock(v5);
    result = FIELD_U8(a1, 8);
  }
  if ( (result & 1) != 0 )
  {
    v6 = FIELD_U8(a2, 249);
    v7 = *(_DWORD *)(FIELD_U32(a1, 4) + 36);
    v8 = v6 == v7;
    if ( v6 == v7 )
      v8 = FIELD_U8(a2, 250) == 0;
    if ( !v8 )
      sub_6091380C(a2, v7);
    v9 = FIELD_U32(a2, 192);
    dword_60CC7818(v9, a1 + 728, 63);
    result = *(_DWORD *)(FIELD_U32(a1, 4) + 48);
    if ( result >= 1 )
    {
      v10 = sub_60916E38(0);
      dword_60CC7824(
        v9,
        v10,
        0,
        dword_60CC7824,
        FIELD_U32(dword_60CD0B68, 96),
        FIELD_U32(dword_60CD0B68, 100),
        FIELD_U32(dword_60CD0B68, 28));
      v11 = sub_60916E38(1);
      dword_60CC7824(
        v9,
        v11,
        0,
        FIELD_U32(dword_60CD0B68, 100),
        FIELD_U32(dword_60CD0B68, 96),
        FIELD_U32(dword_60CD0B68, 100),
        FIELD_U32(dword_60CD0B68, 28));
      v12 = sub_60916E38(2);
      dword_60CC7824(
        v9,
        v12,
        0,
        FIELD_U32(dword_60CD0B68, 100),
        FIELD_U32(dword_60CD0B68, 96),
        FIELD_U32(dword_60CD0B68, 100),
        FIELD_U32(dword_60CD0B68, 28));
      v13 = sub_60916E38(3);
      return dword_60CC7824(
               v9,
               v13,
               0,
               dword_60CC7824,
               FIELD_U32(dword_60CD0B68, 96),
               FIELD_U32(dword_60CD0B68, 100),
               FIELD_U32(dword_60CD0B68, 28));
    }
  }
  return result;
}
