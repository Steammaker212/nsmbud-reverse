/* sub_60828D98
 * address: 0x60828D98   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60828D98(int a1)
{
  int v1; // r5
  int v2; // r6
  _BYTE v4[664]; // [sp+0h] [bp-298h] BYREF

  v1 = FIELD_U32(a1, 40);
  v2 = dword_60C99DEC;
  sub_603FC8C4((int)v4);
  qmemcpy((void *)(v2 + 16), v4, 0x280u);
  FIELD_U32(v2, 508) = 4;
  sub_6040D2C0(LevelInfo_instance);
  return sub_60820970(v1 + 16, v1 + 536, v1 + 1056);
}
