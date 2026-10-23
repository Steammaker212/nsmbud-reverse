/* sub_605001F4
 * address: 0x605001F4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605001F4(int a1)
{
  int v2; // r5
  int v3; // r0
  unsigned int v4; // r0
  int *v5; // r6
  int v6; // r0
  _DWORD *v7; // r4

  v2 = a1 + 40;
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA74B8, 0);
  v3 = sub_60473B4C(v2);
  sub_6098F1D4(v3);
  FIELD_U8(a1, 7749) = 1;
  FIELD_U8(a1, 7750) = 1;
  *(_BYTE *)(FIELD_U32(a1, 5672) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 5676) + 64) |= 1u;
  v5 = (int *)(a1 + 7720);
  v4 = FIELD_U32(a1, 7720);
  if ( v4 >= 2 )
    v4 = 0;
  sub_6047E13C(8, &dword_60CA75E4[2 * v4], FIELD_U32(a1, 5672), 0);
  v6 = *v5;
  if ( (unsigned int)*v5 >= 2 )
    v6 = 0;
  sub_6047E13C(8, &dword_60CA75E4[2 * v6], FIELD_U32(a1, 5676), 0);
  CmnWindow_BtnL_Cancel_00_ref(a1);
  CmnWindow_BtnR_OK_00_ref(a1);
  FIELD_U32(a1, 4616) = 1;
  FIELD_U32(a1, 4620) = 1;
  v7 = (_DWORD *)(a1 + 3628);
  sub_6047F28C(v7, (int)"SE_SYS_DECIDE", 9);
  sub_6047F340(v7, (int)"SE_SYS_CURSOR", 9);
  sub_6047F37C(v7, 9);
  return sub_60478680((int)"SE_SYS_DIALOGUE_IN", 9);
}
