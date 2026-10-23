/* sub_605E16D4
 * address: 0x605E16D4   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605E16D4(int a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r1
  int *v5; // r1
  float v6; // s2
  _BOOL4 v7; // r1
  float v8; // s0
  int v9; // r0
  float v10; // s0
  int v11; // r1
  int v12; // r1
  float v13; // s0
  float v14; // s0
  float v15; // s4
  float v16; // s16
  int v17; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  sub_605D793C(a1);
  FIELD_U32(a1, 96) = -1063256064;
  v2 = (int *)(a1 + 8012);
  switch ( FIELD_U32(a1, 8012) )
  {
    case 0:
      sub_605D840C(a1, 0x8000000);
      if ( (FIELD_U8(a1, 6804) & 1) != 0 )
      {
        v3 = 3;
        FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.5;
        FIELD_F32(a1, 124) = FIELD_F32(a1, 124) * -0.5;
        goto LABEL_31;
      }
      return;
    case 1:
      sub_605D840C(a1, 0x8000000);
      if ( (FIELD_U8(a1, 6804) & 1) != 0 )
      {
        sub_605EAB48(a1 + 6064, 0.0);
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 104) = 0;
        v3 = 2;
        goto LABEL_31;
      }
      return;
    case 2:
      sub_605D840C(a1, 0x8000000);
      if ( sub_605EB988(**(_DWORD **)(FIELD_U32(a1, 6076) + 12), v4) == 1 )
      {
        v3 = 3;
        goto LABEL_31;
      }
      return;
    case 3:
      sub_605D840C(a1, 0x8000000);
      if ( (FIELD_U8(a1, 6804) & 1) != 0 )
      {
        v5 = dword_605E1B38;
        if ( FIELD_U32(a1, 6256) == 1 )
          v5 = &dword_605E1B38[1];
        v6 = (float)(FIELD_F32(EnemyCounterMaybe_instance, 16) + *(float *)v5)
           + (float)((float)FIELD_S32(a1, 6780) * 16.0);
        FIELD_F32(a1, 6776) = v6;
        v7 = FIELD_F32(a1, 108) > v6;
        FIELD_U32(a1, 80) = v7;
        v8 = (float)byte_60B0594C[v7];
        FIELD_U32(a1, 104) = 1028443341;
        FIELD_F32(a1, 120) = v8 + v8;
        FIELD_U32(a1, 124) = 0;
        FIELD_F32(a1, 132) = v8 * 2.5;
        ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(a1 + 6064, 1, 4.0, 2.0, 0.0);
        *v2 = 4;
        FIELD_U32(a1, 6264) |= 0x40000u;
      }
      return;
    case 4:
      sub_605D840C(a1, 0x8000000);
      v9 = FIELD_U32(a1, 80);
      if ( v9 == 1 )
      {
        v10 = FIELD_F32(a1, 6776);
        if ( FIELD_F32(a1, 108) > v10 )
          return;
LABEL_30:
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 104) = 0;
        FIELD_F32(a1, 108) = v10;
        FIELD_U32(a1, 80) = 1;
        v3 = 5;
        goto LABEL_31;
      }
      if ( !v9 )
      {
        v10 = FIELD_F32(a1, 6776);
        if ( FIELD_F32(a1, 108) >= v10 )
          goto LABEL_30;
      }
      return;
    case 5:
      target = -715827882;
      v17 = 0x8000000;
      if ( !moveValueTo((int *)(a1 + 160), &target, &v17) )
        return;
      sub_605EAB48(a1 + 6064, 0.0);
      v3 = 6;
      goto LABEL_31;
    case 8:
      v11 = FIELD_U32(a1, 8016);
      if ( !v11 || (v12 = v11 - 1, (FIELD_U32(a1, 8016) = v12) == 0) )
      {
        if ( FIELD_U32(a1, 6144) == 12 )
        {
          v13 = sub_605EB980(**(_DWORD **)(FIELD_U32(a1, 6076) + 12));
          if ( v13 >= 0.0 && v13 < 11.0 )
          {
            FIELD_U32(a1, 80) = 0;
            FIELD_U32(a1, 104) = 1045220557;
            FIELD_F32(a1, 132) = (float)1 * 2.5;
            ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(a1 + 6064, 1, 4.0, 2.0, 0.0);
            *v2 = 9;
            FIELD_U32(a1, 6268) |= 0x10u;
          }
        }
      }
      return;
    case 9:
      sub_605D840C(a1, 402653184);
      v14 = FIELD_F32(a1, 108);
      v15 = FIELD_F32(dword_60CBFA90, 264);
      v16 = v15 + 32.0;
      if ( v14 > v15 )
      {
        sub_605D83A4(a1, 0, -1800.0);
        v14 = FIELD_F32(a1, 108);
      }
      if ( v14 < v16 )
        return;
      FIELD_F32(a1, 108) = v16;
      FIELD_U32(a1, 6264) |= 0x200000u;
      v3 = 10;
LABEL_31:
      *v2 = v3;
      return;
    case 0xA:
      sub_605D83A4(a1, 0, -1800.0);
      return;
    default:
      return;
  }
}
