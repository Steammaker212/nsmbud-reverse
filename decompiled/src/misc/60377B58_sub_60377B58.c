/* sub_60377B58
 * address: 0x60377B58   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60377B58(int a1, int a2, _BYTE *a3, int a4, float *a5)
{
  int v6; // r0
  int v7; // r1
  float v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  float v13; // [sp+0h] [bp-20h] BYREF
  int v14; // [sp+4h] [bp-1Ch]
  int v15; // [sp+8h] [bp-18h]

  v6 = dword_60CC6D78 + 109034;
  FIELD_U8(dword_60CC6D78, 109034) |= 1 << (*a3 & 0xF);
  FIELD_U8(v6, 6) = 1;
  sub_603FFD44(dword_60C99DD4 + 852);
  v7 = dword_60C99DD4;
  FIELD_U32(dword_60C99DD4, 740) = dword_60B005A4[a4];
  FIELD_U32(v7, 760) = 0;
  v8 = *a5;
  v9 = *((_DWORD *)a5 + 1);
  v15 = *((_DWORD *)a5 + 2);
  v13 = v8;
  v14 = v9;
  sub_60833074(&v13);
  v10 = v14;
  v11 = dword_60CC62E4 + 116;
  FIELD_F32(dword_60CC62E4, 116) = v13;
  FIELD_U32(v11, 4) = v10;
  FIELD_U32(v11, 8) = 0;
  return sub_603F48B0(AreaTask_intance);
}
