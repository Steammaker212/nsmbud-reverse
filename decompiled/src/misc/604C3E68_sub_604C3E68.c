/* sub_604C3E68
 * address: 0x604C3E68   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C3E68(_BYTE *a1)
{
  int v1; // r1

  v1 = FIELD_U32(dword_60CC6D78, 416);
  a1[14020] = 0;
  a1[14019] = 0;
  a1[14016] = 0;
  a1[14015] = 0;
  a1[14018] = 0;
  a1[14017] = 0;
  a1[14021] = 1;
  a1[14022] = 0;
  a1[14023] = 0;
  a1[14024] = v1 == 0;
  a1[14025] = 1;
  return sub_604C6B78(a1);
}
