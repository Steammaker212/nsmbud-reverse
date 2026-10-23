/* sub_6011DE58
 * address: 0x6011DE58   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011DE58(float *a1, float *a2)
{
  float v4; // s16
  float v5; // s16
  int v6; // r0

  v4 = *a2;
  a1[30] = v4 / (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 744))(a1);
  v5 = a2[1];
  a1[31] = v5 / (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 744))(a1);
  v6 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1032))(v6) == 1 )
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 772))(a1);
  *((_BYTE *)a1 + 6980) = 1;
  return 6980;
}
