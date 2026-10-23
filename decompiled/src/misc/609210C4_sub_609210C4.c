/* sub_609210C4
 * address: 0x609210C4   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609210C4(int result, char a2)
{
  int v2; // r7
  int v3; // r4
  int v4; // r6
  _BOOL4 v5; // r5
  _BYTE v6[96]; // [sp+8h] [bp-D8h] BYREF
  _BYTE v7[120]; // [sp+68h] [bp-78h] BYREF

  v2 = a2 & 1;
  v3 = result;
  v4 = v2;
  if ( (a2 & 0x3E) != 0 )
  {
    dword_60CC75D8(v7, FIELD_U32(dword_60CCFC8C, 28));
    dword_60CC75DC(v7);
    dword_60CC75E0(
      v7,
      FIELD_U8(v3, 317) + 2 * FIELD_U8(v3, 318),
      FIELD_U8(v3, 316));
    dword_60CC75E4(v7, FIELD_U8(v3, 319), FIELD_U8(v3, 320), FIELD_U8(v3, 321));
    dword_60CC75E8(v7, FIELD_F32(v3, 304), FIELD_F32(v3, 308));
    dword_60CC75EC(v7, FIELD_F32(v3, 312));
    dword_60CC75F0(v7, (FIELD_U8(v3, 332) >> 2) & 1, FIELD_U8(v3, 323));
    dword_60CC75F4(v7, v3 + 288);
    dword_60CC7600(v7, (float)FIELD_U8(v3, 322));
    dword_60CC7604(v7, 0);
    memset(v6, 0, sizeof(v6));
    dword_60CC7638(v6, v7);
    v5 = sub_60917B1C(v3, (int)v6);
    result = dword_60CC763C(v6);
    v4 = v2;
    if ( v5 )
      v4 = 1;
  }
  if ( v2 )
  {
    result = FIELD_U8(v3, 332);
    if ( (result & 2) != 0 )
    {
      dword_60CC7528(v7);
      dword_60CC7538(
        v7,
        FIELD_U8(v3, 324),
        FIELD_U8(v3, 325),
        FIELD_U8(v3, 326),
        FIELD_U8(v3, 327));
      sub_60920CA8(v3 + 16, (int)v7);
      result = FIELD_U8(v3, 332) | 0x40;
    }
    else
    {
      if ( (result & 0x40) == 0 )
        goto LABEL_10;
      sub_609209F0((_DWORD *)(v3 + 16));
      result = FIELD_U8(v3, 332) & 0xBF;
    }
    FIELD_U8(v3, 332) = result;
  }
LABEL_10:
  if ( v4 )
    return sub_60917BC8(v3, FIELD_U32(v3, 272));
  return result;
}
