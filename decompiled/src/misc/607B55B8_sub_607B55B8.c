/* sub_607B55B8
 * address: 0x607B55B8   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607B55B8(int a1)
{
  int v2; // r0
  bool v3; // zf
  float **v4; // r5
  float **v5; // r0
  float result; // s0
  StateBase *v7; // r1
  void (__fastcall *v8)(int, float); // r1
  float v9; // s0

  v2 = FIELD_U32(a1, 6900);
  if ( (v2 & 1) != 0 )
  {
    FIELD_U32(a1, 12380) = 30;
    FIELD_U32(a1, 80) ^= 1u;
    v7 = (StateBase *)&dword_60CC4BBC;
LABEL_12:
    Player_changeState(a1, v7, 1);
    return result;
  }
  if ( (v2 & 0x3000000) != 0 )
    goto LABEL_11;
  v3 = (v2 & 0x220) == 32;
  if ( (v2 & 0x220) != 0x20 )
    v3 = (v2 & 0x440) == 64;
  if ( v3 )
  {
LABEL_11:
    FIELD_U32(a1, 12380) = 30;
    FIELD_U32(a1, 80) ^= 1u;
    v7 = (StateBase *)&unk_60CC4C04;
    goto LABEL_12;
  }
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) == 0;
  v4 = (float **)(a1 + 1276);
  v5 = (float **)(a1 + 1276);
  if ( !v3 )
    v5 = (float **)(a1 + 1280);
  if ( sub_607B74E0(a1, 3.628, **v5 * flt_60B0A898[FIELD_U32(a1, 80)]) == 1 )
  {
    sub_60773630(a1, 29, 0);
    FIELD_U32(a1, 12380) = 5;
  }
  else if ( FIELD_U32(a1, 9940) && sub_6078663C(a1 + 688) == 1 )
  {
    sub_60773630(a1, 29, 0);
    FIELD_U32(a1, 12380) = 5;
    Player_changeState(a1, (StateBase *)&dword_60CC4BE0, 0);
    FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80) ^ 1);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
      v4 = (float **)(a1 + 1280);
    result = **v4 * flt_60B0A898[FIELD_U32(a1, 80)];
    FIELD_F32(a1, 88) = result;
  }
  else
  {
    v8 = *(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1088);
    if ( FIELD_U32(a1, 1320) == 3 )
    {
      v8(a1, -395.0);
      v9 = FIELD_F32(a1, 12384)
         + (float)((float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                         + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                         * *(float *)((char *)&sinLutTable[1] + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                 * 0.000000059605))
                 * -3.0);
    }
    else
    {
      v8(a1, -400.0);
      v9 = FIELD_F32(a1, 12384);
    }
    FIELD_F32(a1, 108) = v9;
    if ( sub_6079A890((_DWORD *)a1) == 1 )
      FIELD_U32(a1, 12388) = FIELD_U32(a1, 112);
    switch ( FIELD_U32(a1, 9940) )
    {
      case 0:
        sub_607B58B0(a1);
        break;
      case 1:
        sub_607B5A18(a1);
        break;
      case 2:
        SE_PLY_POLE_CLIMB_ref(a1);
        break;
      case 3:
        SE_PLY_POLE_SLIDE_ref(a1);
        break;
      default:
        break;
    }
    result = FIELD_F32(a1, 9608) + FIELD_F32(a1, 112);
    FIELD_F32(a1, 112) = result;
  }
  return result;
}
