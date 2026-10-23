/* sub_601F1FA0
 * address: 0x601F1FA0   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F1FA0(int a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r1
  int v5; // r2
  int v6; // r1
  float v7; // s4
  float v8; // s16
  float v9; // s0
  float v10; // s4
  float v11; // s16
  float v12; // s0
  float v13; // s0
  int v14; // r2
  int a5; // [sp+0h] [bp-30h] BYREF
  int target[11]; // [sp+4h] [bp-2Ch] BYREF

  result = FIELD_U32(a1, 596);
  switch ( result )
  {
    case 0:
      result = FIELD_U32(a1, 708) - 1;
      FIELD_U32(a1, 708) = result;
      if ( !result )
      {
        result = 1;
        FIELD_U32(a1, 596) = 1;
      }
      break;
    case 1:
      v3 = (int *)(a1 + 180);
      sub_60832338((int *)(a1 + 180), (int *)(a1 + 192), (int *)(a1 + 700), (int *)(a1 + 704));
      target[0] = 50331648;
      a5 = 0x100000;
      moveValueTo((int *)(a1 + 700), target, &a5);
      target[0] = 3145728;
      a5 = 0x10000;
      moveValueTo((int *)(a1 + 704), target, &a5);
      result = FIELD_U32(a1, 192);
      v4 = result;
      if ( result < 0 )
      {
        v4 = FIELD_U32(a1, 192);
        if ( result != 0x80000000 )
          v4 = -result;
      }
      v5 = *v3;
      if ( *v3 < 0 && v5 != 0x80000000 )
        v5 = -v5;
      v6 = v4 - v5;
      if ( v6 < 0 )
      {
        if ( v6 == 0x80000000 )
          return result;
        v6 = -v6;
      }
      if ( (unsigned int)v6 >> 20 <= 2 )
      {
        FIELD_U32(a1, 180) = result;
        FIELD_F32(a1, 584) = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 608))
                             / (float)(sqrtf(
                                         (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 612))
                                               * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 612)))
                                       + (float)((float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 604))
                                               * (float)(FIELD_F32(a1, 80) - FIELD_F32(a1, 604))))
                                     / FIELD_F32(a1, 200));
        goto LABEL_17;
      }
      break;
    case 2:
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      v7 = FIELD_F32(a1, 80) - FIELD_F32(a1, 604);
      v8 = sqrtf(
             (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 612))
                   * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 612)))
           + (float)(v7 * v7));
      v9 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 608)) / (float)(v8 / FIELD_F32(a1, 200));
      FIELD_F32(a1, 584) = v9;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v9, 0.1, 0.1, 0.05);
      result = ((int (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 15.0, 0.1, 0.4, 0.03);
      if ( v8 < 300.0 )
      {
LABEL_17:
        result = FIELD_U32(a1, 596) + 1;
        FIELD_U32(a1, 596) = result;
      }
      break;
    case 3:
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      v10 = FIELD_F32(a1, 80) - FIELD_F32(a1, 604);
      v11 = sqrtf(
              (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 612))
                    * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 612)))
            + (float)(v10 * v10));
      v12 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 608)) / (float)(v11 / FIELD_F32(a1, 200));
      FIELD_F32(a1, 584) = v12;
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, -v12, 0.1, 0.1, 0.05);
      v13 = (*(float (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 332))(a1, FIELD_U32(a1, 624));
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, v13, 0.4, 0.4, 0.3);
      target[0] = -1073741824;
      a5 = 5242880;
      result = moveValueTo((int *)(a1 + 180), target, &a5);
      if ( v11 < FIELD_F32(a1, 200) )
      {
        FIELD_U32(a1, 120) = 0;
        FIELD_F32(a1, 200) = (*(float (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 332))(a1, FIELD_U32(a1, 624));
        v14 = FIELD_U32(a1, 624);
        FIELD_U32(a1, 588) = 0x100000000LL / v14;
        FIELD_U32(a1, 192) = 0;
        (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 72))(
          a1,
          *(_DWORD *)(*(_DWORD *)a1 + 72),
          0x100000000LL % v14,
          (unsigned __int64)(0x100000000LL % v14) >> 32);
        result = (int)StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&unk_60C8B654);
      }
      break;
    default:
      return result;
  }
  return result;
}
