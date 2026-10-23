/* sub_6079F2B0
 * address: 0x6079F2B0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6079F2B0(int a1)
{
  float v2; // s0
  int v4; // [sp+4h] [bp-1Ch] BYREF
  int v5[2]; // [sp+8h] [bp-18h] BYREF
  int v6[4]; // [sp+10h] [bp-10h] BYREF

  v2 = (*(float (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 172))(FIELD_U32(a1, 11360));
  v4 = 8;
  *(float *)v6 = v2 * 8.0;
  *(float *)&v6[1] = v2 * 16.0;
  *(float *)v5 = v2 * 12.0;
  *(float *)&v5[1] = v2 * 12.0;
  return sub_60764C2C((_DWORD *)a1, v6, v5, &v4);
}
