/* sub_6071EB78
 * address: 0x6071EB78   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071EB78(int a1, int a2)
{
  float *v4; // r6
  float v5; // s16
  float v6; // s0
  _BYTE v8[4]; // [sp+4h] [bp-13Ch] BYREF
  unsigned int v9; // [sp+8h] [bp-138h]
  int v10; // [sp+1Ch] [bp-124h]
  int v11; // [sp+20h] [bp-120h]
  char v12; // [sp+5Eh] [bp-E2h]
  _BYTE v13[212]; // [sp+6Ch] [bp-D4h] BYREF

  v4 = *(float **)(a2 + 28);
  v5 = (*(float (__fastcall **)(float *))(*(_DWORD *)v4 + 16))(v4);
  v6 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)v4 + 20))(v4, v5);
  sub_6090C77C(v13, v5, v6, -v4[39], -v4[40], v4[41], v4[42]);
  sub_6090B350(v8);
  v9 = v9 & 0xFFFFFFFC | 1;
  v8[0] = 1;
  v8[1] = 1;
  v11 = 255;
  v8[2] = 1;
  v12 = 7;
  v10 = 1031798784;
  sub_6090B4B0(v8, FIELD_U32(a2, 40));
  ((void (__fastcall *)(int, _DWORD))loc_6071E788)(a1, FIELD_U32(a2, 40));
  v11 &= 0xFFFFFF0F;
  sub_6090B4B0(v8, FIELD_U32(a2, 40));
  return nullsub_113(v13);
}
