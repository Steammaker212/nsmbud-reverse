/* SE_PLY_ref_2_helper
 * address: 0x604F2F08   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_2_helper(int a1, unsigned int a2, int a3)
{
  unsigned int v6; // r4
  int result; // r0
  int v8; // r10
  int v9; // r4
  int v10; // r0
  unsigned int v11; // r9
  int v12; // r7
  unsigned int v13; // r1
  unsigned int *v14; // r7
  unsigned int v15; // t1
  unsigned int v16; // r0
  int v17; // r8
  unsigned int v18; // r4
  int v19; // r0
  unsigned int v20; // r11
  int v21; // r7
  int v22; // r0
  Vec3 v23; // [sp+8h] [bp-40h] BYREF
  Vec3 v24[4]; // [sp+18h] [bp-30h] BYREF

  v6 = a2;
  if ( a2 >= 6 )
    v6 = 0;
  result = a1 + 2988 * v6;
  if ( FIELD_U8(result, 58813) )
  {
    v8 = result + 56124;
    if ( a3 == 2 )
    {
      *(_BYTE *)(a1 + v6 + 74448) = 1;
      v9 = a1 + 2988 * v6;
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(v9, 56140) + 4) + 156))(*(_DWORD *)(FIELD_U32(v9, 56140) + 4));
      sub_604056E8(v8, 10);
      FIELD_U32(a1, 48896) = SE_PLY_ref_2_helper_helper_1E2F00(dword_60C8B13C, a2);
      FIELD_U32(a1, 48900) = sub_600243A0(FIELD_U32(v9, 56628));
      ((void (__fastcall *)(int, int, _DWORD))loc_60814A1C)(a1 + 48588, 54, 0);
      v10 = sub_601CF9C0(dword_60C8AEF0);
      return sub_601D9B20(v10);
    }
    v11 = FIELD_U32(result, 58668);
    result = sub_60405ADC(result + 56124);
    if ( !result )
    {
      v12 = a1 + 2988 * v6;
      v15 = FIELD_U32(v12, 56628);
      v14 = (unsigned int *)(v12 + 56628);
      v13 = v15;
      v16 = v15;
      if ( v15 > 9 )
        v16 = 0;
      result = byte_60B03258[15 * v16 + a3];
      if ( result )
      {
        if ( a3 == 14 )
        {
          SE_PLY_ref_2_helper_helper_405B2C(v8);
          result = sub_60405B04(v8);
          if ( result != 1 )
            return result;
          v13 = *v14;
        }
        else
        {
          result = 15380;
          if ( ((0x3C14u >> a3) & 1) != 0 )
            return result;
        }
        if ( v13 > 9 )
          v13 = 1;
        v17 = dword_60B032F0[a3];
        sub_6074F074(a1 + 44 * v6 + 74052, v13, v17);
        if ( *(_BYTE *)(a1 + 2988 * v6 + 58828) )
          sub_604056E8(v8, v17);
        v18 = 0;
        if ( v11 < 6 )
          v18 = v11;
        v19 = a1 + 2988 * v18;
        v20 = *v14;
        v24[0] = *(Vec3 *)(v19 + 56588);
        v21 = v19 + 56124;
        if ( sub_60405B04(v19 + 56124) && sub_60405B94(v21) == 1 )
        {
          v23 = *(Vec3 *)(a1 + 2988 * v18 + 56552);
          result = sub_60236E40(v11, 1235, v24, 0, &v23);
        }
        else
        {
          v22 = 2;
          if ( !v20 )
            v22 = 1;
          if ( v20 == 3 )
            v22 = 0;
          result = sub_60236E40(v11, dword_60B0332C[v22], v24, 0, 0);
        }
        if ( a3 == 9 )
          return sub_604058BC(v8);
      }
    }
  }
  return result;
}
