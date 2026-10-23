/* sub_6076B244
 * address: 0x6076B244   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076B244(int a1)
{
  int v2; // r5
  float v3; // r6
  float v4; // s0
  int v5; // r1

  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 728))(a1, 0);
  FIELD_U32(a1, 1212) |= 0x20u;
  v2 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 9836) = v2;
  v3 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 9840) = v3;
  FIELD_U32(a1, 9844) = FIELD_U32(a1, 116);
  v4 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  v5 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 9824) = v2;
  FIELD_F32(a1, 9828) = v3 - v4;
  FIELD_U32(a1, 9832) = v5;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 2.0;
  FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
  return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 740))(a1, 0);
}
