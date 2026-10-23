/* sub_606CCBA8
 * address: 0x606CCBA8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CCBA8(int a1, float *a2)
{
  int v4; // r0
  unsigned int v5; // r4
  int ResArchiveById; // r6
  int v7; // r7
  float v8; // s0
  int v9; // r7
  unsigned int v10; // r4
  int v12; // [sp+0h] [bp-20h]

  v4 = FIELD_U8(a1, 23) & 0xF;
  if ( v4 )
    FIELD_F32(a1, 116) = 0.0 - (float)(unsigned int)(10 * v4);
  else
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
  v5 = FIELD_U32(a1, 24);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
  v8 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 268))(a1);
  v12 = v7;
  v9 = ((v5 >> 8) & 0x1F) + 3;
  v10 = (v5 & 0xF) + 3;
  sub_6063916C(a1 + 6916, ResArchiveById, v9, v10, v8, v12);
  FIELD_F32(a1, 8016) = (float)(unsigned int)v9 * -8.0;
  FIELD_F32(a1, 8020) = (float)v10 * 8.0;
  *a2 = (float)(unsigned int)v9 * 16.0;
  a2[1] = (float)v10 * 16.0;
  return 1;
}
