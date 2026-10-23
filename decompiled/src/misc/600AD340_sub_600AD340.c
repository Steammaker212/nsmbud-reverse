/* sub_600AD340
 * address: 0x600AD340   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AD340(int a1)
{
  int v2; // r0
  bool v3; // cc
  int result; // r0
  signed int v5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+4h] [bp-14h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
  v6 = -1073741824;
  v5 = dword_60C83110;
  sub_6083246C((int *)(a1 + 7100), &v6, &v5);
  FIELD_F32(a1, 7108) = FIELD_F32(a1, 7104)
                        * (float)((float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 7100) >> 20) & 0xFF0))
                                        + (float)((float)((float)(FIELD_U32(a1, 7100) & 0xFFFFFF)
                                                        * *(float *)((char *)&sinLutTable[1]
                                                                   + ((FIELD_U32(a1, 7100) >> 20) & 0xFF0)))
                                                * 0.000000059605))
                                + 1.0);
  sub_600AF29C(a1);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -0.2;
  v2 = FIELD_U32(a1, 7560);
  v3 = v2 <= 1;
  result = v2 - 1;
  FIELD_U32(a1, 7560) = result;
  if ( v3 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C830B4);
  return result;
}
