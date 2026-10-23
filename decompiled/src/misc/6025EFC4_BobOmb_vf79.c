/* BobOmb_vf79
 * address: 0x6025EFC4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf79(int *a1, int a2, int a3)
{
  float v4; // s16
  int v5; // r0
  _BOOL4 v6; // r6
  float v7; // s0
  __int16 v8; // r2
  int v9; // r6
  float v11[4]; // [sp+0h] [bp-38h] BYREF
  char v12; // [sp+10h] [bp-28h]
  char v13; // [sp+11h] [bp-27h]
  char v14; // [sp+12h] [bp-26h]
  char v15; // [sp+13h] [bp-25h]
  char v16; // [sp+14h] [bp-24h]
  char v17; // [sp+15h] [bp-23h]
  char v18; // [sp+16h] [bp-22h]

  v4 = *(float *)(FIELD_U32(a3, 64) + 120);
  (*(void (__fastcall **)(int *))(*a1 + 364))(a1);
  v5 = a1[1621];
  v6 = v4 < 0.0;
  a1[1621] = v5 - 1;
  if ( v5 >= 1 )
  {
    v11[0] = *((float *)a1 + 27) + *((float *)a1 + 143);
    v11[1] = *((float *)a1 + 28) + *((float *)a1 + 144);
    v11[2] = *((float *)a1 + 29) + *((float *)a1 + 145);
    LODWORD(v11[3]) = v4 < 0.0;
    v12 = 1;
    v13 = 0;
    v16 = 0;
    v15 = 0;
    v18 = 0;
    v17 = 0;
    v14 = 0;
    sub_60583000(dword_60CAF15C, v11, 3);
  }
  a1[20] = v6;
  v7 = (float)byte_60AFE3F4[v6];
  a1[40] = Enemy_CommonRotations[v6];
  *((float *)a1 + 30) = v7 * 0.5;
  a1[31] = 1069547520;
  a1[32] = 0;
  a1[33] = 0;
  if ( a1[1614] <= 0 )
  {
    v8 = *((_WORD *)a1 + 3182);
    if ( (v8 & 4) == 0 )
    {
      *((_WORD *)a1 + 3182) = v8 | 4;
      a1[1614] = 240;
      v9 = **(_DWORD **)(a1[1588] + 28);
      sub_6041838C((ModelAnimation *)(v9 + 4));
      AnimationCtrl_setRepeat((ModelAnimation *)(v9 + 4), 0);
      FIELD_U32(v9, 20) = 0;
      FIELD_U32(v9, 28) |= 2u;
      FIELD_U32(v9, 24) = 1065353216;
    }
    (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C8E274);
  }
  return 1;
}
