/* sub_607B0E2C
 * address: 0x607B0E2C   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0E2C(int a1)
{
  float v2; // s0
  int v3; // r1
  float v4; // s0
  int v5; // r1
  bool v6; // nf
  int v7; // r0
  int v8; // r0

  v2 = 10.0;
  v3 = 6;
  FIELD_U32(a1, 1204) |= 0x4000000u;
  FIELD_U32(a1, 1224) |= 0x800u;
  if ( FIELD_U32(a1, 9964) )
    FIELD_U32(a1, 1216) |= 0x200000u;
  if ( FIELD_U32(a1, 1320) == 9 && !FIELD_U8(a1, 12917) )
  {
    v2 = 20.0;
    v3 = 231;
    if ( !FIELD_U32(a1, 80) )
      v3 = 230;
  }
  if ( FIELD_U32(a1, 9936) != 1 )
    v2 = 0.0;
  sub_60794954(FIELD_U32(a1, 648), v3, v2, 0.0);
  ((void (__fastcall *)(int, float, float))loc_6075F54C)(a1, FIELD_F32(a1, 7116), 10.0);
  FIELD_U32(a1, 1224) |= 0x47D4u;
  if ( (FIELD_U8(a1, 6918) & 0x10) != 0 )
    FIELD_U32(a1, 1228) |= 0x10000u;
  if ( (FIELD_U8(a1, 6902) & 8) == 0 )
    sub_607C4344(a1);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 12072) = 0;
  FIELD_U32(a1, 9940) = 1;
  ((void (__fastcall *)(int))loc_6076438C)(a1);
  if ( (FIELD_U8(a1, 1227) & 4) != 0 && !FIELD_U32(a1, 12064) )
  {
    v4 = 0.5;
  }
  else
  {
    v4 = FIELD_F32(a1, 124);
    if ( v4 >= -0.9 )
      goto LABEL_19;
    v4 = -0.9;
  }
  FIELD_F32(a1, 124) = v4;
LABEL_19:
  v5 = FIELD_U32(a1, 15080);
  v6 = v5 < 0;
  if ( v5 < 0 )
    v5 = 90;
  if ( v6 )
    FIELD_U32(a1, 15080) = 90;
  FIELD_U8(a1, 15074) = 1;
  FIELD_F32(a1, 15088) = (float)(-1.5 * (float)(1.0 - (float)((float)(90 - v5) / (float)90)))
                         + (float)(-3.0 * (float)((float)(90 - v5) / (float)90));
  if ( FIELD_U32(a1, 1288) || (FIELD_U8(a1, 1205) & 4) != 0 )
  {
    v8 = 0;
    goto LABEL_35;
  }
  if ( (FIELD_U8(a1, 1208) & 8) != 0 )
  {
    sub_607716F8(a1);
    goto LABEL_36;
  }
  if ( v4 <= 1.5 )
  {
    sub_607865BC(a1 + 688, 6);
    v4 = FIELD_F32(a1, 124);
  }
  FIELD_U32(a1, 100) = -1095887749;
  v7 = 0;
  if ( v4 > 2.5 || (v7 = 1, v4 > -0.55) || (v7 = 2, v4 > -1.2) || (v7 = 3, v4 > -2.0) || (v7 = 4, v4 > -3.0) )
  {
    v8 = *((_DWORD *)&unk_60B0B0DC + v7 + 120);
LABEL_35:
    FIELD_U32(a1, 100) = v8;
  }
LABEL_36:
  ((void (__fastcall *)(int))loc_607B1154)(a1);
  ((void (__fastcall *)(int))loc_60771910)(a1);
  return sub_607711C8(a1);
}
