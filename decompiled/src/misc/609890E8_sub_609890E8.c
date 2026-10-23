/* sub_609890E8
 * address: 0x609890E8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_609890E8(int a1, int a2, int a3, int a4)
{
  float v6; // s16
  float v7; // s18
  float result; // s0

  v6 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 128))(a1);
  v7 = *(float *)(*(_DWORD *)a4 + 16);
  result = FIELD_F32(a2, 24)
         + (float)((float)-(float)(v7
                                 * (float)(*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(*(_DWORD *)a4 + 40) + 88))(
                                            *(_DWORD *)(*(_DWORD *)a4 + 40),
                                            v6))
                 - v6);
  FIELD_F32(a2, 24) = result;
  return result;
}
