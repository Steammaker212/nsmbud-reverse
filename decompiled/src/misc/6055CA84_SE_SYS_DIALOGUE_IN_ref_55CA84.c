/* SE_SYS_DIALOGUE_IN_ref_55CA84
 * address: 0x6055CA84   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_55CA84(int a1)
{
  _BYTE *v1; // r4
  _DWORD *v2; // r5
  _BYTE *v3; // r7
  int result; // r0

  FIELD_U8(a1, 13585) = 0;
  v1 = (_BYTE *)(a1 + 13585);
  v2 = (_DWORD *)(a1 + 44);
  FIELD_U8(a1, 13589) = 0;
  FIELD_U8(a1, 13588) = 0;
  FIELD_U8(a1, 13584) = 0;
  v3 = (_BYTE *)(a1 + 13584);
  FIELD_U8(a1, 13587) = 0;
  FIELD_U8(a1, 13586) = 0;
  sub_604741D8((_DWORD *)(a1 + 44), 0, &dword_60CADD20, 0);
  sub_6047455C((int)v2, 0, 0.0);
  *v3 = 1;
  sub_60478680((int)"SE_SYS_DIALOGUE_IN", 9);
  sub_604741D8(v2, 1u, &dword_60CADD28, 0);
  result = sub_6047455C((int)v2, 1u, 0.0);
  *v1 = 1;
  v1[164] = 1;
  v1[166] = 0;
  return result;
}
