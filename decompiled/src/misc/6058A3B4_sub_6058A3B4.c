/* sub_6058A3B4
 * address: 0x6058A3B4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058A3B4(_DWORD *a1)
{
  _DWORD v2[6]; // [sp+4h] [bp-24h] BYREF
  char v3; // [sp+1Ch] [bp-Ch]

  v2[0] = a1[1745];
  v2[1] = a1[1746];
  v2[2] = a1[1747];
  v2[4] = 0;
  v2[5] = 0;
  v3 = FIELD_U8(LevelInfo_instance, 18);
  v2[3] = 2;
  return sub_60582A68(dword_60CAF15C, (int)v2);
}
