/* sub_60922794
 * address: 0x60922794   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922794(_DWORD *a1, int *a2, int a3)
{
  int v4; // r0
  int v5; // r3
  _BYTE v7[88]; // [sp+0h] [bp-58h] BYREF

  v4 = *a2;
  v5 = a2[1];
  a1[64] = a2[2];
  a1[63] = v5;
  a1[62] = v4;
  a1[67] = a3;
  dword_60CC7464(a1 + 2);
  dword_60CC7444(v7, FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC7448(v7);
  dword_60CC744C(v7, a1[62], a1[63], a1[67]);
  return dword_60CC745C(a1 + 2, v7);
}
