/* sub_600AA708
 * address: 0x600AA708   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AA708(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  float v5; // s16
  int v6; // r1
  unsigned int v7; // r0
  int result; // r0

  v2 = a1 + 7096;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1316))(a1);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  v5 = *(float *)(*(_DWORD *)v3 + 20);
  if ( v5 <= 97.0 )
    sub_6081356C(a1 + 6332, "SE_BOSS_KAMECK_DEMO_FLY_STOP", FIELD_S16(a1, 6640), 0);
  if ( v5 == 37.0 )
    sub_608134CC(a1 + 6332, "SE_BOSS_KAMECK_DEMO_FLY_KAITEN", FIELD_S16(a1, 6640), 0);
  if ( v5 >= 231.0 )
    sub_6081356C(a1 + 6332, "SE_EMY_KAMECK_FLY_START", FIELD_S16(a1, 6640), 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
    v6 += 4 * v7;
  result = *(unsigned __int8 *)(*(_DWORD *)v6 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C82AE0);
  return result;
}
