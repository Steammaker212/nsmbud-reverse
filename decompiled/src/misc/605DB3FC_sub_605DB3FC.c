/* sub_605DB3FC
 * address: 0x605DB3FC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DB3FC(int a1)
{
  int v2; // r0
  int *v3; // r7
  int v4; // r5
  float v5; // s0
  int result; // r0
  int v7; // r1
  int v8; // r2
  __int16 v9; // r2
  float *v10; // r3
  int v11; // r5
  float v12[2]; // [sp+0h] [bp-28h] BYREF
  float v13; // [sp+8h] [bp-20h]
  float v14; // [sp+Ch] [bp-1Ch]

  v3 = (int *)(a1 + 6264);
  v2 = FIELD_U32(a1, 6264);
  v4 = dword_60CC6484;
  if ( (v2 & 0x20000) != 0 )
  {
    v5 = FIELD_F32(dword_60CC6484, 32);
    if ( FIELD_F32(a1, 108) > v5 )
      FIELD_F32(a1, 108) = v5;
  }
  *v3 = v2 & 0xFFFFE1FF;
  v12[0] = 3.4028e38;
  v12[1] = 3.4028e38;
  v13 = -3.4028e38;
  v14 = -3.4028e38;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 408))(a1, v12);
  if ( !((int (__fastcall *)(float *, int))loc_6015A9F4)(v12, v4 + 40) )
    *v3 |= 0x400u;
  result = sub_607FCAA8(v4);
  v7 = *v3;
  if ( (*v3 & 0x400) == 0 || (v8 = FIELD_U32(a1, 6260), (v8 & 0xC00) != 0) || (v7 & 0x2000) != 0 && (v8 & 2) == 0 )
  {
    if ( (v7 & 0x800) == 0 )
      return result;
    goto LABEL_17;
  }
  v9 = v7 | 0x200;
  *v3 = v7 | 0x200;
  v10 = (float *)(AreaTask_intance + 1816);
  if ( result == 2 )
    v10 = (float *)(v4 + 132);
  if ( v14 < (float)(*v10 + -24.0) )
  {
    v9 = v7 | 0xA00;
    *v3 = v7 | 0xA00;
  }
  if ( (v9 & 0x800) != 0 )
  {
LABEL_17:
    if ( result == 2
      || (FIELD_U32(a1, 6260) & 2) != 0
      || FIELD_U32(dword_60C99DD4, 764) == 4
      || (v11 = AreaTask_intance + 1812,
          ((int (__fastcall *)(int, float))loc_6015AB38)(AreaTask_intance + 1812, v12[0]) != 1)
      || !((int (__fastcall *)(int, float))loc_6015AB38)(v11, v13) )
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
    else
    {
      return sub_605E0870(a1, &dword_60CB1A24, 0);
    }
  }
  return result;
}
