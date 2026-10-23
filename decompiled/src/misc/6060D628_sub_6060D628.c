/* sub_6060D628
 * address: 0x6060D628   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060D628(int a1)
{
  unsigned int v2; // r1
  int Area; // r0
  int v4; // r3
  int v5; // r3
  int v6; // r3
  float v8[8]; // [sp+0h] [bp-20h] BYREF

  v2 = FIELD_U8(LevelInfo_instance, 18);
  v8[0] = 3.4028e38;
  v8[1] = 3.4028e38;
  v8[2] = -3.4028e38;
  v8[3] = -3.4028e38;
  Area = Level_getArea(Level_instance, v2);
  LevelArea_getLocation(Area, v8, FIELD_U8(a1, 6108));
  ((void (__fastcall *)(int, _DWORD, float *))sub_6060D720)(a1, 0, v8);
  ((void (__fastcall *)(int, int, float *, int))sub_6060D720)(a1, 1, v8, v4);
  ((void (__fastcall *)(int, int, float *, int))sub_6060D720)(a1, 2, v8, v5);
  return ((int (__fastcall *)(int, int, float *, int))sub_6060D720)(a1, 3, v8, v6);
}
