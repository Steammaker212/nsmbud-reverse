/* SE_MG_CMN_ITEM_SHOT_ref_2
 * address: 0x6073FB74   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_MG_CMN_ITEM_SHOT_ref_2(int a1)
{
  unsigned __int8 *v2; // r4
  _DWORD *v3; // t1
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  float result; // s0

  EffectData_create(265, (Vec3 *)(a1 + 108), 0, 0);
  sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_ITEM_SHOT", 0, 1);
  v3 = *(_DWORD **)(a1 + 6300);
  v2 = (unsigned __int8 *)(a1 + 6300);
  v4 = (int *)v3[3];
  v5 = v3[17];
  if ( v3[2] > v5 )
    v4 += v5;
  v6 = *v4;
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 0;
  *((_DWORD *)v2 - 1545) = 1065353216;
  *((_DWORD *)v2 - 1544) = 0x40000000;
  *((_DWORD *)v2 - 1541) = -1065353216;
  *((_DWORD *)v2 - 1550) = -1090519040;
  *((_WORD *)v2 - 12) = 10;
  result = (float)((float)v2[68] * 8.0) + 3500.0;
  *((float *)v2 - 1546) = result;
  return result;
}
