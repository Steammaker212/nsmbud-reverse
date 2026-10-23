/* sub_6058C8C0
 * address: 0x6058C8C0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058C8C0(int a1)
{
  int result; // r0
  int v3; // r1
  _DWORD v4[6]; // [sp+4h] [bp-24h] BYREF
  char v5; // [sp+1Ch] [bp-Ch]

  v4[0] = FIELD_U32(a1, 7492);
  v4[1] = FIELD_U32(a1, 7496);
  v4[2] = FIELD_U32(a1, 7500);
  v4[4] = 1;
  v4[5] = FIELD_U8(a1, 7504);
  v5 = FIELD_U8(LevelInfo_instance, 18);
  v4[3] = 2;
  sub_60582938(dword_60CAF15C, (int)v4);
  result = 7308;
  v3 = FIELD_U32(a1, 7308);
  if ( v3 )
    return sub_6058568C(dword_60CAF15C, v3, FIELD_U32(a1, 7316));
  return result;
}
